#include <iostream>
#include <cstdio>
#include <string> //redundant?
#include "newParser.hpp"
#include <algorithm>
#include <iterator>
#include <regex>
#include <cstdlib>

extern int yyparse (void);

map<string, Function> funcSymbols;
stack<string> funcStack;
Function* currFunction;
Block* currBlock;
map<string, StructType> structTypeTable;
vector<string> codeBuffer;
array<TypeEnum, 1000> memMap;

set <string> usedIntRegs;
set <string> usedRealRegs;

// ------------------------------------ initialization functions ---------------------------------
void currFunctionInit(string name) {
  currFunction = new Function(name);
}

// -----------------------------------------------------------------------------------------------

void printCodeBuffer() {
  cout << "\tCodeBuffer (size = " << codeBuffer.size() << ") : " << endl;
  int j = 1;
  for(std::vector<string>::iterator i = codeBuffer.begin() ; i != codeBuffer.end() ; ++i, ++j) {
    cout << "\t\t" << j-4 << ": " << *i << endl;  
    cout << *i << endl;
  }
}

void emit(string const& singleInstruction) {
  cout << "\t" << singleInstruction << endl;
  codeBuffer.push_back(singleInstruction);
}

bool isUsedIntReg(string& in) {
  return currFunction->usedIntRegs.find(in) != currFunction->usedIntRegs.end();
}

bool isUsedRealReg(string& in) {
  return currFunction->usedRealRegs.find(in) != currFunction->usedRealRegs.end();
}

bool isIntegerVariable(string& in) {
  try {
    return isUsedIntReg(in) || memMap[stoi(in)] == INTEGER;
  } catch (const std::invalid_argument& ia) {}
  return false;
}

bool isRealVariable(string& in) {
  try {
    return isUsedRealReg(in) || memMap[stoi(in)] == REAL;
  } catch (const std::invalid_argument& a) {}
  return false;
}

bool isInteger(string& in) {
  return !isReal(in);
}

bool isReal(string& in) {
  return in.find('.') != std::string::npos;
}

void printDeclarationList(map<string, Variable*> dl) {
  for(std::map<string, Variable*>::iterator v = dl.begin() ; v != dl.end() ; ++v) {
    Variable* var = v->second;
    cout << "Variable " << v->first << " of type " << var->getType() << endl;
    Defstruct* ds = NULL;
    if (ds = dynamic_cast<Defstruct*>(var)) {
      ds->printStructure();
    }
  }
}

/* iterate over the ids list and for each id create Variable with the DCL type and this id. The offset has no meaning here. It will be defined later.
 */
void createVariablesFromDCL(Stype* DCL, Stype* DECLARLIST) {
  for(std::list<string>::iterator i = DCL->dcl_ids.begin(); i != DCL->dcl_ids.end(); ++i) {
    Variable* v = NULL;
    if(isPrimitive(DCL->dcl_type)) {
      v = new Variable(*i, DCL->dcl_type, 0);
    } else {
      // this will create all inner Variables (new Variable()) of the struct
      v = new Defstruct(*i, DCL->dcl_type, 0);
      Defstruct* ds = dynamic_cast<Defstruct*>(v);
      assert(ds);
      //cout << v->getType() << endl;
      //ds->printStructure();
    }
    DECLARLIST->declarationList.insert(std::pair<string,Variable*>(*i, v));
  }
}

// iterate over the ids list and insert them with the relevant type to typedefList. 
// Finally, typedefList will be used to create one new StructType and insert it into the structTypeTable!
int createTypeFromDCL(Stype* DCL, Stype* DECLARLIST) {
  for(std::list<string>::iterator i = DCL->dcl_ids.begin(); i != DCL->dcl_ids.end(); ++i) {
    //cout << "DCL->dcl_type : " << DCL->dcl_type << endl;
    if(isPrimitive(DCL->dcl_type)) {
      Type* t = new Type(DCL->dcl_type);
      DECLARLIST->typedefList.insert(std::pair<string, Type*>(*i, t));
    } else { // DCL->type is a name of some previously typedefined struct!
      if(!validateStructName(DCL->dcl_type))
		return -1;
      //cout << "field id : " << *i << endl;
      StructType& st = structTypeTable.find(DCL->dcl_type)->second;
      DECLARLIST->typedefList.insert(std::pair<string, Type*>(*i, &st));
    }
  }
  return 0;
}

// 
void createArgumentsFromDCL(Stype* DCL, Stype* FUNC_ARGLIST) {
  for(std::list<string>::iterator i = (DCL->dcl_ids).begin() ; i != (DCL->dcl_ids).end() ; ++i) {
    Variable* v = new Variable(*i, DCL->dcl_type, 0);
    FUNC_ARGLIST->argsList.push_back(v);
  }
}

// retutns true iff name is the name of a defined struct
bool validateStructName(string name) {
  if(structTypeTable.find(name) == structTypeTable.end()){
    return false;
  }
  return true;
}

// returns the line number of the instruction that will be emitted after the call to this function
int nextquad() {
  return codeBuffer.size()+1;
}

void Error(string s) {
  cout << "**********undefined error*********" << s;
  exit(1);
}

// replace first occurance of 'from' sub string in 'str' by 'to'
static bool subStrReplace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

/* toFill - list of line numbers to fill
   address - address to fill in the codeBuffer lines specified in 'toFill'
 */
void backpatch(list<int> toFill, int address) {
  
  int j = 1;
  for(std::list<int>::iterator i = toFill.begin(); i != toFill.end(); ++i, ++j) {
    subStrReplace(codeBuffer[*i-1], "___", to_string(address));
  }
}

bool isPrimitive(string type) {
  return type == "integer" || type == "real";
}

bool isPrimitive(Variable* var) {
  return isPrimitive(var->getType());
}

bool isPrimitive(Type* type) {
  return isPrimitive(type->getTypeName());
}

bool isPrimitive(Variable& var) {
  return isPrimitive(var.getType());
}

bool isPrimitive(Type& type) {
  return isPrimitive(type.getTypeName());
}

/* 
   source_reg - a register that holds the offset of the source data
   
*/
void copyStruct(string source_reg, string dest_offset, Variable* destVar) {
  cout << "************************ copyStruct() ****************************\ndest_name = " << destVar->getName() << endl; 
	Defstruct* st = dynamic_cast<Defstruct*>(destVar);
	assert(st);
	int offset = 0;
	for(map<string, Variable*>::iterator i = st->fields.begin() ; i != st->fields.end() ; ++i) {
	  // source offset = source_reg + dest_offset - destVar.offset
	  Variable *field = i->second;
	  int fieldSize = field->getSizeInMemory();
	  if(isPrimitive(field->getType())) {
	    string intTempReg = currFunction->getIntReg();
	    string realTempReg = currFunction->getRealReg();
	    if(field->getType() == "integer") {
	      emit("LOADI " + intTempReg + " I2 -" + source_reg);
	      emit("STORI " + intTempReg + " I2 -" + dest_offset);
	    } else {
	      emit("LOADR " + realTempReg + " I2 -" + source_reg);
	      emit("STORR " + realTempReg + " I2 -" + dest_offset);
	    }
	    emit((string)"ADD2I " + source_reg + " " + source_reg + " " + to_string(fieldSize));
	    continue;
	  }
	  // field is Defstruct
	  copyStruct(source_reg, to_string(st->getOffset()), field);
	  emit((string)"ADD2I " + source_reg + " " + source_reg + " " + to_string(fieldSize));
	}
}

Function* getFunction(string name) {
  std::map<string, Function>::iterator i = funcSymbols.find(name);
  if(i == funcSymbols.end()) {
    return NULL;
  }
  return &(i->second);
}

void saveUsedRegisters() {
  int j = 0;
  for(std::set<string>::iterator i = currFunction->usedIntRegs.begin() ; i != currFunction->usedIntRegs.end() ; ++i) {
	if(*i != "I0" && *i != "I1" && *i != "I2") {
		emit("STORI " + *i + " I1 " + to_string(-j));
		currFunction->savedIntRegs.insert(*i);
		++j;
	}
  }
  for(std::set<string>::iterator i = currFunction->usedRealRegs.begin() ; i != currFunction->usedRealRegs.end() ; ++i, ++j) {
	emit("STORR " + *i + " I1 " + to_string(-j));
	currFunction->savedRealRegs.insert(*i);
  }
  emit("ADD2I I1 I1 " + to_string(-j));
}

void restoreUsedRegisters() {
  	int j = 0;
	for(std::set<string>::iterator i = currFunction->usedIntRegs.begin() ; i != currFunction->usedIntRegs.end() ; ++i) {
		std::set<string>::iterator reg = currFunction->savedIntRegs.find(*i);
		if(*i != "I0" && *i != "I1" && *i != "I2" && reg != currFunction->savedIntRegs.end()){
			emit("LOADI " + *i + " I1 " + to_string(j));
			++j;
			currFunction->savedIntRegs.erase(reg);
		}
  }
  for(std::set<string>::iterator i = currFunction->usedRealRegs.begin() ; i != currFunction->usedRealRegs.end() ; ++i, ++j) {
	std::set<string>::iterator reg = currFunction->savedRealRegs.find(*i);
	if(reg != currFunction->savedRealRegs.end()){
		emit("LOADI " + *i + " I1 " + to_string(j));
		currFunction->savedRealRegs.erase(reg);
	}
  }
  emit("ADD2I I1 I1 " + to_string(j));
}

void buildLinkerHeader() {
	cout << "Add linker's header to codeBuffer..." << endl;
  	vector<string> lines;
	lines.push_back("<header>");
	if(funcSymbols.find("main") != funcSymbols.end()) {
	  lines.push_back("<main>");	
	} else {
	  lines.push_back("<empty>");
	}
	string unimplemented = "<unimplemented> ";
	string implemented = "<implemented> ";
	for(std::map<string, Function>::iterator f = funcSymbols.begin() ; f != funcSymbols.end() ; ++f) {
	  if(f->second.isImplemented) {
		  if(f->first != "main")
			implemented += " " + f->first + "," + to_string(f->second.address);
	  } else {
		unimplemented += " " + f->first;
	    for(std::vector<int>::iterator i = f->second.functionCalls.begin() ; i != f->second.functionCalls.end() ; ++i) {
		  unimplemented += "," + to_string(*i);
		}
	  }
	}
	lines.push_back(unimplemented);
	lines.push_back(implemented);
	lines.push_back("</header>");
	lines.insert(lines.end(), codeBuffer.begin(), codeBuffer.end());
	codeBuffer = lines;
}

void printString(string str) {
  char char_to_print;
  char line_feed = 0xA;
  char tab = 0x9;
  cout << "printString: " << str << endl;
  for(int i=1 ; i<str.length()-1 ; ++i) {
    char_to_print = str.at(i);
    if(char_to_print == '\\'){
     char escaped = str.at(++i);
      char_to_print = escaped == 'n' ? line_feed : tab;
    }
    emit("PRNTC " + to_string(char_to_print));
  }
}

void addToStructTypeTable(string structName, map<string, Type*> typeFields){
  cout << "\tcreating struct (num of fields = " << typeFields.size() << ") : " << structName << endl;
  for(std::map<string, Type*>::iterator i = typeFields.begin() ; i != typeFields.end() ; ++i) {
    cout << i->first << endl;
  }
  std::map<string, StructType>::iterator i;
  if((i = structTypeTable.find(structName)) != structTypeTable.end())
    structTypeTable.erase(i);
  StructType* st = new StructType(structName, typeFields);
  structTypeTable.insert(std::pair<string, StructType>(structName, *st));
}

void printStructTypeTable() {
  for(std::map<string, StructType>::iterator t = structTypeTable.begin() ; t != structTypeTable.end() ; ++t) {
    cout << "Defstruct " << t->second.getTypeName() << ":" << endl;
    int i = 1;
    StructType& st = t->second;
    cout << "\tsize : " << st.fieldTypes.size() << endl;
    for(std::map<string, Type*>::iterator t1 = st.fieldTypes.begin() ; t1 != st.fieldTypes.end() ; ++t1, ++i) {
      cout << "\t" << i << ": " << t1->first << endl;
    }
  }
}

void printStructTypeTableOnlyNames() {
  for(std::map<string, StructType>::iterator t = structTypeTable.begin() ; t != structTypeTable.end() ; ++t) {
    cout << "Defstruct " << t->second.getTypeName() << ":" << endl;
  }
}

void setSymbolTableOffsets(map<string, Variable*> symbolTable) {
  int offset = 0;
  for(std::map<string, Variable*>::iterator i = symbolTable.begin() ; i != symbolTable.end() ; ++i) {
    Variable* v = i->second;
    v->setOffset(offset);
    offset += v->getSizeInMemory();
  }  
}

void printFunctionsSymbolTable() {
  cout << "\tFunctions table:" << funcSymbols.size() << endl;
  for(std::map<string, Function>::iterator f = funcSymbols.begin() ; f != funcSymbols.end() ; ++f) {
    cout << "\targumants and variables of "<< f->first << " at " << to_string((f->second).address) <<": " << endl;
    for(std::map<string, Variable*>::iterator j = (f->second).symbolTable.begin(); j != (f->second).symbolTable.end(); ++j) {
      cout << "\t\t" << j->first << " : " << j->second->getType() << "(" << j->second->getOffset() << ")" << endl;
    }
  }
}

void copyVariableToRegister(Variable* var, Stype* s) {
	string LOAD = "", place = "";
	if(isPrimitive(var->getType())) {
		if(var->getType() == "integer") {
		  LOAD = "LOADI";
		  s->place = currFunction->getIntReg();
		}
		else if(var->getType() == "real") {
		  LOAD = "LOADR";
		  s->place = currFunction->getRealReg();
		}
		emit(LOAD + " " + s->place + " I2 " + to_string(-var->getOffset()));
	} else {
		s->place = currFunction->getIntReg();
		emit("LOADI " + s->place + " I2 " + to_string(var->getOffset()));
	}
	s->type = var->getType();
}
/**************************************************************************/
/*                           Main of parser                               */
/**************************************************************************/

void printState(string file_name) {
	cout << "Writing codeBuffer to file..." << endl;
  std::regex e(".cmm$");
  string out_file_name = std::regex_replace(file_name, e, ".rsk");
  cout << "###output file " << out_file_name;
  FILE* out = fopen(out_file_name.c_str(), "w");
  // ---------------------------------
  cout << "\tCodeBuffer (size = " << codeBuffer.size() << ") : " << endl;
  int j = -4;
  for(std::vector<string>::iterator i = codeBuffer.begin() ; i != codeBuffer.end() ; ++i, ++j) {
    cout << "\t\t" << j << ": " << *i << endl;  
    fprintf(out, "%s\n", (*i).c_str());
  }
  // ---------------------------------
  printFunctionsSymbolTable();
  // ---------------------------------
  cout << "\tDeftructs: " << endl;
  printStructTypeTable();
}


int main(int argc, char *argv[])
{
  int rc;
#if YYDEBUG
  yydebug=1;
#endif
  yyin = std::fopen(argv[1], "r");
  if(!yyin) {
    cerr << "Unable to open file " << argv[1] << endl;
  }
  cout << "START Compilation of " << argv[0] << endl;
  rc = yyparse();
  if (rc == 0) { // Parsed successfully
    cout << "---------------- OK!!! ----------------" << endl;
    buildLinkerHeader();
    printState(argv[1]); 
  }
}

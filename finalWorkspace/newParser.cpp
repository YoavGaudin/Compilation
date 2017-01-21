#include <iostream>
#include <string> //redundant?
#include "newParser.hpp"
#include <algorithm>
#include <iterator>

extern int yyparse (void);

map<string, Function> funcSymbols;
stack<string> funcStack;
Function* currFunction;
Block* currBlock;
map<string, map<string, string> > structTypeTable;
map<string, Defstruct> typedefsTable;
vector<string> codeBuffer;
array<TypeEnum, 1000> memMap;

set <string> usedIntRegs;
set <string> usedRealRegs;

// ------------------------------------ initialization functions ---------------------------------
void currFunctionInit(string name) {
  currFunction = new Function(name);
}

void regSetInit() {
  usedIntRegs.insert("I0"); // return address
  usedIntRegs.insert("I1"); // stack pointer
  usedIntRegs.insert("I2"); // frame pointer
}

// -----------------------------------------------------------------------------------------------

// returns unused register name and adds it to usedIntRegs set
string getIntReg() {
  // 0,1,2 reserved from init
  for(int i = 3; i < 1000; ++i) {
    string currReg = "I" + to_string(i);
    // in c++ string.operator== and string.compare() is the same (unlike JAVA) so it should work fine
    // return the first register name which is not used
    if(usedIntRegs.count(currReg) == 0) {
      usedIntRegs.insert(currReg);
      return currReg;
    }
  }
  // shouldn't get here - if got here, means we got out of tegisters!
  assert(0);
}

// returns unused register name and adds it to usedRealRegs set
string getRealReg() {
  for(int i = 0; i < 1000; ++i) {
    string currReg = "R" + to_string(i);
    // in c++ string.operator== and string.compare() is the same (unlike JAVA) so it should work fine
    // return the first register name which is not used
    if(usedRealRegs.count(currReg) == 0) {
      usedRealRegs.insert(currReg);
      return currReg;
    }
  }
  // shouldn't get here - if got here, means we got out of tegisters!
  assert(0);
}


void emit(string const& singleInstruction) {
  cout << "\t" << singleInstruction << endl;
  codeBuffer.push_back(singleInstruction);
}

bool isUsedIntReg(string& in) {
  return usedIntRegs.find(in) != usedIntRegs.end();
}

bool isUsedRealReg(string& in) {
  return usedRealRegs.find(in) != usedRealRegs.end();
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

// iterate over the ids list and for each id create Variable with the DCL type and this id.
void createVariablesFromDCL(Stype* DCL, Stype* DECLARLIST) {
  for(std::list<string>::iterator i = DCL->dcl_ids.begin(); i != (DCL->dcl_ids).end(); ++i) {
    Variable* v = new Variable(*i, DCL->dcl_type);
    DECLARLIST->declarationList.insert(std::pair<string,Variable>(*i, *v));
  }
  //TODO: it is not good that variables are created even on type definition of struct - should fix that
}

// 
void createArgumentsFromDCL(Stype* DCL, Stype* FUNC_ARGLIST) {
  for(std::list<string>::iterator i = (DCL->dcl_ids).begin() ; i != (DCL->dcl_ids).end() ; ++i) {
    Variable* v = new Variable(*i, DCL->dcl_type);
    FUNC_ARGLIST->argsList.push_back(*v);
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
  return codeBuffer.size();
}

void Error(string s) {
  cout << "**********undefined error*********" << s;
  exit(1);
}

void printState() {
  cout << "\tCodeBuffer: " << endl;
  int j = 0;
  for(std::vector<string>::iterator i = codeBuffer.begin() ; i != codeBuffer.end() ; ++i, ++j) {
    cout << "\t\t" << j << ": " << *i << endl;  
  }
  cout << "\tFunctions table:" << funcSymbols.size() << endl;
  for(std::map<string, Function>::iterator f = funcSymbols.begin() ; f != funcSymbols.end() ; ++f) {
    cout << "\targumants and variables of "<< f->first << ": " << endl;
    for(std::map<string, Variable>::iterator j = (f->second).symbolTable.begin(); j != (f->second).symbolTable.end(); ++j) {
      cout << "\t\t" << j->first << " : " << (j->second).getType() << "(" << (j->second).getOffset() << ")" << endl;
    }
  }
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
  for(std::list<int>::iterator i = toFill.begin(); i != toFill.end(); ++i) {
    subStrReplace(codeBuffer[*i], "___", to_string(address));
  }
}

bool isPrimitive(Variable* var) {
  return var->getType() == "integer" || var->getType() == "real";
}

bool isPrimitive(string type) {
  return type == "integer" || type == "real";
}

/* lvalVar - holds all LVAL's information and specifically offset from FP where to copy
   reg - holds the offset from FP from where to copy
*/
void copyStruct(Defstruct* lvalVar, string reg) {
  string intTempReg = getIntReg();
  string realTempReg = getRealReg();
  for(int i = 0; i < lvalVar->getSizeInMemory(); ++i) {
    string STOR = "";
    string LOAD = "";
    string tempReg = "";
    if(lvalVar->getType() == "integer") {
      STOR = "STORI";
      LOAD = "LOADI";
      tempReg = intTempReg;
    } else if (lvalVar->getType() == "real") {
      STOR = "STORR";
      LOAD = "LOADR";
      tempReg = realTempReg;
    } else assert(0);

    emit(LOAD + " " + tempReg + " I1 " + to_string(atoi(reg.c_str()) + i));
    emit(STOR + " " + tempReg + " I1 " + to_string(lvalVar->getOffset() + i));
  }
}
/*
void addToStructTypeTable(string structName, map<string, Type>& typeFields){
  std::map<string, map<string, Type> >::iterator i;
  if((i = structTypeTable.find(structName)) != structTypeTable.end())
    structTypeTable.erase(i);
  structTypeTable.insert(std::pair<string, map<string, Type> >(structName, typeFields));
}
*/

/**************************************************************************/
/*                           Main of parser                               */
/**************************************************************************/

int main(void)
{
  int rc;
#if YYDEBUG
  yydebug=1;
#endif
  cout << "START Compilation" << endl;
  rc = yyparse();
  if (rc == 0) { // Parsed successfully
    cout << "---------------- OK!!! ----------------" << endl;
    printState();
    cout << "typedefs:" << endl;
    for(std::map<string, Defstruct>::iterator i = typedefsTable.begin() ; i != typedefsTable.end() ; ++i) {
      cout << i->first << ": " << endl;
      std::map<string, Variable> fields = (i->second).fields;
      for(std::map<string, Variable>::iterator j = fields.begin(); j != fields.end(); ++j) {
	cout << "--" << j->first << " : " << (j->second).getType() << endl;
      }
    }
  }
}

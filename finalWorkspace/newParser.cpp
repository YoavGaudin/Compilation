#include <iostream>
#include <string> //redundant?
#include "newParser.hpp"
#include <algorithm>

extern int yyparse (void);

map<string, Function> funcSymbols;
stack<string> funcStack;
Function* currFunction;
Block* currBlock;
map<string, Variable> globalSymbolTable;
map<string, Defstruct> typedefsTable;
vector<string> codeBuffer;
array<Type, 1000> memMap;

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

#include <sstream>
#define INT2STR( x ) static_cast< std::ostringstream & >( ( std::ostringstream() << std::dec << x ) ).str()

// returns unused register name and adds it to usedIntRegs set
string getIntReg() {
  // 0,1,2 reserved from init
  for(int i = 3; i < 1000; ++i) {
    string currReg = "I" + INT2STR(i);
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
    string currReg = "I" + INT2STR(i);
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
  cout << singleInstruction << endl;
  codeBuffer.push_back(singleInstruction);
}

bool isUsedIntReg(string& in) {
  return usedIntRegs.find(in) != usedIntRegs.end();
}

bool isUsedRealReg(string& in) {
  return usedRealRegs.find(in) != usedRealRegs.end();
}

bool isInt(string& in) {
  try {
    return isUsedIntReg(in) || memMap[stoi(in)] == INTEGER;
  } catch (const std::invalid_argument& ia) {}
  return false;
}

bool isReal(string& in) {
  try {
    return isUsedRealReg(in) || memMap[stoi(in)] == REAL;
  } catch (const std::invalid_argument& a) {}
  return false;
}


// iterate over the ids list and for each id create Variable with the DCL type and this id.
void createVariablesFromDCL(Stype* DCL, Stype* DECLARLIST) {
	cout << "createVariablesFromDCL: type- " + DCL->dcl_type << endl;
  for(std::list<string>::iterator i = DCL->dcl_ids.begin(); i != (DCL->dcl_ids).end(); ++i) {
    Variable* v = new Variable(*i, DCL->dcl_type);
	DECLARLIST->declarationList.insert(std::pair<string,Variable>(*i, *v));
  }
}

// 
void createArgumentsFromDCL(Stype* DCL, Stype* FUNC_ARGLIST) {
  for(std::list<string>::iterator i = (DCL->dcl_ids).begin() ; i != (DCL->dcl_ids).end() ; ++i) {
    Variable* v = new Variable(*i, DCL->dcl_type);
    FUNC_ARGLIST->argsList.push_back(*v);
  }
}

// adds a Defstruct object into the global symbols table
void addStructToSymbolTable(string name, map<string, Variable> fields) {
  Defstruct* st = new Defstruct(name, fields);
  typedefsTable.insert(std::pair<string, Defstruct>(name, *st));
}

// retutns true iff name is the name of a defined struct
bool validateStructName(string name) {
  if(typedefsTable.find(name) == typedefsTable.end()){
    return false;
  }
  return true;
}

// returns the line number of the instruction that will be emitted after the call to this function
int nextquad() {
  return codeBuffer.size();
}

void Error(string s) {
  cout << "undefined error: " << s;
  exit(1);
}

void printState() {
  cout << "Functions table:" << funcSymbols.size() << endl;
  for(std::map<string, Function>::iterator f = funcSymbols.begin() ; f != funcSymbols.end() ; ++f) {
    cout << "argumants and variables:" << endl;
    for(std::map<string, Variable>::iterator j = (f->second).symbolTable.begin(); j != (f->second).symbolTable.end(); ++j) {
      cout << "\t" << j->first << " : " << (j->second).getType() << "(" << (j->second).getOffset() << ")" << endl;
    }
  }
}

/**************************************************************************/
/*                           Main of parser                               */
/**************************************************************************/
//#define YYDEBUG 1
//extern int yydebug;
int main(void)
{
    int rc;
#if YYDEBUG
    yydebug=1;
#endif
	cout << "START Compilation" << endl;
    rc = yyparse();
    if (rc == 0) { // Parsed successfully
      cout << "OK!!!" << endl;
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

#include <iostream>
#include <string> //redundant?
#include "newParser.hpp"
#include <algorithm>

extern int yyparse (void);

map<string, Function> funcSymbols;
stack<string> funcStack;
Function* currFunction;
map<string, Variable> globalSymbolTable;
map<string, Defstruct> typdefsTable;
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
}

bool isUsedIntReg(string& in) {
  return usedIntRegs.find(in) != usedIntRegs.end();
}

bool isUsedRealReg(string& in) {
  return usedRealRegs.find(in) != usedRealRegs.end();
}

// insert all pairs of 'from' map to 'to' map (overwrite)
/*void insertSymbolTable(map<string, Variable>& to, map<string, Variable> const& from) {
  to.insert(from.begin(), from.end());
  }*/

/* need to be implemented!!!
static Function& getCurrentFunc() {
  return *(new Function());
}*/

// iterate over the ids list and for each id create Variable with the DCL type and this id.
void createVariablesFromDCL(Stype* DCL, Stype* DECLARLIST) {
	cout << "createVariablesFromDCL: type- " + DCL->dcl_type << endl;
  for(std::list<string>::iterator i = DCL->dcl_ids.begin(); i != (DCL->dcl_ids).end(); ++i) {
    Variable* v = new Variable(*i, DCL->dcl_type);
	DECLARLIST->declarationList.insert(std::pair<string,Variable>(*i, *v));
  }
}

// adds a Defstruct object into the global symbols table
void addStructToSymbolTable(string name, map<string, Variable> fields) {
  Defstruct* st = new Defstruct(name, fields);
  typdefsTable.insert(std::pair<string, Defstruct>(name, *st));
}

// retutns true iff name is the name of a defined struct
void validateStructName(string name) {
  std::map<string, Defstruct>::iterator i = typdefsTable.find(name);
  if(i == typdefsTable.end()){
    cout << "undefined error: " << endl;
  }
}

void Error(string s) {
  cout << "undefined error: " << s;
  exit(1);
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
	  cout << "current function: " << currFunction->name << endl;
	  cout << "symbol table:" << endl;
	  for(std::map<string, Variable>::iterator i = currFunction->symbolTable.begin(); i != currFunction->symbolTable.end(); ++i) {
		  cout << i->first << " : " << (i->second).getType() << endl;
	  }
    }
}

#ifndef COMMON_HPP
#define COMMON_HPP

#include <map>
#include <vector>
#include <string>
#include <set>
#include <cassert>
#include <list>
#include <stack>
#include <array>
#include <iostream>

#include <sstream>
#define INT2STR( x ) static_cast< std::ostringstream & >( ( std::ostringstream() << std::dec << x ) ).str()

using namespace std;


enum Type {INTEGER, REAL, DEFSTRUCT};


class Variable {

  string name;
  string type;
  int offset;
  
public:
  Variable(const string name_, string type_, int offset_) : name(name_), type(type_), offset(offset_) {}
  
  Variable(const string name_, Type t) : name(name_){
    if(t == INTEGER) {
      type = "integer";
    } else if(t == REAL) {
      type = "real";
    } else {
      type = "defstruct";
    }
  }

  Variable(const string name_, string type_) : name(name_), type(type_) {}
  
  void setOffset(int offset) { this->offset = offset; }
  int getOffset() { return this->offset; }
  string const& getName() { return name; }
  string const& getType() { return type; }
};


class Defstruct : Variable {
public:
  map<string, Variable> fields;
  Defstruct(string name_, map<string, Variable> fields_) : Variable(name_, DEFSTRUCT), fields(fields_) {}

  Variable getField(string name) {
    std::map<string, Variable>::iterator i;
    i = fields.find(name);
    if(i != fields.end())
      return i->second;
    assert(0);
  }
};


class Block {
private:
  Block* parent;

public:
  map<string, Variable> symbolTable;
  
  Block() : parent(NULL) {}

  Block(Block* parent_): parent(parent_) { 
    // std::* containers should be automatically dynamically allocated on decleration
    symbolTable = parent->symbolTable;
  }

  // find variable in function's scope
  Variable* getScopeVariable(string name) {
    std::map<string, Variable>::iterator i;
    if((i = symbolTable.find(name)) != symbolTable.end()) {
      return &(i->second);
    }
    return NULL; 
  }
  
  // insert (name,v) to the symbol table
  void addVariable(string const& name, Variable& v) {
    std::map<string, Variable>::iterator i;
    if((i = symbolTable.find(name)) != symbolTable.end())
      symbolTable.erase(i);
    symbolTable.insert(std::pair<string, Variable>(name, v));
    v.setOffset(symbolTable.size());
  }
  
  void insertSymbolTable(map<string, Variable>& vars) {
    for(std::map<string, Variable>::iterator i = vars.begin(); i != vars.end(); ++i) {
      cout << "\t" << i->first << i->second.getType() << endl;
      this->addVariable(i->first, i->second);
    }
  }

  void insertSymbolTable(vector<Variable>& vars) {
    for(std::vector<Variable>::iterator i = vars.begin(); i != vars.end(); ++i) {
      addVariable(i->getName(), *i);
    }
  }

};


struct Function : Block {

  string name;
  // the argumants are inserted straight into the symbol table in the constructor.
  //int number_of_variables; // for this we use std data structures... they have size().

  // function with arguments
  Function(string name_, vector<Variable> arguments_) : name(name_) {
    insertSymbolTable(arguments_);
  }

  // function without arguments
  Function(string name_) : name(name_) {
    // std::* containers should be automatically dynamically allocated on decleration
  }
  
};

// ---------------------------- S-type definition --------------------------

struct Stype {
  
  string place;

  // for tokens
  string tokenValue;
  
  // for DECLARLIST - 
  map<string, Variable> declarationList;

  // for DCL - the type for the last arguments
  string dcl_type;
  // for DCL - the variables names () ids of the currently declared type
  list<string> dcl_ids;

  // for BEXP - lists to contain the code lines which will need to be changed on backpatching
  list<int> falseList;
  list<int> trueList;
  
  // for FUNC_ARGLIST
  vector<Variable> argsList;

  // for M marker
  int quad;

  // for N marker and STMT
  list<int> nextList;
  
  Stype(string v) : tokenValue(v) {}
};


#define YYSTYPE Stype*


/* ----------------- Compile Time Data Structures: -------------------


               funcSymbols                               funcStack
 _______________________________________               _____________   
\   functionName    \   symbolTable     \             \   funcName  \
\___________________\___________________\             \_____________\      
\                   \                   \             \             \
\___________________\___________________\             \_____________\
\                   \                   \             \      .      \
\___________________\___________________\             \      .      \
\     .      .      \      .      .     \             \      .      \
\     .      .      \      .      .     \             \             \
\     .      .      \      .      .     \             \_____________\
\                   \                   \
\___________________\___________________\


                       globalSymbolTable
                     _____________________
                    \       varName      \
                    \____________________\
                    \         .          \
                    \         .          \
                    \         .          \
                    \                    \
                    \____________________\

'funcSymbols'       --- Map from function name to it's symbol table and arguments. 

'funcStack'         --- Stack which holds on it's top the currently running function (by currently we mean the function which's call was the last in the parsed code). This stack contains only strings! by this string we can find the relevant symbol table with the environment variables in the 'funcSymbols' map.

'globalSymbolTable' --- Symbol table for the global variables which are included in each function's environment.

*** each symbol table is a Map of [var name (string), var info class(Variable)]***



             codeBuffer                                      memMap
 __________________________________                  _____________________
\         ASM instruction         \ 0               \                    \ 0
\_________________________________\                 \____________________\
\                                 \ 1               \                    \ 1
\_________________________________\                 \____________________\
\                                 \ 2               \                    \ 2
\_________________________________\                 \____________________\
\                .                \ .               \          .         \ .
\                .                \ .               \          .         \ .
\                .                \ .               \          .         \ .
\                                 \                 \                    \
\_________________________________\                 \____________________\ 999

'codeBuffer'        --- Vector (we want the back() function which is not included in std::array) which holds the RISKI instructions. This buffer will be the target of the emit() function and will be modified on backpatching. This buffer should not be larger then 1000 (memory size).

'memMap'            --- Array which represents the run time memory layout, for each address (0-999) which type is thedata there.



*/

extern map<string, Function> funcSymbols;
extern stack<string> funcStack;
extern Function* currFunction;
extern Block* currBlock;
extern map<string, Variable> globalSymbolTable;
extern vector<string> codeBuffer;
extern array<Type, 1000> memMap;
extern map<string, Defstruct> typdefsTable;


// ----------------- Registers: ------------------
extern set<string> usedIntRegs;
extern set<string> usedRealRegs;

void regSetsInit();
/*
I0 - return address
I1 - stack pointer
I2 - frame pointer
*/

// ----------------- Helper functions: ------------------
void emit(string const& singleInstruction);
string getIntReg();
string getRealReg();
bool isUsedIntReg(string& in);
bool isUsedRealReg(string& in);
void createVariablesFromDCL(Stype* DCL, Stype* DECLARLIST);
void createArgumentsFromDCL(Stype* DCL, Stype* FUNC_ARGLIST);
void addStructToSymbolTable(string name, map<string, Variable> fields);
bool validateStructName(string name);
int nextquad();
bool isInt(string& in);
bool isReal(string& in);
void Error(string& s);
void printState();
void backpatch(list<int> toFill, int address);

/* ----------------- Run Time Memory layout: -------------------

 ______________________________________
\                                      \
\                                      \
\          stack(grows down)           \
\                                      \
\______________________________________\
\     .      .      .      .      .    \
\     .      .      .      .      .    \
\     .      .      .      .      .    \
\                                      \
\                                      \
\                                      \
\                                      \
\     .      .      .      .      .    \
\     .      .      .      .      .    \
\     .      .      .      .      .    \
\______________________________________\
\                                      \
\         heap (allocated mem)         \
\              (grows up)              \
\______________________________________\
\                                      \
\                                      \
\                                      \
\           code segment               \
\                                      \
\                                      \
\                                      \
\______________________________________\

*/

#endif //COMMON_HPP

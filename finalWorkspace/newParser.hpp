#ifndef COMMON_HPP
#define COMMON_HPP

#include <map>
#include <vector>
#include <string>
#include <set>
#include <cassert>
#include <list>

using namespace std;


enum Type {INTEGER, REAL, DEFSTRUCT};


class Variable {
  string name;
  string type;
  
public:
  Variable(const string name_, Type t) : name(name_) {
    if(t == INTEGER) {
      type = "integer";
    } else if(t == REAL) {
      type = "real";
    } else {
      type = "defstruct";
    }
  }

  Variable(const string name_, string type_) : name(name_), type(type_) {}
  
  string getName() { return name; }
  string getType() { return type; }
};

class Defstruct : Variable {
  map<string, Variable> fields;

public:
  Defstruct(string name_, map<string, Variable> fields_) : Variable(name_, DEFSTRUCT), fields(fields_) {}

  Variable getField(string name) {
    std::map<string, Variable>::iterator i;
    i = fields.find(name);
    if(i != fields.end())
      return i->second;
    assert(0);
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
  list<string> dcl_ids;
  
  Stype(string v) : tokenValue(v) {
    dcl_ids = *(new list<string>());
  }
};


#define YYSTYPE Stype*
// -------------------------------------------------------------------------



                             /* DATA STRUCTURES LIST */
// [variable name, info]
extern map <string, Variable> varTable;

// [function name, agruments]
extern map <string, vector<Variable> > functionTable;

// [memAddress, type]
extern map <int, Type> memMap;

extern set <string> usedIntRegs;
extern set <string> usedRealRegs;

void regSetsInit();
/* ----------------- Reserved registers: ------------------
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
void insertToVarTable(map<string, Variable> vars);
void insertToVarTable(string& name, Variable& v);
void createVariablesFromDCL(Stype* DCL);
void Error(string& s);

/* ----------------- Compile Time Data Structures: -------------------


               funcSymbols                             funcNameStack
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

'funcSymbols'       --- map which contains the mapping from function name to it's symbol table. 

'funcNameStack'     --- stack which holds on it's top the currently running function (by currently we mean the function which's call was the last in the parsed code). This stack contains only strings! by this string we can find the relevant symbol table with the environment variables in the 'funcSymbols' map.

'globalSymbolTable' --- symbol table for the global variables which are included in each function's environment.

*/



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

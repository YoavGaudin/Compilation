#ifndef COMMON_HPP
#define COMMON_HPP

#include <map>
#include <vector>
#include <string>
#include <set>
#include <cassert>

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
  string token;
  string place;

  Stype(string token_) : token(token_) {}
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

extern set <string> usedRegs;
void regSetsInit();
/* ----------------- Reserved registers: ------------------
I0 - return address
I1 - stack pointer
I2 - frame pointer

 */

// ----------------- Helper functions: ------------------
string getIntReg();
string getRealReg();
bool isUsedIntReg(string in);
bool isUsedRealReg(string in);

/* ----------------- Memory layout: -------------------

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


void emit(string singleInstruction);

#endif //COMMON_HPP

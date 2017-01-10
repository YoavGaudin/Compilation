#ifndef COMMON_HPP
#define COMMON_HPP

#include <map>
#include <vector>
#include <string>
#include <set>

using namespace std;


enum MemValType {INTEGER, REAL};


typedef struct {
  string name;
  string type;
} Variable;


// [varName, type]
extern map <string, string> varTable;

// [funcName, agruments]
extern map <string, vector<Variable> > functionTable;

// [memAddress, type]
extern map <int, MemValType> memMap;

extern set <string> usedRegs;
void regSetsInit();
/* ----------------- Reserved registers: ------------------
I0 - return address
I1 - stack pointer
I2 - frame pointer

 */
string getIntReg();
string getRealReg();


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

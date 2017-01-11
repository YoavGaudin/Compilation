#include <iostream>
#include <cassert>
#include <string>
#include "newParser.hpp"

extern int yyparse (void);

using namespace std;

// varName, type
map <string, string> varTable;

// funcName, agruments
map <string, vector<Variable> > functionTable;

// [memAddress, type]
map <int, MemValType> memMap;

set <string> usedIntRegs;
set <string> usedRealRegs;
void regSetInit() {
  usedIntRegs.insert("I0"); // return address
  usedIntRegs.insert("I1"); // stack pointer
  usedIntRegs.insert("I2"); // frame pointer
}

#include <sstream>
#define INT2STR( x ) static_cast< std::ostringstream & >( ( std::ostringstream() << std::dec << x ) ).str()

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


void emit(string singleInstruction) {
  cout << singleInstruction << endl;
}

bool isUsedIntReg(string in) {
  return usedIntRegs.find(in) != usedIntRegs.end();
}

bool isUsedRealReg(string in) {
  return usedRealRegs.find(in) != usedRealRegs.end();
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
    rc = yyparse();
    if (rc == 0) { // Parsed successfully
      cout << "OK!!!" << endl;
    }
}

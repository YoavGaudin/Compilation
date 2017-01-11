/* Reverse polish notation calculator.  */
%{
  #include <stdio.h>
  #include "newParser.hpp"
  
  using namespace std;
  
  int yylex (void);
  void yyerror (char const *);
  void semanticError(string s);
%}

%token NUM 
%token Defstruct Extern Main Var Integer Real If Then While Do Return Write Read Call
%token Else 
%token ID
%token STRING
%token ',' ';' ':'

%right ASSIGN
%left OR_OP
%left AND_OP
%left REL_OP
%left ADD_OP
%left MUL_OP
%right NOT_OP
%left '[' '{' '('
%right ']' '}' ')'
%%

PROGRAM: 
		TDEFS FDEFS MAIN_FUNCTION {
		}
;
TDEFS: 
		TDEFS Defstruct '{' DECLARLIST '}' ID ';' {
		}		
	|
		/*epsilon*/ {}
;		
FDEFS: 
		FDEFS TYPE ID '(' FUNC_ARGLIST_FULL ')' BLK {
		}
	|
		FDEFS Extern TYPE ID '(' FUNC_ARGLIST_FULL ')' ';' {
		}		
	|
		/*epsilon*/ {}
		/*epsilon*/
;
FUNC_ARGLIST_FULL: 
		FUNC_ARGLIST {
		}
	|
		/*epsilon*/ {}
		/*epsilon*/
;		
FUNC_ARGLIST: 
		FUNC_ARGLIST ',' DCL {
		}
	|
		DCL {
		}
;
MAIN_FUNCTION:
		Main BLK {
		} 
	|
		/*epsilon*/
		/*epsilon*/ {}
;		
BLK: 
		DECLARATIONS '{' LIST '}' {
		}
;	
DECLARATIONS:
		Var DECLARLIST  {
		}
	|
		/*epsilon*/
		/*epsilon*/ {}
;		
DECLARLIST:
		DECLARLIST DCL ';' {
		}
	|
		DCL ';' {
		}
;		
DCL: 
		ID ':' TYPE {
		} 
	|
		ID ':' ID {
		} 
	|
		ID ',' DCL {
		}
;	
TYPE: 
		Integer {
		}
	|
		Real {
		}
;	
LIST: 
		LIST STMT {
		}
	|
		/*epsilon*/
		/*epsilon*/ {}
;	
STMT: 
		ASSN {
		}
	|
		CNTRL {
		}
	|
		READ {
		}
	|
		WRITE {
		}
	|
		STMT_RETURN {
		}
	|
		BLK {
		}
;	
STMT_RETURN: 
		Return '(' EXP ')' ';' {
		}
;	
WRITE: 
		Write '(' EXP ')' ';' {
		}
	|
		Write '(' STRING ')' ';' {
		}
;	
READ: 
		Read '(' LVAL ')' ';' {
		}
;	
ASSN: 
		LVAL ASSIGN EXP ';' {
		}
;
LVAL: 
		ID {
		}
	|
		STREF {
		}
;
CNTRL: 
		If BEXP Then STMT Else STMT {
		}
	|
		If BEXP Then STMT {
		}
	|
		While BEXP Do STMT {
		}
;	
BEXP: 
		BEXP OR_OP BEXP {
		}
	|
		BEXP AND_OP BEXP {
		}
	|
		EXP REL_OP EXP {
		}
	|
		NOT_OP BEXP {
		}
	|
		'(' BEXP ')' {
		}
;	
EXP: 
		EXP ADD_OP EXP {
		  if(isUsedIntReg($1->place) && isUsedIntReg($3->place)) {
		    $$->place = getIntReg();
		    emit("ADD2I " + $$->place + " " + $1->place + " " + $2->place);
		  } else if(isUsedRealReg($1->place) && isUsedRealReg($3->place)) {
		    $$->place = getRealReg();
		    emit("ADD2R " + $$->place + " " + $1->place + " " + $2->place);
		  } else {
		    semanticError("type missmatch within add operation");
		  }
		}
	|
		EXP MUL_OP EXP {
		  if(isUsedIntReg($1->place) && isUsedIntReg($3->place)) {
		    $$->place = getIntReg();
		    emit("MULTI " + $$->place + " " + $1->place + " " + $2->place);
		  } else if(isUsedRealReg($1->place) && isUsedRealReg($3->place)) {
		    $$->place = getRealReg();
		    emit("MULTR " + $$->place + " " + $1->place + " " + $2->place);
		  } else {
		    semanticError("type missmatch within mul operation");
		  }
		}
	|
		'(' EXP ')' {
		  $$->place = $2->place;
		}
	|
		'(' TYPE ')' EXP {
		  if($2->token == "Integer") {
		    if(isUsedIntReg($4->place)) {
		      $$->place = $4->place;
		    } else if(isUsedRealReg($4->place)) {
		      $$->place = getIntReg();
		      emit("CRTOI " + $$->place + " " + $4->place);
		    }
		  } else if($2->token == "Real") {
		    if(isUsedRealReg($4->place)) {
		      $$->place = $4->place;
		    } else if(isUsedIntReg($4->place)) {
		      $$->place = getRealReg();
		      emit("CITOR " + $$->place + " " + $4->place);
		    }
		  } else {
		    semanticError("undefined explicit cast");
		  }
		}
	|
		ID {
		}
	|
		STREF {
		}
	|
		NUM {
		}
	|
		CALL {
		}
;	
STREF: 
		ID '[' ID ']' {
		}
	|
		STREF '[' ID ']' {
		}
;	
CALL: 
		Call ID '(' CALL_ARGS_FULL ')' {
		}
;	
CALL_ARGS_FULL: 
		CALL_ARGS {
		}
	|
		/*epsilon*/
		/*epsilon*/ {}
;	
CALL_ARGS:
		EXP {
		}
	|
		CALL_ARGS ',' EXP {
		}
;
	
%%

extern char* yytext;
extern int yylineno;

void yyerror (char const *err){
   printf("Syntax error: '%s' in line number %d\n", yytext, yylineno);
   exit(1);
}

void semanticError(string s) {
  printf("Semantic error: '%s' in line number %d\n", s.c_str(), yylineno);
  exit(1);
}

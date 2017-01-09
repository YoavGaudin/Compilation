/* Reverse polish notation calculator.  */
%{
  #include <stdio.h>
  #include "parser.h"

  int yylex (void);
  void yyerror (char const *);
  
  ParserNode *parseTree;
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
			parseTree = makeNode((char*)"PROGRAM", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
		}
;
TDEFS: 
		TDEFS Defstruct '{' DECLARLIST '}' ID ';' {
			$$ = makeNode((char*)"TDEFS", NULL, $1);
			concatList($1, $2);
			concatList($1, makeNode((char*)"{", NULL, NULL));
			concatList($1, $4);
			concatList($1, makeNode((char*)"}", NULL, NULL));
			concatList($1, $6);
			concatList($1, makeNode((char*)";", NULL, NULL));
		}		
	|
		/*epsilon*/ {$$ = makeNode((char*)"TDEFS", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
;		
FDEFS: 
		FDEFS TYPE ID '(' FUNC_ARGLIST_FULL ')' BLK {
			$$ = makeNode((char*)"FDEFS", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
			concatList($1, makeNode((char*)"(", NULL, NULL));
			concatList($1, $5);
			concatList($1, makeNode((char*)")", NULL, NULL));
			concatList($1, $7);
			
		}
	|
		FDEFS Extern TYPE ID '(' FUNC_ARGLIST_FULL ')' ';' {
			$$ = makeNode((char*)"FDEFS", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
			concatList($1, $4);
			concatList($1, makeNode((char*)"(", NULL, NULL));
			concatList($1, $6);
			concatList($1, makeNode((char*)")", NULL, NULL));
			concatList($1, makeNode((char*)";", NULL, NULL));
		}		
	|
		/*epsilon*/ {$$ = makeNode((char*)"FDEFS", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
		/*epsilon*/
;
FUNC_ARGLIST_FULL: 
		FUNC_ARGLIST {
			$$ = makeNode((char*)"FUNC_ARGLIST_FULL", NULL, $1);
		}
	|
		/*epsilon*/ {$$ = makeNode((char*)"FUNC_ARGLIST_FULL", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
		/*epsilon*/
;		
FUNC_ARGLIST: 
		FUNC_ARGLIST ',' DCL {
			$$ = makeNode((char*)"FUNC_ARGLIST", NULL, $1);
			concatList($1, makeNode((char*)",", NULL, NULL));
			concatList($1, $3);
		}
	|
		DCL {
			$$ = makeNode((char*)"FUNC_ARGLIST", NULL, $1);
		}
;
MAIN_FUNCTION:
		Main BLK {
			$$ = makeNode((char*)"MAIN_FUNCTION", NULL, $1);
			concatList($1, $2);
		} 
	|
		/*epsilon*/
		/*epsilon*/ {$$ = makeNode((char*)"MAIN_FUNCTION", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
;		
BLK: 
		DECLARATIONS '{' LIST '}' {
			$$ = makeNode((char*)"BLK", NULL, $1);
			concatList($1, makeNode((char*)"{", NULL, NULL));
			concatList($1, $3);
			concatList($1, makeNode((char*)"}", NULL, NULL));
		}
;	
DECLARATIONS:
		Var DECLARLIST  {
			$$ = makeNode((char*)"DECLARATIONS", NULL, $1);
			concatList($1, $2);
		}
	|
		/*epsilon*/
		/*epsilon*/ {$$ = makeNode((char*)"DECLARATIONS", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
;		
DECLARLIST:
		DECLARLIST DCL ';' {
			$$ = makeNode((char*)"DECLARLIST", NULL, $1);
			concatList($1, $2);
			concatList($1, makeNode((char*)";", NULL, NULL));
		}
	|
		DCL ';' {
			$$ = makeNode((char*)"DECLARLIST", NULL, $1);
			concatList($1, makeNode((char*)";", NULL, NULL));
		}
;		
DCL: 
		ID ':' TYPE {
			$$ = makeNode((char*)"DCL", NULL, $1);
			concatList($1, makeNode((char*)":", NULL, NULL));
			concatList($1, $3);
		} 
	|
		ID ':' ID {
			$$ = makeNode((char*)"DCL", NULL, $1);
			concatList($1, makeNode((char*)":", NULL, NULL));
			concatList($1, $3);
		} 
	|
		ID ',' DCL {
			$$ = makeNode((char*)"DCL", NULL, $1);
			concatList($1, makeNode((char*)",", NULL, NULL));
			concatList($1, $3);
		}
;	
TYPE: 
		Integer {
			$$ = makeNode((char*)"TYPE", NULL, $1);
		}
	|
		Real {
			$$ = makeNode((char*)"TYPE", NULL, $1);
		}
;	
LIST: 
		LIST STMT {
			$$ = makeNode((char*)"LIST", NULL, $1);
			concatList($1, $2);
		}
	|
		/*epsilon*/
		/*epsilon*/ {$$ = makeNode((char*)"LIST", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
;	
STMT: 
		ASSN {
			$$ = makeNode((char*)"STMT", NULL, $1);
		}
	|
		CNTRL {
			$$ = makeNode((char*)"STMT", NULL, $1);
		}
	|
		READ {
			$$ = makeNode((char*)"STMT", NULL, $1);
		}
	|
		WRITE {
			$$ = makeNode((char*)"STMT", NULL, $1);
		}
	|
		STMT_RETURN {
			$$ = makeNode((char*)"STMT", NULL, $1);
		}
	|
		BLK {
			$$ = makeNode((char*)"STMT", NULL, $1);
		}
;	
STMT_RETURN: 
		Return '(' EXP ')' ';' {
			$$ = makeNode((char*)"STMT_RETURN", NULL, $1);
			concatList($1, makeNode((char*)"(", NULL, NULL));
			concatList($1, $3);
			concatList($1, makeNode((char*)")", NULL, NULL));
			concatList($1, makeNode((char*)";", NULL, NULL));
		}
;	
WRITE: 
		Write '(' EXP ')' ';' {
			$$ = makeNode((char*)"WRITE", NULL, $1);
			concatList($1, makeNode((char*)"(", NULL, NULL));	
			concatList($1, $3);
			concatList($1, makeNode((char*)")", NULL, NULL));
			concatList($1, makeNode((char*)";", NULL, NULL));
		}
	|
		Write '(' STRING ')' ';' {
			$$ = makeNode((char*)"WRITE", NULL, $1);
			concatList($1, makeNode((char*)"(", NULL, NULL));
			concatList($1, $3);
			concatList($1, makeNode((char*)")", NULL, NULL));
			concatList($1, makeNode((char*)";", NULL, NULL));
		}
;	
READ: 
		Read '(' LVAL ')' ';' {
			$$ = makeNode((char*)"READ", NULL, $1);
			concatList($1, makeNode((char*)"(", NULL, NULL));
			concatList($1, $3);
			concatList($1, makeNode((char*)")", NULL, NULL));
			concatList($1, makeNode((char*)";", NULL, NULL));
		}
;	
ASSN: 
		LVAL ASSIGN EXP ';' {
			$$ = makeNode((char*)"ASSN", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
			concatList($1, makeNode((char*)";", NULL, NULL));
		}
;
LVAL: 
		ID {
			$$ = makeNode((char*)"LVAL", NULL, $1);
		}
	|
		STREF {
			$$ = makeNode((char*)"LVAL", NULL, $1);
		}
;
CNTRL: 
		If BEXP Then STMT Else STMT {
			$$ = makeNode((char*)"CNTRL", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
			concatList($1, $4);
			concatList($1, $5);
			concatList($1, $6);
		}
	|
		If BEXP Then STMT {
			$$ = makeNode((char*)"CNTRL", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
			concatList($1, $4);
		}
	|
		While BEXP Do STMT {
			$$ = makeNode((char*)"CNTRL", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
			concatList($1, $4);
		}
;	
BEXP: 
		BEXP OR_OP BEXP {
			$$ = makeNode((char*)"BEXP", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
		}
	|
		BEXP AND_OP BEXP {
			$$ = makeNode((char*)"BEXP", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
		}
	|
		EXP REL_OP EXP {
			$$ = makeNode((char*)"BEXP", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
		}
	|
		NOT_OP BEXP {
			$$ = makeNode((char*)"BEXP", NULL, $1);
			concatList($1, $2);
		}
	|
		'(' BEXP ')' {
		    	$1 = makeNode((char*)"(",NULL,NULL);
			$$ = makeNode((char*)"BEXP", NULL, $1);
			concatList($1, $2);
			concatList($1, makeNode((char*)")", NULL, NULL));
		}
;	
EXP: 
		EXP ADD_OP EXP {
			$$ = makeNode((char*)"EXP", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
		}
	|
		EXP MUL_OP EXP {
			$$ = makeNode((char*)"EXP", NULL, $1);
			concatList($1, $2);
			concatList($1, $3);
		}
	|
		'(' EXP ')' {
		    	$1 = makeNode((char*)"(",NULL,NULL);
			$$ = makeNode((char*)"EXP", NULL, $1);
			concatList($1, $2);
			concatList($1, makeNode((char*)")", NULL, NULL));
		}
	|
		'(' TYPE ')' EXP {
		    	$1 = makeNode((char*)"(",NULL,NULL);
			$$ = makeNode((char*)"EXP", NULL, $1);
			concatList($1, $2);
			concatList($1, makeNode((char*)")", NULL, NULL));
			concatList($1, $4);
		}
	|
		ID {
			$$ = makeNode((char*)"EXP", NULL, $1);
		}
	|
		STREF {
			$$ = makeNode((char*)"EXP", NULL, $1);
		}
	|
		NUM {
			$$ = makeNode((char*)"EXP", NULL, $1);
		}
	|
		CALL {
			$$ = makeNode((char*)"EXP", NULL, $1);
		}
;	
STREF: 
		ID '[' ID ']' {
			$$ = makeNode((char*)"STREF", NULL, $1);
			concatList($1, makeNode((char*)"[", NULL, NULL));
			concatList($1, $3);
			concatList($1, makeNode((char*)"]", NULL, NULL));
		}
	|
		STREF '[' ID ']' {
			$$ = makeNode((char*)"STREF", NULL, $1);
			concatList($1, makeNode((char*)"[", NULL, NULL));
			concatList($1, $3);
			concatList($1, makeNode((char*)"]", NULL, NULL));
		}
;	
CALL: 
		Call ID '(' CALL_ARGS_FULL ')' {
			$$ = makeNode((char*)"CALL", NULL, $1);
			concatList($1, $2);
			concatList($1, makeNode((char*)"(", NULL, NULL));
			concatList($1, $4);
			concatList($1, makeNode((char*)")", NULL, NULL));
		}
;	
CALL_ARGS_FULL: 
		CALL_ARGS {
			$$ = makeNode((char*)"CALL_ARGS_FULL", NULL, $1);
		}
	|
		/*epsilon*/
		/*epsilon*/ {$$ = makeNode((char*)"CALL_ARGS_FULL", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
;	
CALL_ARGS:
		EXP {
			$$ = makeNode((char*)"CALL_ARGS", NULL, $1);
		}
	|
		CALL_ARGS ',' EXP {
			$$ = makeNode((char*)"CALL_ARGS", NULL, $1);
			concatList($1, makeNode((char*)",", NULL, NULL));
			concatList($1, $3);
		}
;
	
%%

extern char* yytext;
extern int yylineno;

void yyerror (char const *err){
   printf("Syntax error: '%s' in line number %d\n", yytext, yylineno);
   exit(1);
}

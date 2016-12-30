%{
#include <stdio.h>
#include "helper_files/part2_helpers.h"
#include "part2.tab.hpp"
void showToken(char *);
void printReservedWord();
void printUnchangable();
void printOperator(const char*);
void printErr();
%}

%option yylineno noyywrap
%option   outfile="part2-lex.c" header-file="part2-lex.h"

PRIMITIVE_TYPE     (integer|real)
SEQUENSER          (return)
TYPE_CONSTRUCTOR   (defstruct)
LOOP               (while|do)
CONDITIONAL        (if|then|else)
FUNCTION           (main|write|read|call)
OTHER              (var|extern)
RESERVED_WORD      ({PRIMITIVE_TYPE}|{SEQUENSER}|{TYPE_CONSTRUCTOR}|{LOOP}|{FUNCTION}|{CONDITIONAL}|{OTHER})

DIGIT              ([0-9])
CHAR               ([a-zA-Z])
whitespace         ([\t ])
UINT               ({DIGIT}+)
INT                ({UINT}|-{UINT})
REAL               ({INT}\.{UINT})
NUM                ({INT}|{REAL})
WORD               ({CHAR}+)
ID                 ({CHAR}({CHAR}*{DIGIT}*)*)
MUL_OP	    	   ([\*\/])
ADD_OP	    	   ([\+\-])
ASSIGN_OP 	   (=)
RELATION_OP	   (<|>|<=|>=|==|<>)
OR_OP		   (\|\|)
AND_OP		   (&&)
NOT_OP		   (\!)
BRACKET            ([\(\)\{\}\[\]])
END_OF_COMMAND     (\;)
END_OF_LINE        (\n)
UNCHANGABLE        ({BRACKET}|{END_OF_LINE}|{END_OF_COMMAND}|{whitespace}|\:|\,)
STRING             (\"[^\"\n]*\")
COMMENT		   (\/\/.*)

%%

{END_OF_LINE}		     printf("\n");
{COMMENT}		     {}
(intger)	{printReservedWord(); yylval->type = "Reserved"; yylval->value = "integer"; return Integer;}
(real)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "real"; return Real;}
(return)	{printReservedWord(); yylval->type = "Reserved"; yylval->value = "return"; return Return;}
(defstruct)	{printReservedWord(); yylval->type = "Reserved"; yylval->value = "defstruct"; return Defstruct;}
(while)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "while"; return While;}
(do)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "do"; return Do;}
(if)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "if"; return If;}
(then)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "then"; return Then;}
(else)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "else"; return Else;}
(main)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "main"; return Main;}
(write)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "write"; return Write;}
(read)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "read"; return Read;}
(call)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "call"; return Call;}
(var)		{printReservedWord(); yylval->type = "Reserved"; yylval->value = "var"; return Var;}
(extern)	{printReservedWord(); yylval->type = "Reserved"; yylval->value = "extern"; return Extern;}
{NUM}           {showToken("num"); yylval->type = "NUM"; yylval->value = yytext; return NUM;}
{ID}            {showToken("id");  yylval->type = "ID"; yylval->value = yytext; return ID;}
{STRING}        {showToken("str"); yylval->type = "STRING"; yylval->value = yytext; return STRING;}
{UNCHANGABLE}   {printUnchangable(); return yytext[0];}
{MUL_OP}	{printOperator("mulop");  yylval->type = "MUL_OP"; return MUL_OP;}
{ADD_OP}	{printOperator("addop");  yylval->type = "ADD_OP"; return ADD_OP;}
{ASSIGN_OP}	{printOperator("assign"); yylval->type = "ASSIGN_OP"; return ASSIGN_OP;}
{RELATION_OP}	{printOperator("relop");  yylval->type = "REL_OP"; return REL_OP;}
{AND_OP}	{printOperator("and"); 	  yylval->type = "AND_OP"; return AND_OP;}
{OR_OP}		{printOperator("or"); 	  yylval->type = "OR_OP"; return OR_OP;}
{NOT_OP}	{printOperator("not"); 	  yylval->type = "NOT_OP"; return NOT_OP;}
.                            {printErr();}

%%

void showToken(char *name)
{
    if(yytext[0] == '"'){
        yytext[yyleng-1] = '\0';
	yytext++;
    }
    printf("<%s,%s>", name, yytext);
}

void printReservedWord(void)
{
    printf("<%s>", yytext);
}

void printUnchangable(void)
{
    printf("%s", yytext);
}

void printOperator(const char *opName)
{
  printf("<%s,%s>", opName, yytext);
}

void printErr()
{
  printf("\nLexical error: '%s' in line number %d\n", yytext, yylineno);
  exit(1);
}

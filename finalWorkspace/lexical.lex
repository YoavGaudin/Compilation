%{
#include <stdio.h>
#include "parser.h"
  //#include "newParser.hpp"
#include "parser.tab.h"
void printErr();
char * getString(char * in);
%}

%option yylineno noyywrap
%option   outfile="lexical.c" header-file="lexical.h"

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
CHARTOKENS	   ({BRACKET}|[\;\:\,])
UNCHANGABLE        (\n|{whitespace})
STRING             (\"[^\"\n]*\")
COMMENT		   (\/\/.*)

%%

{COMMENT}	{}
integer		{yylval = makeNode((char*)"integer", NULL, NULL); return Integer;}
real		{yylval = makeNode((char*)"real", NULL, NULL); return Real;}
return		{yylval = makeNode((char*)"return", NULL, NULL); return Return;}
defstruct	{yylval = makeNode((char*)"defstruct", NULL, NULL); return Defstruct;}
while		{yylval = makeNode((char*)"while", NULL, NULL); return While;}
do		{yylval = makeNode((char*)"do", NULL, NULL); return Do;}
if		{yylval = makeNode((char*)"if", NULL, NULL); return If;}
then		{yylval = makeNode((char*)"then", NULL, NULL); return Then;}
else		{yylval = makeNode((char*)"else", NULL, NULL); return Else;}
main		{yylval = makeNode((char*)"main", NULL, NULL); return Main;}
write		{yylval = makeNode((char*)"write", NULL, NULL); return Write;}
read		{yylval = makeNode((char*)"read", NULL, NULL); return Read;}
call		{yylval = makeNode((char*)"call", NULL, NULL); return Call;}
var		{yylval = makeNode((char*)"var", NULL, NULL); return Var;}
extern		{yylval = makeNode((char*)"extern", NULL, NULL); return Extern;}
{NUM}           {yylval = makeNode((char*)"num",  strdup(yytext), NULL); return NUM;}
{ID}            {yylval = makeNode((char*)"id", strdup(yytext), NULL); return ID;}
{STRING}        {yylval = makeNode((char*)"str", getString(yytext), NULL); return STRING;}
{CHARTOKENS}    {return yytext[0];}
{MUL_OP}	{yylval = makeNode((char*)"mulop", strdup(yytext), NULL); return MUL_OP;}
{ADD_OP}	{yylval = makeNode((char*)"addop", strdup(yytext), NULL); return ADD_OP;}
{ASSIGN_OP}	{yylval = makeNode((char*)"assign", strdup(yytext), NULL); return ASSIGN;}
{RELATION_OP}	{yylval = makeNode((char*)"relop", strdup(yytext), NULL); return REL_OP;}
{AND_OP}	{yylval = makeNode((char*)"and", strdup(yytext), NULL); return AND_OP;}
{OR_OP}		{yylval = makeNode((char*)"or", strdup(yytext), NULL); return OR_OP;}
{NOT_OP}	{yylval = makeNode((char*)"not", strdup(yytext), NULL); return NOT_OP;}
{UNCHANGABLE}	{}
.               {printErr();}

%%

void printErr()
{
  printf("\nLexical error: '%s' in line number %d\n", yytext, yylineno);
  exit(1);
}

char * getString(char * in) {
  char * out = strdup(in);
  ++out;
  int len = strlen(out);
  *(out+len-1) = '\0';
  return out;
}

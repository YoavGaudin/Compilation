%{
#include <stdio.h>
#include "newParser.hpp"
#include "parser.tab.hpp"
void printErr();
%}

%option yylineno noyywrap
%option outfile="lexical.c" header-file="lexical.h"

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
integer		{yylval = *(new Stype(yytext)); return Integer;}
real		{yylval = *(new Stype(yytext)); return Real;}
return		{yylval = *(new Stype(yytext)); return Return;}
defstruct	{yylval = *(new Stype(yytext)); return Defstruct;}
while		{yylval = *(new Stype(yytext)); return While;}
do		{yylval = *(new Stype(yytext)); return Do;}
if		{yylval = *(new Stype(yytext)); return If;}
then		{yylval = *(new Stype(yytext)); return Then;}
else		{yylval = *(new Stype(yytext)); return Else;}
main		{yylval = *(new Stype(yytext)); return Main;}
write		{yylval = *(new Stype(yytext)); return Write;}
read		{yylval = *(new Stype(yytext)); return Read;}
call		{yylval = *(new Stype(yytext)); return Call;}
var		{yylval = *(new Stype(yytext)); return Var;}
extern		{yylval = *(new Stype(yytext)); return Extern;}
{NUM}           {yylval = *(new Stype(yytext)); return NUM;}
{ID}            {yylval = *(new Stype(yytext)); return ID;}
{STRING}        {yylval = *(new Stype(yytext)); return STRING;}
{CHARTOKENS}    {return yytext[0];}
{MUL_OP}	{yylval = *(new Stype(yytext)); return MUL_OP;}
{ADD_OP}	{yylval = *(new Stype(yytext)); return ADD_OP;}
{ASSIGN_OP}	{yylval = *(new Stype(yytext)); return ASSIGN;}
{RELATION_OP}	{yylval = *(new Stype(yytext)); return REL_OP;}
{AND_OP}	{yylval = *(new Stype(yytext)); return AND_OP;}
{OR_OP}		{yylval = *(new Stype(yytext)); return OR_OP;}
{NOT_OP}	{yylval = *(new Stype(yytext)); return NOT_OP;}
{UNCHANGABLE}	{}
.               {printErr();}

%%

void printErr()
{
  printf("\nLexical error: '%s' in line number %d\n", yytext, yylineno);
  exit(1);
}

%{
#include <stdio.h>
#include "helper_files/part2_helpers.h"
#include "part2.tab.hpp"
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
CHARTOKENS	   ({BRACKET}|[\;\:\,])
UNCHANGABLE        (END_OF_LINE|{whitespace})
STRING             (\"[^\"\n]*\")
COMMENT		   (\/\/.*)

%%

{COMMENT}	{}
integer		{yylval = makeNode((char*)"Reserved", (char*)"integer", NULL); return Integer;}
real		{yylval = makeNode((char*)"Reserved", (char*)"real", NULL); return Real;}
return		{yylval = makeNode((char*)"Reserved", (char*)"return", NULL); return Return;}
defstruct	{yylval = makeNode((char*)"Reserved", (char*)"defstruct", NULL); return Defstruct;}
while		{yylval = makeNode((char*)"Reserved", (char*)"while", NULL); return While;}
do		{yylval = makeNode((char*)"Reserved", (char*)"do", NULL); return Do;}
if		{yylval = makeNode((char*)"Reserved", (char*)"if", NULL); return If;}
then		{yylval = makeNode((char*)"Reserved", (char*)"then", NULL); return Then;}
else		{yylval = makeNode((char*)"Reserved", (char*)"else", NULL); return Else;}
main		{yylval = makeNode((char*)"main", NULL, NULL); return Main;}
write		{yylval = makeNode((char*)"Reserved", (char*)"write", NULL); return Write;}
read		{yylval = makeNode((char*)"Reserved", (char*)"read", NULL); return Read;}
call		{yylval = makeNode((char*)"Reserved", (char*)"call", NULL); return Call;}
var		{yylval = makeNode((char*)"var", NULL, NULL); return Var;}
extern		{yylval = makeNode((char*)"Reserved", (char*)"extern", NULL); return Extern;}
{NUM}           {yylval = makeNode((char*)"num",  yytext, NULL); return NUM;}
{ID}            {yylval = makeNode((char*)"id", yytext, NULL); return ID;}
{STRING}        {yylval = makeNode((char*)"STRING", yytext, NULL); return STRING;}
{CHARTOKENS}    {return yytext[0];}
{MUL_OP}	{yylval = makeNode((char*)"MUL_OP", NULL, NULL); return MUL_OP;}
{ADD_OP}	{yylval = makeNode((char*)"ADD_OP", NULL, NULL); return ADD_OP;}
{ASSIGN_OP}	{yylval = makeNode((char*)"assign", NULL, NULL); return ASSIGN;}
{RELATION_OP}	{yylval = makeNode((char*)"REL_OP", NULL, NULL); return REL_OP;}
{AND_OP}	{yylval = makeNode((char*)"AND_OP", NULL, NULL); return AND_OP;}
{OR_OP}		{yylval = makeNode((char*)"OR_OP", NULL, NULL); return OR_OP;}
{NOT_OP}	{yylval = makeNode((char*)"NOT_OP", NULL, NULL); return NOT_OP;}
{UNCHANGABLE}	{}
.               {printErr();}

%%

void printErr()
{
  printf("\nLexical error: '%s' in line number %d\n", yytext, yylineno);
  exit(1);
}

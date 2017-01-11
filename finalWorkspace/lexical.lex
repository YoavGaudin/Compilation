%{
#include <stdio.h>
#include "parser.h"
#include "newParser.hpp"
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
integer		{yylval = new Stype("integer"); return Integer;}
real		{yylval = new Stype("real"); return Real;}
return		{yylval = new Stype("return"); return Return;}
defstruct	{yylval = new Stype("defstruct"); return Defstruct;}
while		{yylval = new Stype("while"); return While;}
do		{yylval = new Stype("do"); return Do;}
if		{yylval = new Stype("if"); return If;}
then		{yylval = new Stype("then"); return Then;}
else		{yylval = new Stype("else"); return Else;}
main		{yylval = new Stype("main"); return Main;}
write		{yylval = new Stype("write"); return Write;}
read		{yylval = new Stype("read"); return Read;}
call		{yylval = new Stype("call"); return Call;}
var		{yylval = new Stype("var"); return Var;}
extern		{yylval = new Stype("extern"); return Extern;}
{NUM}           {yylval = new Stype("num"); return NUM;}
{ID}            {yylval = new Stype("id"); return ID;}
{STRING}        {yylval = new Stype("str"); return STRING;}
{CHARTOKENS}    {return yytext[0];}
{MUL_OP}	{yylval = new Stype("mulop"); return MUL_OP;}
{ADD_OP}	{yylval = new Stype("addop"); return ADD_OP;}
{ASSIGN_OP}	{yylval = new Stype("assign"); return ASSIGN;}
{RELATION_OP}	{yylval = new Stype("relop"); return REL_OP;}
{AND_OP}	{yylval = new Stype("and"); return AND_OP;}
{OR_OP}		{yylval = new Stype("or"); return OR_OP;}
{NOT_OP}	{yylval = new Stype("not"); return NOT_OP;}
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

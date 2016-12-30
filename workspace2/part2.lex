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
(intger)	{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("integer"); return Integer;}
(real)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("real"); return Real;}
(return)	{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("return"); return Return;}
(defstruct)	{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("defstruct"); return Defstruct;}
(while)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("while"); return While;}
(do)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("do"); return Do;}
(if)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("if"); return If;}
(then)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("then"); return Then;}
(else)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("else"); return Else;}
(main)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("main"); return Main;}
(write)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("write"); return Write;}
(read)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("read"); return Read;}
(call)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("call"); return Call;}
(var)		{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("var"); return Var;}
(extern)	{printReservedWord(); yylval->type = strdup("Reserved"); yylval->value = strdup("extern"); return Extern;}
{NUM}           {showToken(strdup("num")); yylval->type = strdup("NUM"); yylval->value = strdup(yytext); return NUM;}
{ID}            {showToken(strdup("id"));  yylval->type = strdup("ID"); yylval->value = strdup(yytext); return ID;}
{STRING}        {showToken(strdup("str")); yylval->type = strdup("STRING"); yylval->value = strdup(yytext); return STRING;}
{UNCHANGABLE}   {printUnchangable(); return yytext[0];}
{MUL_OP}	{printOperator("mulop");  yylval->type = strdup("MUL_OP"); return MUL_OP;}
{ADD_OP}	{printOperator("addop");  yylval->type = strdup("ADD_OP"); return ADD_OP;}
{ASSIGN_OP}	{printOperator("assign"); yylval->type = strdup("ASSIGN_OP"); return ASSIGN_OP;}
{RELATION_OP}	{printOperator("relop");  yylval->type = strdup("REL_OP"); return REL_OP;}
{AND_OP}	{printOperator("and"); 	  yylval->type = strdup("AND_OP"); return AND_OP;}
{OR_OP}		{printOperator("or"); 	  yylval->type = strdup("OR_OP"); return OR_OP;}
{NOT_OP}	{printOperator("not"); 	  yylval->type = strdup("NOT_OP"); return NOT_OP;}
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

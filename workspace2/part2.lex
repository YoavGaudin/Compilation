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
(intger)	{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"integer", NULL); return Integer;}
(real)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"real", NULL); return Real;}
(return)	{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"return", NULL); return Return;}
(defstruct)	{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"defstruct", NULL); return Defstruct;}
(while)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"while", NULL); return While;}
(do)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"do", NULL); return Do;}
(if)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"if", NULL); return If;}
(then)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"then", NULL); return Then;}
(else)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"else", NULL); return Else;}
(main)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"main", NULL); return Main;}
(write)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"write", NULL); return Write;}
(read)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"read", NULL); return Read;}
(call)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"call", NULL); return Call;}
(var)		{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"var", NULL); return Var;}
(extern)	{printReservedWord(); yylval = makeNode((char*)"Reserved", (char*)"extern", NULL); return Extern;}
{NUM}           {showToken((char*)"num"); yylval = makeNode((char*)"NUM",  yytext, NULL); return NUM;}
{ID}            {showToken((char*)"id");  yylval = makeNode((char*)"ID", yytext, NULL); return ID;}
{STRING}        {showToken((char*)"str"); yylval = makeNode((char*)"STRING", yytext, NULL); return STRING;}
{UNCHANGABLE}   {printUnchangable(); return yytext[0];}
{MUL_OP}	{printOperator((char*)"mulop");  yylval = makeNode((char*)"MUL_OP", NULL, NULL); return MUL_OP;}
{ADD_OP}	{printOperator((char*)"addop");  yylval = makeNode((char*)"ADD_OP", NULL, NULL); return ADD_OP;}
{ASSIGN_OP}	{printOperator((char*)"assign"); yylval = makeNode((char*)"ASSIGN_OP", NULL, NULL); return ASSIGN_OP;}
{RELATION_OP}	{printOperator((char*)"relop");  yylval = makeNode((char*)"REL_OP", NULL, NULL); return REL_OP;}
{AND_OP}	{printOperator((char*)"and"); 	 yylval = makeNode((char*)"AND_OP", NULL, NULL); return AND_OP;}
{OR_OP}		{printOperator((char*)"or"); 	 yylval = makeNode((char*)"OR_OP", NULL, NULL); return OR_OP;}
{NOT_OP}	{printOperator((char*)"not"); 	 yylval = makeNode((char*)"NOT_OP", NULL, NULL); return NOT_OP;}
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

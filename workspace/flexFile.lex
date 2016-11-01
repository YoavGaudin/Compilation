%{
#include <stdio.h>
void showToken(char *);
void printPreservedWord();
void printUnchangable();
void printOperator();
%}

%option yylineno noyywrap
%option   outfile="flex_example1.c" header-file="flex_example1.h"

PRIMITIVE_TYPE     (integer|char|real)
SEQUENSER          (return|goto|continue|break)
TYPE_CONSTRUCTOR   (defstruct)
LOOP               (for|while|do)
CONDITIONAL        (if|then|else|switch|case|default)
FUNCTION           (main|write|read)
RESERVED_WORD      ({PRIMITIVE_TYPE}|{SEQUENSER}|{TYPE_CONSTRUCTOR}|{LOOP}|{FUNCTION}|{CONDITIONAL}|var)

DIGIT              ([0-9])
CHAR               ([a-zA-Z])
whitespace         ([\t ])
UINT               ({DIGIT}+)
INT                ({UINT}|-{UINT})
REAL               ({INT}.{UINT})
NUM                ({INT}|{REAL})
WORD               ({CHAR}+)
ID                 ({CHAR}({CHAR}*{DIGIT}*)*)
SIGNE              ([\~\!\@\#\$\^\&\(\)\_\?])
OPERATOR           ([\+\-\*\/\%\=])
BRACKET            ([\(\)\{\}\[\]])
END_OF_COMMAND     (\;)
END_OF_LINE        (\n)
UNCHANGABLE        ({BRACKET}|{END_OF_LINE}|{END_OF_COMMAND}|{whitespace}|\:|\,|\.\\)
ANY                ({DIGIT}*{CHAR}*{whitespace}*{SIGNE}*{OPERATOR}*{BRACKET}*{END_OF_COMMAND}*{UNCHANGABLE}*)
STRING             (\"{ANY}*\")

%%
{RESERVED_WORD}             printPreservedWord();
{NUM}                       showToken("num");
{ID}                        showToken("id");
{STRING}                    showToken("str");
{UNCHANGABLE}               printUnchangable();
{OPERATOR}                  printOperator();
.                           printf("lex fails to recognize this (%s)!\n", yytext);
%%

void showToken(char *name)
{
    printf("<%s,%s>", name, yytext);
}

void printPreservedWord(void)
{
    printf("<%s>", yytext);
}

void printUnchangable(void)
{
    printf("%s", yytext);
}

void printOperator(void)
{
  char *opName = "OP_NAME";
  if(strcmp(yytext, "*") == 0)
    opName = "mulop";
  if(strcmp(yytext, "+") == 0)
    opName = "addop";
  if(strcmp(yytext, "/") == 0)
    opName = "divop";
  if(strcmp(yytext, "-") == 0)
    opName = "subop";
  if(strcmp(yytext, "=") == 0)
    opName = "assign";
  if(strcmp(yytext, "%") == 0)
    opName = "modop";
  printf("<%s,%s>", opName, yytext);
}


%{
#include <stdio.h>
void showToken(char *);
void printReservedWord();
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
SIGN               ([\~\!\@\#\$\^\&\(\)\_\?])
REG_OPERATOR       ([\+\-\*\/\%\=])
ASSIGN_OPERATOR    (=|\+=|\-=|\*=|\/=)
COMP_OPERATOR      (<|>|<=|>=|==|!=)
OPERATOR           ({REG_OPERATOR}|{COMP_OPERATOR}|{ASSIGN_OPERATOR})
BRACKET            ([\(\)\{\}\[\]])
END_OF_COMMAND     (\;)
END_OF_LINE        (\n)
UNCHANGABLE        ({BRACKET}|{END_OF_LINE}|{END_OF_COMMAND}|{whitespace}|\:|\,|\.\\)
ANY                ({DIGIT}*{CHAR}*{whitespace}*{SIGN}*{OPERATOR}*{BRACKET}*{END_OF_COMMAND}*{UNCHANGABLE}*)
STRING             (\".*\")
COMMENT		   (\/\/.*)
%%
{COMMENT}		    {}
{RESERVED_WORD}             printReservedWord();
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

void printReservedWord(void)
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
  if(strcmp(yytext, "%") == 0)
    opName = "modop";
  if(strcmp(yytext, "=") == 0 || strcmp(yytext, "+=") == 0 || strcmp(yytext, "-=") == 0
     || strcmp(yytext, "*=") == 0 || strcmp(yytext, "/=") == 0)
    opName = "assign";
  if(strcmp(yytext, "<") == 0 || strcmp(yytext, ">") == 0 || strcmp(yytext, "<=") == 0
     || strcmp(yytext, ">=") == 0 || strcmp(yytext, "==") == 0 || strcmp(yytext, "!=") == 0)
    opName = "relop";  
  printf("<%s,%s>", opName, yytext);
}


%{
#include <stdio.h>
void showToken(char *);
void printReservedWord();
void printUnchangable();
void printOperator();
void printErr();
int curr_line = 1;
%}

%option yylineno noyywrap
%option   outfile="part1.c" header-file="part1.h"

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
REG_OPERATOR       ([\+\-\*\/])
ASSIGN_OPERATOR    (=)
COMP_OPERATOR      (<|>|<=|>=|==|<>)
BINARY_OPERATOR    (&&|\|\||\!)
OPERATOR           ({REG_OPERATOR}|{COMP_OPERATOR}|{ASSIGN_OPERATOR}|{BINARY_OPERATOR})
BRACKET            ([\(\)\{\}\[\]])
END_OF_COMMAND     (\;)
END_OF_LINE        (\n)
UNCHANGABLE        ({BRACKET}|{END_OF_LINE}|{END_OF_COMMAND}|{whitespace}|\:|\,)
STRING             (\"[^\"\n]*\")
COMMENT		   (\/\/.*)

%%
{END_OF_LINE}		    {curr_line++; printf("\n");}
{COMMENT}		    {}
{RESERVED_WORD}              printReservedWord();
{NUM}                       showToken("num");
{ID}                        showToken("id");
{STRING}                    showToken("str");
{UNCHANGABLE}               printUnchangable();
{OPERATOR}                  printOperator();
.                           printErr();
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

void printOperator(void)
{
  char *opName = "OP_NAME";
  if(strcmp(yytext, "*") == 0 || strcmp(yytext, "/") == 0)
    opName = "mulop";
  if(strcmp(yytext, "+") == 0 || strcmp(yytext, "-") == 0)
    opName = "addop";
  if(strcmp(yytext, "=") == 0)
    opName = "assign";
  if(strcmp(yytext, "<") == 0 || strcmp(yytext, ">") == 0 || strcmp(yytext, "<=") == 0
     || strcmp(yytext, ">=") == 0 || strcmp(yytext, "==") == 0 || strcmp(yytext, "<>") == 0)
    opName = "relop";
  if(strcmp(yytext, "&&") == 0)
    opName = "and";
  if(strcmp(yytext, "||") == 0)
    opName = "or";
  if(strcmp(yytext, "!") == 0)
    opName = "not";
  printf("<%s,%s>", opName, yytext);
}

void printErr()
{
  printf("\nLexical error: '%s' in line number %d\n", yytext, curr_line);
  exit(1);
}

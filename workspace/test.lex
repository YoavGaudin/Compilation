%{
#include <stdio.h>
void showToken(char *);
%}

%option yylineno noyywrap
%option   outfile="flex_example1.c" header-file="flex_example1.h"

DIGIT              ([0-9])
CHAR               ([a-zA-Z])
whitespace         ([\t\n ])
NUM                ({DIGIT}+)
WORD               ({CHAR}+)
ID                 ({CHAR}[{CHAR}{NUM}]*)
SIGNES             ([\~\!\@\#\$\%\^\&\*\(\)\_\+])
ANY                ({DIGIT}*{CHAR}*{whitespace}*{SIGNES}*)
STRING             (\"{ANY}*\")
PRIMITIVE_TYPE     ([int | char | float | double])
SEQUENSER          (return | goto | continue | break)
TYPE_CONSTRUCTOR   (struct)
LOOP               (for | while | do)
PRESERVED_WORD     ({PRIMITIVE_TYPE} | {SEQUENSER} | {TYPE_CONSTRUCTOR} | {LOOP})

%%
{PRIMITIVE_TYPE}                       showToken("num");
{whitespace}                ;
.                           printf("lex fails to recognize this (%s)!\n", yytext);
%%

void showToken(char *name)
{
    printf("<%s>\n", yytext);
}

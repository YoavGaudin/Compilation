%{
/* Example for Tutorial 8 - Flex file */
#include <stdlib.h>
#include <stdio.h>
#include "t8.h"
#include "t8.tab.h"
%}

%option yylineno noyywrap
%option   outfile="t8-lex.c" header-file="t8-lex.h"

num_int       ([0-9]+)
num_float     ([0-9]+\.[0-9]+)

%%

{num_int}   { yylval.ival = atoi(yytext); return NUM_I; }
{num_float} { yylval.fval = atof(yytext); return NUM_F; }
[+*]        { return yytext[0]; }
[\n]        { return EXP_END; }
[ \t\r]     ; /* Ignore */
.           { printf("Invalid input: %s\n", yytext); exit(1); }

%%



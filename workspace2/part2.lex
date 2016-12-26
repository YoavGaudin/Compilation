%{
#include <stdio.h>
void showToken(char *);
void printReservedWord();
void printUnchangable();
void printOperator();
void printErr();
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
{RESERVED_WORD}              {printReservedWord(); return RWORD;}
{INT}                        {showToken("num"); yylval.i = atoi(yytext); return INT;}
{REAL}                       {showToken("num"); yylval.d = atof(yytext); return REAL;}
{ID}                         {showToken("id"); yylval.str = strdup(yytext); return ID;}
{STRING}                     {showToken("str"); yylval.str = strdup(yytext); return STRING;}
{UNCHANGABLE}                {printUnchangable(); return yytext[0];}
{MUL_OP}		     {printOperator("mulop"); return MUL_OP;}
{ADD_OP}		     {printOperator("addop"); return ADD_OP;}
{ASSIGN_OP}		     {printOperator("assign"); return ASSIGN_OP;}
{RELATION_OP}	             {printOperator("relop"); return REL_OP;}
{AND_OP}		     {printOperator("and"); return AND_OP;}
{OR_OP}			     {printOperator("or"); return OR_OP;}
{NOT_OP}		     {printOperator("not"); return NOT_OP;}
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

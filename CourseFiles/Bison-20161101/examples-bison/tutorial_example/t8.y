%{
/* Example for tutorial 8 - Bison file */
#include <stdlib.h>
#include <stdio.h>
#include "t8.h"

extern int yylex();

void yyerror(const char* msg);
%}

%token EXP_END NUM_I NUM_F
%left '+'
%left '*'

%%

WHOLE_EXP:      EXP EXP_END {
                    if ($1.data_type == DTYPE_I)
                        printf("\t= %d\n", $1.ival);
                    else
                        printf("\t= %f\n", $1.fval);
                    return 0;
                }
        ;

EXP:            NUM_I { $$.data_type = DTYPE_I; $$.ival = $1.ival; }
        |
                NUM_F { $$.data_type = DTYPE_F; $$.fval = $1.fval; }
        |
                EXP '+' EXP {
                    if ($1.data_type != $3.data_type) {
                        printf("Data type mismatch!\n");
                        exit(3);
                    }
                    $$.data_type = $1.data_type;
                    if ($1.data_type == DTYPE_F) {
                        printf("%f + %f\n", $1.fval, $3.fval);
                        $$.fval = $1.fval + $3.fval;
                    } else { /*I*/
                        printf("%d + %d\n", $1.ival, $3.ival);
                        $$.ival = $1.ival + $3.ival;
                    }
                }
        |
                EXP '*' EXP {
                    if ($1.data_type != $3.data_type) {
                        printf("Data type mismatch!\n");
                        exit(3);
                    }
                    $$.data_type = $1.data_type;
                    if ($1.data_type == DTYPE_F) {
                        printf("%f * %f\n", $1.fval, $3.fval);
                        $$.fval = $1.fval * $3.fval;
                    } else { /*I*/
                        printf("%d * %d\n", $1.ival, $3.ival);
                        $$.ival = $1.ival * $3.ival;
                    }
                }
        ;

%%

void yyerror(const char* msg)
{
    printf("yyerror %s\n", msg);
    exit(2);
}

int main(void)
{
    return yyparse();
}


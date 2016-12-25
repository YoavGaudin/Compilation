/* Tutorial 8 - Common definitions for lexer and parser */

#ifndef _T8_H_
#define _T8_H_

typedef struct {
    int ival;
    double fval;
    enum {DTYPE_I, DTYPE_F} data_type;
} semval_t;

#define YYSTYPE semval_t

#endif /*_T8_H_*/

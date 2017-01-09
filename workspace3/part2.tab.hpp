/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     Defstruct = 259,
     Extern = 260,
     Main = 261,
     Var = 262,
     Integer = 263,
     Real = 264,
     If = 265,
     Then = 266,
     Else = 267,
     While = 268,
     Do = 269,
     Return = 270,
     Write = 271,
     Read = 272,
     Call = 273,
     ID = 274,
     STRING = 275,
     ASSIGN = 276,
     OR_OP = 277,
     AND_OP = 278,
     REL_OP = 279,
     ADD_OP = 280,
     MUL_OP = 281,
     NOT_OP = 282
   };
#endif
/* Tokens.  */
#define NUM 258
#define Defstruct 259
#define Extern 260
#define Main 261
#define Var 262
#define Integer 263
#define Real 264
#define If 265
#define Then 266
#define Else 267
#define While 268
#define Do 269
#define Return 270
#define Write 271
#define Read 272
#define Call 273
#define ID 274
#define STRING 275
#define ASSIGN 276
#define OR_OP 277
#define AND_OP 278
#define REL_OP 279
#define ADD_OP 280
#define MUL_OP 281
#define NOT_OP 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


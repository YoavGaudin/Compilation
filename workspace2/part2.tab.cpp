/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "part2.ypp" /* yacc.c:339  */

  #ifndef __cplusplus
  #define __cplusplus
  #endif
  #include <iostream>
  #include <stdio.h>
  #include "helper_files/part2_helpers.h"

  using namespace std;

  int yylex (void);
  void yyerror (char const *);
  
  ParserNode *parseTree;

#line 82 "part2.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "part2.tab.hpp".  */
#ifndef YY_YY_PART2_TAB_HPP_INCLUDED
# define YY_YY_PART2_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    ADD_OP = 276,
    MUL_OP = 277,
    AND_OP = 278,
    OR_OP = 279,
    REL_OP = 280,
    ASSIGN = 281,
    NOT_OP = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PART2_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 161 "part2.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    36,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    23,    22,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    35,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    24,    25,    26,    27,
      28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    38,    48,    51,    62,    73,    77,    81,
      85,    91,    96,   102,   105,   113,   119,   122,   128,   134,
     140,   146,   153,   157,   162,   168,   171,   175,   179,   183,
     187,   191,   196,   205,   213,   222,   231,   239,   243,   248,
     257,   264,   272,   278,   284,   289,   295,   303,   309,   315,
     321,   328,   332,   336,   340,   345,   352,   360,   369,   374,
     377,   381
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "Defstruct", "Extern", "Main",
  "Var", "Integer", "Real", "If", "Then", "Else", "While", "Do", "Return",
  "Write", "Read", "Call", "ID", "STRING", "','", "';'", "':'", "ADD_OP",
  "MUL_OP", "AND_OP", "OR_OP", "REL_OP", "ASSIGN", "NOT_OP", "'['", "'{'",
  "'('", "']'", "'}'", "')'", "$accept", "PROGRAM", "TDEFS", "FDEFS",
  "FUNC_ARGLIST_FULL", "FUNC_ARGLIST", "MAIN_FUNCTION", "BLK",
  "DECLARATIONS", "DECLARLIST", "DCL", "TYPE", "LIST", "STMT",
  "STMT_RETURN", "WRITE", "READ", "ASSN", "LVAL", "CNTRL", "BEXP", "EXP",
  "STREF", "CALL", "CALL_ARGS_FULL", "CALL_ARGS", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    44,    59,    58,   276,   277,   278,   279,   280,   281,
     282,    91,   123,    40,    93,   125,    41
};
# endif

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -81,     7,     8,   -81,   -16,    68,     5,    71,    40,   -81,
     -81,   -81,    31,    21,   -13,    30,    56,     5,   -81,    57,
      62,     5,   108,    81,    82,   -81,    85,     5,   -81,     5,
     -81,   -81,   -81,    84,   -81,     5,    75,    89,   114,   -81,
     -81,   100,     1,     1,   105,   106,   107,   110,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   113,   -81,   112,    40,     5,
     115,   -81,   125,   110,     1,    51,    14,   104,   112,   -81,
      19,    -1,    45,   126,   127,    -1,   128,   -81,   -81,   -81,
     116,   -81,   117,    94,    83,    86,     1,     1,    -1,    -1,
      -1,    86,    53,    73,   118,    88,   119,   122,   109,   123,
      -1,    -1,   -81,   -81,   136,   -81,   -81,   -81,   -81,    98,
     -81,    90,   129,   130,   137,   138,   -81,   -81,   -81,    98,
     131,   140,   -81,    86,   -81,   -81,   -81,   -81,   -81,    -1,
     -81,    98
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     7,     1,     0,    13,     0,     0,    16,    22,
      23,     2,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,    18,     0,    15,    25,     9,
      21,    20,    19,     0,    17,     9,    16,     0,     8,    11,
       3,     0,     0,     0,     0,     0,     0,    37,    14,    31,
      24,    30,    29,    28,    26,     0,    27,    38,    16,     0,
       0,    53,     0,    51,     0,     0,     0,     0,    52,    54,
       0,     0,     0,     0,     0,     0,     0,     5,    10,     6,
       0,    44,     0,     0,     0,    16,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,    46,    49,    40,    43,    42,    47,    48,    45,
      41,     0,     0,     0,     0,     0,    55,    36,    56,    60,
       0,    58,    50,    16,    32,    34,    33,    35,    57,     0,
      39,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   -81,   133,   -81,   -81,    -7,   -81,   141,
      -6,    61,   -81,   -80,   -81,   -81,   -81,   -81,    77,   -81,
     -29,   -62,   -36,   -81,   -81,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,    37,    38,    11,    49,    19,    14,
      15,    82,    36,    50,    51,    52,    53,    54,    55,    56,
      66,    67,    68,    69,   120,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,    18,    61,    84,    61,   104,    13,     3,    24,    93,
      95,   110,     4,    98,    70,    30,     6,    62,    63,    62,
      63,    24,    23,    39,    13,    85,   107,   108,   109,    39,
     111,    64,    92,    91,    65,    81,    83,    57,   119,   122,
      86,    87,    21,   130,    22,    86,    87,    17,    61,    57,
      20,    77,    25,    78,    61,    57,    61,   105,   106,     9,
      10,     9,    10,    62,    63,    94,    12,   131,    16,    62,
      63,    62,    63,     7,     8,    26,     9,    10,    92,     9,
      10,    64,    17,    32,    65,    42,    92,    57,    43,    28,
      44,    45,    46,    17,    47,    29,    42,    88,    89,    43,
      33,    44,    45,    46,    34,    47,    40,    88,    89,   112,
      48,    90,    88,    89,    88,    89,     9,    10,    35,   103,
      86,    87,    88,    89,   114,    58,   103,    31,    88,    89,
     102,   117,    90,    88,    89,    59,    60,    79,    71,    72,
      73,    74,    75,    76,    80,    47,    97,    99,   123,   100,
      96,   124,   125,   101,   113,   115,   116,   118,    27,   126,
     127,   129,     0,     0,     0,     0,     0,   128,    41
};

static const yytype_int16 yycheck[] =
{
      36,     8,     3,    65,     3,    85,    19,     0,    14,    71,
      72,    91,     4,    75,    43,    21,    32,    18,    19,    18,
      19,    27,    35,    29,    19,    11,    88,    89,    90,    35,
      92,    30,    33,    14,    33,    64,    65,    73,   100,   101,
      26,    27,    21,   123,    23,    26,    27,     7,     3,    85,
      19,    58,    22,    59,     3,    91,     3,    86,    87,     8,
       9,     8,     9,    18,    19,    20,     5,   129,     7,    18,
      19,    18,    19,     5,     6,    19,     8,     9,    33,     8,
       9,    30,     7,    22,    33,    10,    33,   123,    13,    32,
      15,    16,    17,     7,    19,    33,    10,    24,    25,    13,
      19,    15,    16,    17,    22,    19,    22,    24,    25,    36,
      35,    28,    24,    25,    24,    25,     8,     9,    33,    36,
      26,    27,    24,    25,    36,    36,    36,    19,    24,    25,
      36,    22,    28,    24,    25,    21,    36,    22,    33,    33,
      33,    31,    29,    31,    19,    19,    19,    19,    12,    33,
      73,    22,    22,    36,    36,    36,    34,    34,    17,    22,
      22,    21,    -1,    -1,    -1,    -1,    -1,    36,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,     4,    40,    32,     5,     6,     8,
       9,    43,    48,    19,    46,    47,    48,     7,    44,    45,
      19,    21,    23,    35,    47,    22,    19,    46,    32,    33,
      47,    19,    48,    19,    22,    33,    49,    41,    42,    47,
      22,    41,    10,    13,    15,    16,    17,    19,    35,    44,
      50,    51,    52,    53,    54,    55,    56,    59,    36,    21,
      36,     3,    18,    19,    30,    33,    57,    58,    59,    60,
      57,    33,    33,    33,    31,    29,    31,    44,    47,    22,
      19,    57,    48,    57,    58,    11,    26,    27,    24,    25,
      28,    14,    33,    58,    20,    58,    55,    19,    58,    19,
      33,    36,    36,    36,    50,    57,    57,    58,    58,    58,
      50,    58,    36,    36,    36,    36,    34,    22,    34,    58,
      61,    62,    58,    12,    22,    22,    22,    22,    36,    21,
      50,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    41,
      42,    42,    43,    43,    44,    45,    45,    46,    46,    47,
      47,    47,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    50,    51,    52,    52,    53,    54,    55,    55,    56,
      56,    56,    57,    57,    57,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    61,    61,
      62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     7,     0,     7,     8,     0,     1,     0,
       3,     1,     2,     0,     4,     2,     0,     3,     2,     3,
       3,     3,     1,     1,     2,     0,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     4,     1,     1,     6,
       4,     4,     3,     3,     2,     3,     3,     3,     3,     3,
       4,     1,     1,     1,     1,     4,     4,     5,     1,     0,
       1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 31 "part2.ypp" /* yacc.c:1646  */
    {
			parseTree = makeNode((char*)"PROGRAM", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1336 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"TDEFS", NULL, (yyvsp[-6]));
			concatList((yyvsp[-6]), (yyvsp[-5]));
			concatList((yyvsp[-6]), makeNode((char*)"{", NULL, NULL));
			concatList((yyvsp[-6]), (yyvsp[-3]));
			concatList((yyvsp[-6]), makeNode((char*)"}", NULL, NULL));
			concatList((yyvsp[-6]), (yyvsp[-1]));
			concatList((yyvsp[-6]), makeNode((char*)";", NULL, NULL));
		}
#line 1350 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 48 "part2.ypp" /* yacc.c:1646  */
    {(yyval) = makeNode((char*)"TDEFS", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
#line 1356 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 51 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"FDEFS", NULL, (yyvsp[-6]));
			concatList((yyvsp[-6]), (yyvsp[-5]));
			concatList((yyvsp[-6]), (yyvsp[-4]));
			concatList((yyvsp[-6]), makeNode((char*)"(", NULL, NULL));
			concatList((yyvsp[-6]), (yyvsp[-2]));
			concatList((yyvsp[-6]), makeNode((char*)")", NULL, NULL));
			concatList((yyvsp[-6]), (yyvsp[0]));
			
		}
#line 1371 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"FDEFS", NULL, (yyvsp[-7]));
			concatList((yyvsp[-7]), (yyvsp[-6]));
			concatList((yyvsp[-7]), (yyvsp[-5]));
			concatList((yyvsp[-7]), (yyvsp[-4]));
			concatList((yyvsp[-7]), makeNode((char*)"(", NULL, NULL));
			concatList((yyvsp[-7]), (yyvsp[-2]));
			concatList((yyvsp[-7]), makeNode((char*)")", NULL, NULL));
			concatList((yyvsp[-7]), makeNode((char*)";", NULL, NULL));
		}
#line 1386 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 73 "part2.ypp" /* yacc.c:1646  */
    {(yyval) = makeNode((char*)"FDEFS", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
#line 1392 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"FUNC_ARGLIST_FULL", NULL, (yyvsp[0]));
		}
#line 1400 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 81 "part2.ypp" /* yacc.c:1646  */
    {(yyval) = makeNode((char*)"FUNC_ARGLIST_FULL", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
#line 1406 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 85 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"FUNC_ARGLIST", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), makeNode((char*)",", NULL, NULL));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1416 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 91 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"FUNC_ARGLIST", NULL, (yyvsp[0]));
		}
#line 1424 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 96 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"MAIN_FUNCTION", NULL, (yyvsp[-1]));
			concatList((yyvsp[-1]), (yyvsp[0]));
		}
#line 1433 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "part2.ypp" /* yacc.c:1646  */
    {(yyval) = makeNode((char*)"MAIN_FUNCTION", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
#line 1439 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 105 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"BLK", NULL, (yyvsp[-3]));
			concatList((yyvsp[-3]), makeNode((char*)"{", NULL, NULL));
			concatList((yyvsp[-3]), (yyvsp[-1]));
			concatList((yyvsp[-3]), makeNode((char*)"}", NULL, NULL));
		}
#line 1450 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 113 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"DECLARATIONS", NULL, (yyvsp[-1]));
			concatList((yyvsp[-1]), (yyvsp[0]));
		}
#line 1459 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 119 "part2.ypp" /* yacc.c:1646  */
    {(yyval) = makeNode((char*)"DECLARATIONS", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
#line 1465 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 122 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"DECLARLIST", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), makeNode((char*)";", NULL, NULL));
		}
#line 1475 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 128 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"DECLARLIST", NULL, (yyvsp[-1]));
			concatList((yyvsp[-1]), makeNode((char*)";", NULL, NULL));
		}
#line 1484 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 134 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"DCL", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), makeNode((char*)":", NULL, NULL));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1494 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 140 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"DCL", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), makeNode((char*)":", NULL, NULL));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1504 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 146 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"DCL", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), makeNode((char*)",", NULL, NULL));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1514 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 153 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"TYPE", NULL, (yyvsp[0]));
		}
#line 1522 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 157 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"TYPE", NULL, (yyvsp[0]));
		}
#line 1530 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 162 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"LIST", NULL, (yyvsp[-1]));
			concatList((yyvsp[-1]), (yyvsp[0]));
		}
#line 1539 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 168 "part2.ypp" /* yacc.c:1646  */
    {(yyval) = makeNode((char*)"LIST", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
#line 1545 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 171 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STMT", NULL, (yyvsp[0]));
		}
#line 1553 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 175 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STMT", NULL, (yyvsp[0]));
		}
#line 1561 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 179 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STMT", NULL, (yyvsp[0]));
		}
#line 1569 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 183 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STMT", NULL, (yyvsp[0]));
		}
#line 1577 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 187 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STMT", NULL, (yyvsp[0]));
		}
#line 1585 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 191 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STMT", NULL, (yyvsp[0]));
		}
#line 1593 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 196 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STMT_RETURN", NULL, (yyvsp[-4]));
			concatList((yyvsp[-4]), makeNode((char*)"(", NULL, NULL));
			concatList((yyvsp[-4]), (yyvsp[-2]));
			concatList((yyvsp[-4]), makeNode((char*)")", NULL, NULL));
			concatList((yyvsp[-4]), makeNode((char*)";", NULL, NULL));
		}
#line 1605 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 205 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"WRITE", NULL, (yyvsp[-4]));
			concatList((yyvsp[-4]), makeNode((char*)"(", NULL, NULL));	
			concatList((yyvsp[-4]), (yyvsp[-2]));
			concatList((yyvsp[-4]), makeNode((char*)")", NULL, NULL));
			concatList((yyvsp[-4]), makeNode((char*)";", NULL, NULL));
		}
#line 1617 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 213 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"WRITE", NULL, (yyvsp[-4]));
			concatList((yyvsp[-4]), makeNode((char*)"(", NULL, NULL));
			concatList((yyvsp[-4]), (yyvsp[-2]));
			concatList((yyvsp[-4]), makeNode((char*)")", NULL, NULL));
			concatList((yyvsp[-4]), makeNode((char*)";", NULL, NULL));
		}
#line 1629 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 222 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"READ", NULL, (yyvsp[-4]));
			concatList((yyvsp[-4]), makeNode((char*)"(", NULL, NULL));
			concatList((yyvsp[-4]), (yyvsp[-2]));
			concatList((yyvsp[-4]), makeNode((char*)")", NULL, NULL));
			concatList((yyvsp[-4]), makeNode((char*)";", NULL, NULL));
		}
#line 1641 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 231 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"ASSN", NULL, (yyvsp[-3]));
			concatList((yyvsp[-3]), (yyvsp[-2]));
			concatList((yyvsp[-3]), (yyvsp[-1]));
			concatList((yyvsp[-3]), makeNode((char*)";", NULL, NULL));
		}
#line 1652 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 239 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"LVAL", NULL, (yyvsp[0]));
		}
#line 1660 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 243 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"LVAL", NULL, (yyvsp[0]));
		}
#line 1668 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 248 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"CNTRL", NULL, (yyvsp[-5]));
			concatList((yyvsp[-5]), (yyvsp[-4]));
			concatList((yyvsp[-5]), (yyvsp[-3]));
			concatList((yyvsp[-5]), (yyvsp[-2]));
			concatList((yyvsp[-5]), (yyvsp[-1]));
			concatList((yyvsp[-5]), (yyvsp[0]));
		}
#line 1681 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 257 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"CNTRL", NULL, (yyvsp[-3]));
			concatList((yyvsp[-3]), (yyvsp[-2]));
			concatList((yyvsp[-3]), (yyvsp[-1]));
			concatList((yyvsp[-3]), (yyvsp[0]));
		}
#line 1692 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 264 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"CNTRL", NULL, makeNode((char*)"while", NULL, NULL));
			concatList((yyvsp[-3]), (yyvsp[-2]));
			concatList((yyvsp[-3]), (yyvsp[-1]));
			concatList((yyvsp[-3]), (yyvsp[0]));
		}
#line 1703 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 272 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"BEXP", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1713 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 278 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"BEXP", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1723 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 284 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"BEXP", NULL, (yyvsp[-1]));
			concatList((yyvsp[-1]), (yyvsp[0]));
		}
#line 1732 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 289 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"BEXP", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1742 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 295 "part2.ypp" /* yacc.c:1646  */
    {
		    	(yyvsp[-2]) = makeNode((char*)"(",NULL,NULL);
			(yyval) = makeNode((char*)"BEXP", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), makeNode((char*)")", NULL, NULL));
		}
#line 1753 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 303 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"EXP", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1763 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 309 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"EXP", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1773 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 315 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"EXP", NULL, makeNode((char*)"(", NULL, NULL));
			concatList((yyvsp[-2]), (yyvsp[-1]));
			concatList((yyvsp[-2]), makeNode((char*)")", NULL, NULL));
		}
#line 1783 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 321 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"EXP", NULL, makeNode((char*)"(", NULL, NULL));
			concatList((yyvsp[-3]), (yyvsp[-2]));
			concatList((yyvsp[-3]), makeNode((char*)")", NULL, NULL));
			concatList((yyvsp[-3]), (yyvsp[0]));
		}
#line 1794 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 328 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"EXP", NULL, (yyvsp[0]));
		}
#line 1802 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 332 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"EXP", NULL, (yyvsp[0]));
		}
#line 1810 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 336 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"EXP", NULL, (yyvsp[0]));
		}
#line 1818 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 340 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"EXP", NULL, (yyvsp[0]));
		}
#line 1826 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 345 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STREF", NULL, (yyvsp[-3]));
			concatList((yyvsp[-3]), makeNode((char*)"[", NULL, NULL));
			concatList((yyvsp[-3]), (yyvsp[-1]));
			concatList((yyvsp[-3]), makeNode((char*)"]", NULL, NULL));
		}
#line 1837 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 352 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"STREF", NULL, (yyvsp[-3]));
			concatList((yyvsp[-3]), makeNode((char*)"[", NULL, NULL));
			concatList((yyvsp[-3]), (yyvsp[-1]));
			concatList((yyvsp[-3]), makeNode((char*)"]", NULL, NULL));
		}
#line 1848 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 360 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"CALL", NULL, (yyvsp[-4]));
			concatList((yyvsp[-4]), (yyvsp[-3]));
			concatList((yyvsp[-4]), makeNode((char*)"(", NULL, NULL));
			concatList((yyvsp[-4]), (yyvsp[-1]));
			concatList((yyvsp[-4]), makeNode((char*)")", NULL, NULL));
		}
#line 1860 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 369 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"CALL_ARGS_FULL", NULL, (yyvsp[0]));
		}
#line 1868 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 374 "part2.ypp" /* yacc.c:1646  */
    {(yyval) = makeNode((char*)"CALL_ARGS_FULL", NULL, makeNode((char*)"EPSILON", NULL, NULL));}
#line 1874 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 377 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"CALL_ARGS", NULL, (yyvsp[0]));
		}
#line 1882 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 381 "part2.ypp" /* yacc.c:1646  */
    {
			(yyval) = makeNode((char*)"CALL_ARGS", NULL, (yyvsp[-2]));
			concatList((yyvsp[-2]), makeNode((char*)",", NULL, NULL));
			concatList((yyvsp[-2]), (yyvsp[0]));
		}
#line 1892 "part2.tab.cpp" /* yacc.c:1646  */
    break;


#line 1896 "part2.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 388 "part2.ypp" /* yacc.c:1906  */


extern char* yytext;
extern int yylineno;

void yyerror (char const *err){
   printf("\nLexical error: '%s' in line number %d\n", yytext, yylineno);
   exit(1);;
}

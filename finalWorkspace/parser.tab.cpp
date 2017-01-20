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
#line 2 "parser.ypp" /* yacc.c:339  */

  #include <stdio.h>
  #include <iostream>
  #include "newParser.hpp"
  
  using namespace std;
  
  int yylex (void);
  void yyerror (char const *);
  void semanticError(string s);

#line 78 "parser.tab.cpp" /* yacc.c:339  */

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
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
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
    While = 267,
    Do = 268,
    Return = 269,
    Write = 270,
    Read = 271,
    Call = 272,
    Else = 273,
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 157 "parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

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
       0,    33,    33,    37,    41,    44,    53,    60,    63,    67,
      70,    75,    80,    80,    87,    90,    98,   106,   109,   117,
     125,   133,   144,   153,   156,   160,   163,   166,   169,   172,
     175,   178,   181,   185,   189,   192,   196,   200,   234,   238,
     243,   253,   261,   271,   280,   289,   344,   350,   358,   364,
     372,   391,   409,   416,   438,   473,   479,   494,   501,   516,
     520,   524,   528,   531,   534
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "Defstruct", "Extern", "Main",
  "Var", "Integer", "Real", "If", "Then", "While", "Do", "Return", "Write",
  "Read", "Call", "Else", "ID", "STRING", "','", "';'", "':'", "ASSIGN",
  "OR_OP", "AND_OP", "REL_OP", "ADD_OP", "MUL_OP", "NOT_OP", "'['", "'{'",
  "'('", "']'", "'}'", "')'", "$accept", "PROGRAM", "TDEFS", "FDEFS",
  "FUNC_ARGLIST_FULL", "FUNC_ARGLIST", "MAIN_FUNCTION", "@1", "BLK",
  "DECLARATIONS", "DECLARLIST", "DCL", "TYPE", "LIST", "STMT",
  "STMT_RETURN", "WRITE", "READ", "ASSN", "LVAL", "CNTRL", "BEXP", "M",
  "N", "EXP", "STREF", "CALL", "CALL_ARGS_FULL", "CALL_ARGS", YY_NULLPTR
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

#define YYPACT_NINF -100

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-100)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -100,    14,    45,  -100,     5,   125,    36,    37,  -100,  -100,
    -100,  -100,    43,    46,    -3,    50,    60,    77,    59,    36,
     102,    82,    95,  -100,    73,    36,  -100,   106,    36,  -100,
    -100,  -100,   110,  -100,    36,    36,  -100,   103,   119,  -100,
    -100,   105,    83,    77,    36,   120,    41,  -100,   111,   112,
     113,   116,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   124,
    -100,   118,  -100,  -100,  -100,  -100,   131,   116,    41,    21,
      57,   108,   118,  -100,    41,    40,    61,   132,   133,    40,
     134,   121,  -100,   107,    88,   -10,  -100,  -100,  -100,    40,
      40,    40,    62,    33,   -16,   122,    87,   123,   126,   100,
     127,    40,    40,  -100,  -100,    93,    41,    41,    97,   128,
    -100,  -100,    91,   140,   141,   142,   143,  -100,  -100,  -100,
      97,   130,   135,  -100,  -100,   129,  -100,    93,  -100,  -100,
    -100,  -100,  -100,    40,   149,  -100,    97,  -100,    93,  -100
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     7,     1,     0,    14,     0,     0,    12,    23,
      24,     2,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,    19,     0,     0,    13,     0,     9,    22,
      21,    20,     0,    18,     9,    16,    26,     0,     8,    11,
       3,     0,    17,    17,     0,     0,     0,    48,     0,     0,
       0,    38,    15,    32,    25,    31,    30,    29,    27,     0,
      28,    39,     5,    10,     6,    56,     0,    54,     0,     0,
       0,     0,    55,    57,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,    48,    48,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,    47,    52,    17,     0,     0,    45,    50,
      51,    48,     0,     0,     0,     0,     0,    58,    37,    59,
      63,     0,    61,    53,    49,    43,    44,    17,    33,    35,
      34,    36,    60,     0,    41,    42,    64,    48,    17,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,  -100,  -100,   136,  -100,  -100,  -100,   -12,  -100,
     144,    42,    84,  -100,   -99,  -100,  -100,  -100,  -100,    94,
    -100,   -59,   -84,  -100,   -68,   -42,  -100,  -100,  -100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    37,    38,    11,    17,    53,    27,
      14,    15,    83,    42,    54,    55,    56,    57,    58,    59,
      60,    70,    74,   134,    71,    72,    73,   121,   122
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    85,   105,   106,   107,    26,   124,    94,    96,    82,
      84,    99,    90,    91,     3,    92,    13,    89,    90,    91,
     113,   108,   109,   110,    65,   112,   104,   127,   135,     9,
      10,    62,    21,   120,   123,    61,    65,     6,    66,   139,
      67,     9,    10,    65,    65,     9,    10,   125,   126,     4,
      66,    68,    67,   138,    69,    13,    22,    66,    66,    67,
      67,    29,    18,    61,    65,   136,    93,    19,    86,    20,
      39,    68,    23,    93,    69,   111,    39,    22,    66,    24,
      67,    95,    87,    88,    25,    61,    63,    87,    88,    12,
      25,    16,    28,    46,    93,    47,    61,    48,    49,    50,
      25,    32,    51,    46,    31,    47,    34,    48,    49,    50,
       9,    10,    51,    87,    88,    90,    91,    33,    52,    90,
      91,    30,   118,   115,   103,    90,    91,   104,    90,    91,
       7,     8,    40,     9,    10,    89,    90,    91,    36,    43,
      44,    45,    64,   102,    75,    76,    77,    78,    79,    80,
      81,    51,    98,   100,   101,    88,   133,    91,   114,   116,
     117,   119,   128,   129,   130,   131,   132,   137,     0,    35,
      41,    97
};

static const yytype_int16 yycheck[] =
{
      42,    69,    86,    87,    88,    17,   105,    75,    76,    68,
      69,    79,    28,    29,     0,    74,    19,    27,    28,    29,
      36,    89,    90,    91,     3,    93,    36,   111,   127,     8,
       9,    43,    35,   101,   102,    77,     3,    32,    17,   138,
      19,     8,     9,     3,     3,     8,     9,   106,   107,     4,
      17,    30,    19,   137,    33,    19,    14,    17,    17,    19,
      19,    19,    19,   105,     3,   133,    33,    21,    11,    23,
      28,    30,    22,    33,    33,    13,    34,    35,    17,    19,
      19,    20,    25,    26,     7,   127,    44,    25,    26,     5,
       7,     7,    33,    10,    33,    12,   138,    14,    15,    16,
       7,    19,    19,    10,    20,    12,    33,    14,    15,    16,
       8,     9,    19,    25,    26,    28,    29,    22,    35,    28,
      29,    19,    22,    36,    36,    28,    29,    36,    28,    29,
       5,     6,    22,     8,     9,    27,    28,    29,    32,    36,
      21,    36,    22,    36,    33,    33,    33,    31,    24,    31,
      19,    19,    19,    19,    33,    26,    21,    29,    36,    36,
      34,    34,    22,    22,    22,    22,    36,    18,    -1,    25,
      34,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,     4,    40,    32,     5,     6,     8,
       9,    43,    49,    19,    47,    48,    49,    44,    19,    21,
      23,    35,    48,    22,    19,     7,    45,    46,    33,    48,
      19,    49,    19,    22,    33,    47,    32,    41,    42,    48,
      22,    41,    50,    36,    21,    36,    10,    12,    14,    15,
      16,    19,    35,    45,    51,    52,    53,    54,    55,    56,
      57,    62,    45,    48,    22,     3,    17,    19,    30,    33,
      58,    61,    62,    63,    59,    33,    33,    33,    31,    24,
      31,    19,    58,    49,    58,    61,    11,    25,    26,    27,
      28,    29,    58,    33,    61,    20,    61,    56,    19,    61,
      19,    33,    36,    36,    36,    59,    59,    59,    61,    61,
      61,    13,    61,    36,    36,    36,    36,    34,    22,    34,
      61,    64,    65,    61,    51,    58,    58,    59,    22,    22,
      22,    22,    36,    21,    60,    51,    61,    18,    59,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    41,
      42,    42,    44,    43,    43,    45,    46,    46,    47,    47,
      48,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    52,    53,    53,    54,    55,    56,    56,
      57,    57,    57,    58,    58,    58,    58,    58,    59,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      63,    64,    64,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     7,     0,     7,     8,     0,     1,     0,
       3,     1,     0,     3,     0,     4,     2,     0,     3,     2,
       3,     3,     3,     1,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     5,     5,     5,     5,     4,     1,     1,
       9,     6,     6,     4,     4,     3,     2,     3,     0,     0,
       3,     3,     3,     4,     1,     1,     1,     1,     4,     4,
       5,     1,     0,     1,     3
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
#line 33 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1331 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "parser.ypp" /* yacc.c:1646  */
    {
		  addStructToSymbolTable((yyvsp[-1])->tokenValue, (yyvsp[-3])->declarationList);
		}
#line 1339 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "parser.ypp" /* yacc.c:1646  */
    { cout << "TDEFS to epsilon" << endl; }
#line 1345 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 44 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<FDEFS 1>" << endl;
		  cout << "\t" << (yyvsp[-4])->tokenValue << endl;
		  Function* func = new Function((yyvsp[-4])->tokenValue, (yyvsp[-2])->argsList);
		  func->insertSymbolTable((yyvsp[0])->declarationList);
		  funcSymbols.insert(std::pair<string, Function>((yyvsp[-4])->tokenValue, *func));
		  cout << "<\\FDEFS 1>" << endl;
		}
#line 1358 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 53 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<FDEFS 2>" << endl;
		  Function* func = new Function((yyvsp[-4])->tokenValue, (yyvsp[-2])->argsList);
		  funcSymbols.insert(std::pair<string, Function>((yyvsp[-4])->tokenValue, *func));
		  cout << "<\\FDEFS 2>" << endl;
		}
#line 1369 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 60 "parser.ypp" /* yacc.c:1646  */
    { cout << "FDEFS to epsilon" << endl;}
#line 1375 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 63 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval)->argsList = (yyvsp[0])->argsList;
		}
#line 1383 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "parser.ypp" /* yacc.c:1646  */
    {}
#line 1389 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "parser.ypp" /* yacc.c:1646  */
    {
		  createArgumentsFromDCL((yyvsp[0]), (yyvsp[-2]));
		  (yyval)->argsList = (yyvsp[-2])->argsList;
		}
#line 1398 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "parser.ypp" /* yacc.c:1646  */
    {
		  createArgumentsFromDCL((yyvsp[0]), (yyval));
		}
#line 1406 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 80 "parser.ypp" /* yacc.c:1646  */
    {currFunction = new Function("main"); currBlock = currFunction;}
#line 1412 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 80 "parser.ypp" /* yacc.c:1646  */
    {
			Function* mainFunc = currFunction;
			mainFunc->insertSymbolTable((yyvsp[-1])->declarationList);
			funcSymbols.insert(std::pair<string, Function>("main", *mainFunc));
			cout << "<\\MAIN_FUNCTION>" <<endl;
		}
#line 1423 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "parser.ypp" /* yacc.c:1646  */
    {}
#line 1429 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 90 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BLK>" << endl;
		  (yyval)->declarationList = (yyvsp[-3])->declarationList;
		  (yyvsp[-1])->declarationList = (yyvsp[-3])->declarationList;
		  cout << "<\\BLK>" << endl;
		}
#line 1440 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DECLARATIONS>" << endl;
		  // add declerations to current block
		  currBlock->insertSymbolTable((yyvsp[0])->declarationList);
		  (yyval)->declarationList = (yyvsp[0])->declarationList;
		  cout << "<\\DECLARATIONS>" << endl;
		}
#line 1452 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 106 "parser.ypp" /* yacc.c:1646  */
    { cout << "DECLARATIONS to e" << endl; }
#line 1458 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 109 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DECLARELIST 1>" << endl;
		  cout << "\t" << (yyvsp[-1])->dcl_type << endl;
		  createVariablesFromDCL((yyvsp[-1]), (yyvsp[-2]));
		  (yyval)->declarationList = (yyvsp[-2])->declarationList;
		  cout << "<\\DECLARELIST 1>" << endl;
		}
#line 1470 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 117 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DECLARELIST 2>" << endl;
		  cout << "\t" << (yyvsp[-1])->dcl_type << endl;
		  createVariablesFromDCL((yyvsp[-1]), (yyval));
		  cout << "<\\DECLARELIST 2>" << endl;
		}
#line 1481 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 125 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DCL 1>" << endl;
		  cout << "\tvariable "+ (yyvsp[-2])->tokenValue +" of type "+ (yyvsp[0])->tokenValue +" declared" << endl;
		  (yyval)->dcl_type = (yyvsp[0])->tokenValue;
		  ((yyval)->dcl_ids).push_front((yyvsp[-2])->tokenValue);
		  cout << "<\\DCL 1>" << endl;
		}
#line 1493 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DCL 2>" << endl;
		  if(validateStructName((yyvsp[0])->tokenValue) == false){
		    semanticError("illegal type name");
		  }
		  (yyval)->dcl_type = (yyvsp[0])->tokenValue;
		  (yyval)->dcl_ids.push_front((yyvsp[-2])->tokenValue);
		  //The 2nd ID might be the name of a custom typedef
		  cout << "<\\DCL 2>" << endl;
		}
#line 1508 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 144 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DCL 3>" << endl;
		  ((yyvsp[0])->dcl_ids).push_front((yyvsp[-2])->tokenValue);
		  ((yyval)->dcl_ids).merge((yyvsp[0])->dcl_ids);
		  (yyval)->dcl_type = (yyvsp[0])->dcl_type;
		  cout << "<\\DCL 3>" << endl;
		}
#line 1520 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 153 "parser.ypp" /* yacc.c:1646  */
    { 
		}
#line 1527 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 156 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1534 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 160 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1541 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 163 "parser.ypp" /* yacc.c:1646  */
    {}
#line 1547 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 166 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1554 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 169 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1561 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 172 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1568 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 175 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1575 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 178 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1582 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 181 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1589 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 185 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1596 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 189 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1603 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 192 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1610 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 196 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1617 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 200 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<ASSN>" << endl;
		  // get LVAL's variable and check it was declared
		  Variable* lvalVar = currBlock->getScopeVariable((yyvsp[-3])->variableName);
		  if(lvalVar == NULL) {
		    cout << "currFunction: " << currFunction->name << endl;
		    printState();
		    semanticError((yyvsp[-3])->tokenValue + " was not declared in this scope");
		  }

		  if(lvalVar->getType() != (yyvsp[-1])->type) {
		    semanticError("type mismatch on assignment operation: trying to assign " + (yyvsp[-1])->type + " to " + lvalVar->getType());
		  }
		  
		  if(isPrimitive((yyvsp[-1])->type)) {
		    // EXP->place is the name of the register holding the actual value
		    string STOR = "";
		    if(isUsedIntReg((yyvsp[-1])->place)) {
		      STOR = "STORI";
		    } else if(isUsedRealReg((yyvsp[-1])->place)) {
		      STOR = "STORR";
		    } else {
		      assert(0);
		    }
		    emit(STOR + " " + (yyvsp[-1])->place + " I1 " + (yyvsp[-3])->offset);
		  } else { // EXP is defstruct
		    //EXP->place is offset from FP
		    copyStruct(lvalVar, (yyvsp[-1])->place);
		  }

		  cout << "<\\ASSN>" << endl;
		}
#line 1654 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 234 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval)->variableName = (yyvsp[0])->tokenValue;
		}
#line 1662 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 238 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval)->variableName = (yyvsp[0])->tokenValue;
		}
#line 1670 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 243 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<CNTRL 1>" << endl;
		  backpatch((yyvsp[-7])->trueList, (yyvsp[-5])->quad);
		  backpatch((yyvsp[-7])->falseList, (yyvsp[-1])->quad);
		  (yyval)->nextList.insert((yyval)->nextList.end(), (yyvsp[-4])->nextList.begin(), (yyvsp[-4])->nextList.end());
		  (yyval)->nextList.insert((yyval)->nextList.end(), (yyvsp[-3])->nextList.begin(), (yyvsp[-3])->nextList.end());
		  (yyval)->nextList.insert((yyval)->nextList.end(), (yyvsp[0])->nextList.begin(), (yyvsp[0])->nextList.end());
		  cout << "<\\CNTRL 1>" << endl;
		}
#line 1684 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 253 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<CNTRL 2>" << endl;
		  backpatch((yyvsp[-4])->trueList, (yyvsp[-2])->quad);
		  (yyval)->nextList.insert((yyval)->nextList.end(), (yyvsp[-4])->falseList.begin(), (yyvsp[-4])->falseList.end());
		  (yyval)->nextList.insert((yyval)->nextList.end(), (yyvsp[-1])->nextList.begin(), (yyvsp[-1])->nextList.end());
		  cout << "<\\CNTRL 2>" << endl;
		}
#line 1696 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 261 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<CNTRL 3>" << endl;
		  backpatch((yyvsp[-3])->trueList, (yyvsp[-1])->quad);
		  backpatch((yyvsp[-1])->nextList, (yyvsp[-4])->quad);
		  (yyval)->nextList.insert((yyval)->nextList.end(), (yyvsp[-3])->falseList.begin(), (yyvsp[-3])->falseList.end());
		  emit((string)"UJUMP " + INT2STR((yyvsp[-4])->quad));
		  cout << "<\\CNTRL 3>" << endl;
		}
#line 1709 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 271 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 1>" << endl;
		  backpatch((yyvsp[-3])->falseList, (yyvsp[-1])->quad);
		  (yyval)->trueList.insert((yyval)->trueList.end(), (yyvsp[-3])->trueList.begin(), (yyvsp[-3])->trueList.end());
		  (yyval)->trueList.insert((yyval)->trueList.end(), (yyvsp[0])->trueList.begin(), (yyvsp[0])->trueList.end());
		  (yyval)->falseList.insert((yyval)->falseList.end(), (yyvsp[0])->falseList.begin(), (yyvsp[0])->falseList.end());
		  cout << "<\\BEXP 1>" << endl;
		}
#line 1722 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 280 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 2>" << endl;
		  backpatch((yyvsp[-3])->trueList, (yyvsp[-1])->quad);
		  (yyval)->falseList.insert((yyval)->falseList.end(), (yyvsp[-3])->falseList.begin(), (yyvsp[-3])->falseList.end());
		  (yyval)->falseList.insert((yyval)->falseList.end(), (yyvsp[0])->falseList.begin(), (yyvsp[0])->falseList.end());
		  (yyval)->trueList.insert((yyval)->trueList.end(), (yyvsp[0])->trueList.begin(), (yyvsp[0])->trueList.end());
		  cout << "<\\BEXP 2>" << endl;
		}
#line 1735 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 289 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 3>" << endl;
		  string tempReg = getIntReg();
		  string SLET = "";
		  string SGRT = "";
		  string SEQU = "";
		  string SNEQ = "";
		  string opCommand = "";
		  
		  if(isIntegerVariable((yyvsp[-2])->place) && isIntegerVariable((yyvsp[0])->place)) {
		    SLET = "SLETI";
		    SGRT = "SGRTI";
		    SEQU = "SEQUI";
		    SNEQ = "SNEQI";
		  } else if(isRealVariable((yyvsp[-2])->place) && isRealVariable((yyvsp[0])->place)) {
		    SLET = "SLETR";
		    SGRT = "SGRTR";
		    SEQU = "SEQUR";
		    SNEQ = "SNEQR";		    
		  } else {
		    semanticError("type missmatch on relop \'" + (yyvsp[-1])->tokenValue + "\'");
		  }
		  
		  if((yyvsp[-1])->tokenValue == "<" || (yyvsp[-1])->tokenValue == "<=") {
		    opCommand = SLET;
		  } else if((yyvsp[-1])->tokenValue == ">" || (yyvsp[-1])->tokenValue == ">=") {
		    opCommand = SGRT;
		  } else if((yyvsp[-1])->tokenValue == "==") {
		    opCommand = SEQU;
		  } else if((yyvsp[-1])->tokenValue == "<>") {
		    opCommand = SNEQ;
		  } else {
		    semanticError("can't recognize RELOP " + (yyvsp[-1])->tokenValue);
		  }
		  
		  bool equalsFlag = false;
		  if((yyvsp[-1])->tokenValue == "<=" || (yyvsp[-1])->tokenValue == ">=") {
		    equalsFlag = true;
		  }
		  
		  emit(opCommand + " " + tempReg + " " + (yyvsp[-2])->place + " " + (yyvsp[0])->place);
		  (yyval)->trueList.push_back(nextquad());
		  emit("BNEQZ " + tempReg + " ___");
		  if(equalsFlag) {
		    // if tempReg == 0 we should continue down the flow (no jump needed)
		    emit(SEQU + " " + tempReg + " " + (yyvsp[-2])->place + " " + (yyvsp[-1])->place);
		    (yyval)->trueList.push_back(nextquad());
		    emit("BNEQZ " + tempReg + " ___");
		  }
		  (yyval)->falseList.push_back(nextquad());
		  emit((string)"UJUMP " + "___");
		  cout << "<\\BEXP 3>" << endl;
		}
#line 1793 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 344 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 4>" << endl;
		  (yyval)->trueList.swap((yyval)->falseList);
		  cout << "<\\BEXP 4>" << endl;
		}
#line 1803 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 350 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 5>" << endl;
		  (yyval)->trueList = (yyvsp[-1])->trueList;
		  (yyval)->falseList = (yyvsp[-1])->falseList;
		  cout << "<\\BEXP 5>" << endl;
		}
#line 1814 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 358 "parser.ypp" /* yacc.c:1646  */
    {
  		  cout << "<M>" << endl;
                  (yyval)->quad = nextquad();
                }
#line 1823 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 364 "parser.ypp" /* yacc.c:1646  */
    {
  		  cout << "<N>" << endl;
                  (yyval)->nextList.push_back(nextquad());
		  emit((string)"UJUMP" + " ___");
                }
#line 1833 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 372 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 1>" << endl;
		  if(!isPrimitive((yyvsp[-2])->type) || !isPrimitive((yyvsp[0])->type)) {
		    semanticError("can not perform add operation on defstruct");
		  }

		  // EXP->place is always in register!
		  if(isUsedIntReg((yyvsp[-2])->place) && isUsedIntReg((yyvsp[0])->place)) {
		    (yyval)->place = getIntReg();
		    emit("ADD2I " + (yyval)->place + " " + (yyvsp[-2])->place + " " + (yyvsp[-1])->place);
		  } else if(isUsedRealReg((yyvsp[-2])->place) && isUsedRealReg((yyvsp[0])->place)) {
		    (yyval)->place = getRealReg();
		    emit("ADD2R " + (yyval)->place + " " + (yyvsp[-2])->place + " " + (yyvsp[-1])->place);
		  } else {
		    semanticError("type missmatch within add operation");
		  }
		  cout << "<\\EXP 1>" << endl;
		}
#line 1856 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 391 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 2>" << endl;
		  if(!isPrimitive((yyvsp[-2])->type) || !isPrimitive((yyvsp[0])->type)) {
		    semanticError("can not perform add operation on defstruct");
		  }

		  if(isUsedIntReg((yyvsp[-2])->place) && isUsedIntReg((yyvsp[0])->place)) {
		    (yyval)->place = getIntReg();
		    emit("MULTI " + (yyval)->place + " " + (yyvsp[-2])->place + " " + (yyvsp[-1])->place);
		  } else if(isUsedRealReg((yyvsp[-2])->place) && isUsedRealReg((yyvsp[0])->place)) {
		    (yyval)->place = getRealReg();
		    emit("MULTR " + (yyval)->place + " " + (yyvsp[-2])->place + " " + (yyvsp[-1])->place);
		  } else {
		    semanticError("type missmatch within mul operation");
		  }
		  cout << "<\\EXP 2>" << endl;
		}
#line 1878 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 409 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 3>" << endl;
		  (yyval)->place = (yyvsp[-1])->place;
		  (yyval)->type = (yyvsp[-1])->type;
		  cout << "<\\EXP 3>" << endl;
		}
#line 1889 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 416 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 4>" << endl;
		  if((yyvsp[-2])->tokenValue == "Integer") {
		    if(isUsedIntReg((yyvsp[0])->place)) {
		      (yyval)->place = (yyvsp[0])->place;
		    } else if(isUsedRealReg((yyvsp[0])->place)) {
		      (yyval)->place = getIntReg();
		      emit("CRTOI " + (yyval)->place + " " + (yyvsp[0])->place);
		    }
		  } else if((yyvsp[-2])->tokenValue == "Real") {
		    if(isUsedRealReg((yyvsp[0])->place)) {
		      (yyval)->place = (yyvsp[0])->place;
		    } else if(isUsedIntReg((yyvsp[0])->place)) {
		      (yyval)->place = getRealReg();
		      emit("CITOR " + (yyval)->place + " " + (yyvsp[0])->place);
		    }
		  } else {
		    semanticError("undefined explicit cast");
		  }
		  cout << "<\\EXP 4>" << endl;
		}
#line 1915 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 438 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 5>" << endl;
		  // make sure ID is a variable in current scope
		  Variable* var = currBlock->getScopeVariable((yyvsp[0])->tokenValue);
		  if(var == NULL) {
		    cout << "currFunction: " << currFunction->name << endl;
		    printState();
		    semanticError((yyvsp[0])->tokenValue + " was not declared in this scope");
		  }

		  if(isPrimitive(var)) {
		    // EXP's register will hold the variable's value!
		    string LOAD = "";
		    if(var->getType() == "integer") {
		      LOAD = "LOADI";
		      (yyval)->place = getIntReg();
		    }
		    else if(var->getType() == "real") {
		      LOAD = "LOADR";
		      (yyval)->place = getRealReg();
		    }
		    else {
		      assert(0);
		    }
		    emit(LOAD + " " + (yyval)->place + " I1 " + to_string(var->getOffset()));
		    (yyval)->type = var->getType();
		  }
		  else { // var is struct
		    // EXP's register will hold the defstruct's offset from FP!
		    emit("ADD2I " + (yyval)->place + " 0 " + to_string(var->getOffset()));
		    (yyval)->type = var->getType();
		  }
		  cout << "<\\EXP 5>" << endl;
		}
#line 1954 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 473 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 6>" << endl;
		  
		  cout << "<\\EXP 6>" << endl;
		}
#line 1964 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 479 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 7>" << endl;
		  if(isInteger((yyvsp[0])->tokenValue)) {
		    (yyval)->type = "integer";
		    (yyval)->place = getIntReg();
		    emit("COPYI " + (yyval)->place + " " + (yyvsp[0])->tokenValue);
		  }
		  else {
		    (yyval)->type = "real";
		    (yyval)->place = getRealReg();
		    emit("COPYR " + (yyval)->place + " " + (yyvsp[0])->tokenValue);
		  }
		  cout << "<\\EXP 7>" << endl;
		}
#line 1983 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 494 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 8>" << endl;
		  (yyval)->place = (yyvsp[0])->place;
		  cout << "<\\EXP 8>" << endl;
		}
#line 1993 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 501 "parser.ypp" /* yacc.c:1646  */
    {
		  // check if $1 is a variable of type defstruct
		  Variable* var = currBlock->getScopeVariable((yyvsp[-3])->tokenValue);
		  if(!var) {
		    semanticError("");
		  }
		  if(var->getType() == "defstruct") {
		    
		    Variable* field;
		    // get the value if var[field] from memory
		  } else {
		    semanticError((yyvsp[-3])->tokenValue + " of type " + var->getType() + " is not subscriptable");
		  }
		}
#line 2012 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 516 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2019 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 520 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2026 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 524 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2033 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 528 "parser.ypp" /* yacc.c:1646  */
    {}
#line 2039 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 531 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2046 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 534 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2053 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2057 "parser.tab.cpp" /* yacc.c:1646  */
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
#line 538 "parser.ypp" /* yacc.c:1906  */


extern char* yytext;
extern int yylineno;

void yyerror (char const *err){
   printf("Syntax error: '%s' in line number %d\n", yytext, yylineno);
   exit(1);
}

void semanticError(string s) {
  printf("Semantic error: '%s' in line number %d\n", s.c_str(), yylineno);
  exit(1);
}
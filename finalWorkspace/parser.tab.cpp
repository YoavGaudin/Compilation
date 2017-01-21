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
  extern char* yytext;
  extern int yylineno;
  void yyerror (char const *);
  void semanticError(string s);

#line 80 "parser.tab.cpp" /* yacc.c:339  */

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

#line 159 "parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   174

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

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
      36,    33,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    23,    22,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    31,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    32,     2,     2,     2,     2,
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
       0,    37,    37,    43,    47,    51,    50,    66,    73,    76,
      80,    83,    88,    93,    93,   103,   106,   106,   116,   124,
     129,   137,   145,   153,   164,   173,   176,   180,   186,   189,
     193,   199,   203,   207,   211,   218,   222,   225,   229,   233,
     267,   273,   280,   291,   299,   309,   318,   327,   382,   388,
     396,   402,   410,   429,   447,   454,   476,   511,   517,   532,
     539,   554,   558,   562,   566,   569,   572,   576,   577,   578,
     579
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
  "OR_OP", "AND_OP", "REL_OP", "ADD_OP", "MUL_OP", "NOT_OP", "']'", "'}'",
  "')'", "'['", "'{'", "'('", "$accept", "PROGRAM", "TDEFS", "FDEFS", "@1",
  "FUNC_ARGLIST_FULL", "FUNC_ARGLIST", "MAIN_FUNCTION", "$@2", "BLK", "@3",
  "DECLARATIONS", "DECLARLIST", "DCL", "TYPE", "LIST", "STMT",
  "STMT_RETURN", "WRITE", "READ", "ASSN", "LVAL", "CNTRL", "BEXP", "M",
  "N", "EXP", "STREF", "CALL", "CALL_ARGS_FULL", "CALL_ARGS", "M_program",
  "M_main", "M_blk", "M_while", YY_NULLPTR
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
     282,    93,   125,    41,    91,   123,    40
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -71

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -110,     8,  -110,  -110,     9,    -6,   119,    19,    72,  -110,
    -110,  -110,    49,    66,    23,   -14,    61,    55,    51,  -110,
      19,    45,    70,    69,  -110,    63,    19,  -110,  -110,  -110,
    -110,    84,  -110,    19,    81,    99,  -110,  -110,   115,  -110,
      93,  -110,    19,    19,  -110,   112,  -110,  -110,    19,   100,
    -110,  -110,  -110,   105,  -110,    86,    52,   103,   106,   107,
     110,  -110,  -110,  -110,  -110,  -110,  -110,   114,  -110,   111,
     124,  -110,   121,   110,    52,    40,     0,   102,   111,  -110,
      76,    58,   122,   127,    76,   128,  -110,   113,  -110,   117,
      59,    80,  -110,  -110,  -110,    76,    76,    76,    11,    82,
     118,    88,   120,   123,    75,   125,    52,    76,    76,  -110,
    -110,    86,    52,    52,   104,   126,  -110,    90,   130,   135,
     136,   137,  -110,  -110,  -110,    37,   104,   129,   139,  -110,
    -110,   138,  -110,  -110,  -110,  -110,  -110,  -110,  -110,    76,
     143,    86,   104,  -110,  -110,    86,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      67,     0,     4,     1,     8,     0,    15,     0,     0,    25,
      26,     2,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,    21,     0,    10,    69,    24,    23,
      22,     0,    20,    10,     0,     9,    12,    14,    19,     3,
       0,     5,     0,     0,    16,     0,    69,    11,    18,     0,
       7,     6,    28,    50,    17,    69,     0,     0,     0,     0,
      40,    34,    27,    33,    32,    31,    29,     0,    30,    41,
       0,    58,     0,    56,     0,     0,     0,     0,    57,    59,
       0,     0,     0,     0,     0,     0,    50,     0,    48,     0,
       0,     0,    50,    50,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,    49,
      54,    69,     0,     0,    47,    52,    53,     0,     0,     0,
       0,     0,    60,    39,    61,     0,    65,     0,    63,    55,
      51,    45,    46,    35,    37,    36,    38,    50,    62,     0,
      43,    69,    66,    50,    44,    69,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,  -110,   132,  -110,  -110,  -110,   -15,
    -110,  -110,   131,    25,    31,  -110,  -109,  -110,  -110,  -110,
    -110,    85,  -110,   -71,   -77,  -110,   -74,   -55,  -110,  -110,
    -110,  -110,  -110,  -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,     6,    46,    34,    35,    11,    27,    61,
      49,    44,    15,    16,    89,    53,    62,    63,    64,    65,
      66,    67,    68,    76,    55,   140,    77,    78,    79,   127,
     128,     2,    13,    38,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    91,   130,    88,    90,    14,    99,   101,     3,   106,
     104,    92,    37,     5,    71,   111,   112,   113,    22,     9,
      10,   114,   115,   116,   117,    93,    94,    69,    72,     7,
      73,    51,   144,   126,   129,   125,   146,    12,    14,    17,
      23,   131,   132,    71,    20,    28,    21,    98,     9,    10,
     137,    36,    30,     9,    10,    71,    69,    72,    36,    73,
     141,    71,    93,    94,    29,   142,   145,    47,    18,    72,
      74,    73,    19,    23,    25,    72,    75,    73,   100,    71,
       9,    10,    74,    24,    93,    94,    69,    26,    75,    31,
      69,    32,   109,    72,    98,    73,    56,   123,   -70,    33,
      57,    58,    59,    96,    97,    60,    39,    95,    96,    97,
      96,    97,    98,   110,    41,   118,    96,    97,    96,    97,
      42,   120,    43,   110,     8,   -68,    45,     9,    10,    95,
      96,    97,    96,    97,    50,    52,    86,    54,    84,    80,
      87,    60,    81,    82,    83,    85,   103,   105,     0,   107,
     108,   119,   133,   121,   122,    97,   124,   134,   135,   136,
     139,   143,   138,     0,    94,    40,     0,   102,     0,     0,
       0,     0,     0,     0,    48
};

static const yytype_int16 yycheck[] =
{
      55,    75,   111,    74,    75,    19,    80,    81,     0,    86,
      84,    11,    27,     4,     3,    92,    93,    94,    32,     8,
       9,    95,    96,    97,    98,    25,    26,    82,    17,    35,
      19,    46,   141,   107,   108,   106,   145,     6,    19,     8,
      15,   112,   113,     3,    21,    20,    23,    36,     8,     9,
      13,    26,    21,     8,     9,     3,   111,    17,    33,    19,
     137,     3,    25,    26,    19,   139,   143,    42,    19,    17,
      30,    19,     6,    48,    19,    17,    36,    19,    20,     3,
       8,     9,    30,    22,    25,    26,   141,    36,    36,    19,
     145,    22,    33,    17,    36,    19,    10,    22,    12,    36,
      14,    15,    16,    28,    29,    19,    22,    27,    28,    29,
      28,    29,    36,    33,    33,    33,    28,    29,    28,    29,
      21,    33,     7,    33,     5,     6,    33,     8,     9,    27,
      28,    29,    28,    29,    22,    35,    12,    32,    24,    36,
      19,    19,    36,    36,    34,    34,    19,    19,    -1,    36,
      33,    33,    22,    33,    31,    29,    31,    22,    22,    22,
      21,    18,    33,    -1,    26,    33,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    68,     0,    39,     4,    40,    35,     5,     8,
       9,    44,    51,    69,    19,    49,    50,    51,    19,     6,
      21,    23,    32,    50,    22,    19,    36,    45,    50,    19,
      51,    19,    22,    36,    42,    43,    50,    46,    70,    22,
      42,    33,    21,     7,    48,    33,    41,    50,    49,    47,
      22,    46,    35,    52,    32,    61,    10,    14,    15,    16,
      19,    46,    53,    54,    55,    56,    57,    58,    59,    64,
      71,     3,    17,    19,    30,    36,    60,    63,    64,    65,
      36,    36,    36,    34,    24,    34,    12,    19,    60,    51,
      60,    63,    11,    25,    26,    27,    28,    29,    36,    63,
      20,    63,    58,    19,    63,    19,    61,    36,    33,    33,
      33,    61,    61,    61,    63,    63,    63,    63,    33,    33,
      33,    33,    31,    22,    31,    60,    63,    66,    67,    63,
      53,    60,    60,    22,    22,    22,    22,    13,    33,    21,
      62,    61,    63,    18,    53,    61,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    41,    40,    40,    40,    42,
      42,    43,    43,    45,    44,    44,    47,    46,    48,    48,
      49,    49,    50,    50,    50,    51,    51,    52,    52,    53,
      53,    53,    53,    53,    53,    54,    55,    55,    56,    57,
      58,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      61,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    66,    66,    67,    67,    68,    69,    70,
      71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     7,     0,     0,     8,     8,     0,     1,
       0,     3,     1,     0,     4,     0,     0,     6,     2,     0,
       3,     2,     3,     3,     3,     1,     1,     3,     0,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     5,     4,
       1,     1,     9,     6,     7,     4,     4,     3,     2,     3,
       0,     0,     3,     3,     3,     4,     1,     1,     1,     1,
       4,     4,     5,     1,     0,     1,     3,     0,     0,     0,
       0
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
#line 37 "parser.ypp" /* yacc.c:1646  */
    {
		  emit("HALT");
		  cout << "<\\PROGRAM>" << endl;
		}
#line 1344 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "parser.ypp" /* yacc.c:1646  */
    {
		  addStructToSymbolTable((yyvsp[-1]).tokenValue, (yyvsp[-3]).declarationList);
		}
#line 1352 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "parser.ypp" /* yacc.c:1646  */
    { cout << "TDEFS to epsilon" << endl; }
#line 1358 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 51 "parser.ypp" /* yacc.c:1646  */
    {
		  currFunction = new Function((yyvsp[-3]).tokenValue, (yyvsp[-1]).argsList);
		  currBlock = currFunction;
		}
#line 1367 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 54 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<FDEFS 1>" << endl;
		  cout << "\t" << (yyvsp[-5]).tokenValue << endl;
		  
		  currFunction->insertSymbolTable((yyvsp[-1]).declarationList);
		  funcSymbols.insert(std::pair<string, Function>((yyvsp[-5]).tokenValue, *currFunction));

		  backpatch((yyvsp[0]).nextList, nextquad());
		  
		  cout << "<\\FDEFS 1>" << endl;
		}
#line 1383 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 66 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<FDEFS 2>" << endl;
		  Function* func = new Function((yyvsp[-4]).tokenValue, (yyvsp[-2]).argsList);
		  funcSymbols.insert(std::pair<string, Function>((yyvsp[-4]).tokenValue, *func));
		  cout << "<\\FDEFS 2>" << endl;
		}
#line 1394 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "parser.ypp" /* yacc.c:1646  */
    { cout << "FDEFS to epsilon" << endl;}
#line 1400 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval).argsList = (yyvsp[0]).argsList;
		}
#line 1408 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 80 "parser.ypp" /* yacc.c:1646  */
    {}
#line 1414 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 83 "parser.ypp" /* yacc.c:1646  */
    {
		  createArgumentsFromDCL(&(yyvsp[0]), &(yyvsp[-2]));
		  (yyval).argsList = (yyvsp[-2]).argsList;
		}
#line 1423 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 88 "parser.ypp" /* yacc.c:1646  */
    {
		  createArgumentsFromDCL(&(yyvsp[0]), &(yyval));
		}
#line 1431 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 93 "parser.ypp" /* yacc.c:1646  */
    {
		  //cout << "<MAIN_FUNCTION>" <<endl;
		  currFunction = new Function("main");
		  currBlock = currFunction;
		}
#line 1441 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "parser.ypp" /* yacc.c:1646  */
    {
		  funcSymbols.insert(std::pair<string, Function>("main", *currFunction));
		  backpatch((yyvsp[0]).nextList, nextquad());
		  cout << "<\\MAIN_FUNCTION>" <<endl;
		}
#line 1451 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 103 "parser.ypp" /* yacc.c:1646  */
    {cout << "MAIN_FUNCTION to epsilon" << endl;}
#line 1457 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 106 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval).declarationList = (yyvsp[0]).declarationList;
		  currFunction->insertSymbolTable((yyvsp[0]).declarationList);
		}
#line 1466 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 109 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval).nextList = (yyvsp[-1]).nextList;
		  (yyvsp[-1]).declarationList = (yyvsp[-4]).declarationList;
		  cout << "<\\BLK>" << endl;
		}
#line 1476 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 116 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DECLARATIONS>" << endl;
		  // add declerations to current block
		  currBlock->insertSymbolTable((yyvsp[0]).declarationList);
		  (yyval).declarationList = (yyvsp[0]).declarationList;
		  cout << "<\\DECLARATIONS>" << endl;
		}
#line 1488 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 124 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "DECLARATIONS to epsilon" << endl;
		}
#line 1496 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 129 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DECLARELIST 1>" << endl;
		  cout << "\t" << (yyvsp[-1]).dcl_type << endl;
		  createVariablesFromDCL(&(yyvsp[-1]), &(yyvsp[-2]));
		  (yyval).declarationList = (yyvsp[-2]).declarationList;
		  cout << "<\\DECLARELIST 1>" << endl;
		}
#line 1508 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 137 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DECLARELIST 2>" << endl;
		  cout << "\t" << (yyvsp[-1]).dcl_type << endl;
		  createVariablesFromDCL(&(yyvsp[-1]), &(yyval));
		  cout << "<\\DECLARELIST 2>" << endl;
		}
#line 1519 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DCL 1>" << endl;
		  cout << "\tvariable "+ (yyvsp[-2]).tokenValue +" of type "+ (yyvsp[0]).tokenValue +" declared" << endl;
		  (yyval).dcl_type = (yyvsp[0]).tokenValue;
		  ((yyval).dcl_ids).push_front((yyvsp[-2]).tokenValue);
		  cout << "<\\DCL 1>" << endl;
		}
#line 1531 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 153 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DCL 2>" << endl;
		  if(validateStructName((yyvsp[0]).tokenValue) == false){
		    semanticError("illegal type name");
		  }
		  (yyval).dcl_type = (yyvsp[0]).tokenValue;
		  (yyval).dcl_ids.push_front((yyvsp[-2]).tokenValue);
		  //The 2nd ID might be the name of a custom typedef
		  cout << "<\\DCL 2>" << endl;
		}
#line 1546 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 164 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<DCL 3>" << endl;
		  ((yyvsp[0]).dcl_ids).push_front((yyvsp[-2]).tokenValue);
		  ((yyval).dcl_ids).merge((yyvsp[0]).dcl_ids);
		  (yyval).dcl_type = (yyvsp[0]).dcl_type;
		  cout << "<\\DCL 3>" << endl;
		}
#line 1558 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 173 "parser.ypp" /* yacc.c:1646  */
    { 
		}
#line 1565 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 176 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1572 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 180 "parser.ypp" /* yacc.c:1646  */
    {  
		  (yyval).nextList = (yyvsp[0]).nextList;
		  backpatch((yyvsp[-2]).nextList, (yyvsp[-1]).quad);
		  cout << "<\\LIST>" << endl;
		}
#line 1582 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 186 "parser.ypp" /* yacc.c:1646  */
    {}
#line 1588 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 189 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval).nextList.push_back(nextquad());
		}
#line 1596 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 193 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<STMT 2>" << endl;
		  (yyval).nextList = (yyvsp[0]).nextList;
		  cout << "<\\STMT 2>" << endl;
		}
#line 1606 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 199 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval).nextList.push_back(nextquad());
		}
#line 1614 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 203 "parser.ypp" /* yacc.c:1646  */
    {
		  (yyval).nextList.push_back(nextquad());
		}
#line 1622 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 207 "parser.ypp" /* yacc.c:1646  */
    {
		  //TODO???
		}
#line 1630 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 211 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<STMT 6>" << endl;
		  (yyval).nextList = (yyvsp[0]).nextList;
		  cout << "<\\STMT 6>" << endl;
		}
#line 1640 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 218 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1647 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 222 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1654 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 225 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1661 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 229 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1668 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 233 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<ASSN>" << endl;
		  // get LVAL's variable and check it was declared
		  Variable* lvalVar = currBlock->getScopeVariable((yyvsp[-3]).variableName);
		  if(lvalVar == NULL) {
		    cout << "currFunction: " << currFunction->name << endl;
		    printState();
		    semanticError((yyvsp[-3]).tokenValue + " was not declared in this scope");
		  }

		  if(lvalVar->getType() != (yyvsp[-1]).type) {
		    semanticError("type mismatch on assignment operation: trying to assign " + (yyvsp[-1]).type + " to " + lvalVar->getType());
		  }
		  
		  if(isPrimitive((yyvsp[-1]).type)) {
		    // EXP->place is the name of the register holding the actual value
		    string STOR = "";
		    if(isUsedIntReg((yyvsp[-1]).place)) {
		      STOR = "STORI";
		    } else if(isUsedRealReg((yyvsp[-1]).place)) {
		      STOR = "STORR";
		    } else {
		      assert(0);
		    }
		    emit(STOR + " " + (yyvsp[-1]).place + " I1 " + to_string(lvalVar->getOffset()));
		  } else { // EXP is defstruct
		    //EXP->place is offset from FP
		    copyStruct(lvalVar, (yyvsp[-1]).place);
		  }

		  cout << "<\\ASSN>" << endl;
		}
#line 1705 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 267 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<LVAL 1>" << endl;
		  (yyval).variableName = (yyvsp[0]).tokenValue;
		  cout << "<\\LVAL 1>" << endl;
		}
#line 1715 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 273 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<LVAL 2>" << endl;
		  (yyval).variableName = (yyvsp[0]).tokenValue;
		  cout << "<\\LVAL 2>" << endl;
		}
#line 1725 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 280 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<CNTRL 1>" << endl;
		  cout << yylineno << endl;
		  backpatch((yyvsp[-7]).trueList, (yyvsp[-5]).quad);
		  backpatch((yyvsp[-7]).falseList, (yyvsp[-1]).quad);
		  (yyval).nextList.insert((yyval).nextList.end(), (yyvsp[-4]).nextList.begin(), (yyvsp[-4]).nextList.end());
		  (yyval).nextList.insert((yyval).nextList.end(), (yyvsp[-3]).nextList.begin(), (yyvsp[-3]).nextList.end());
		  (yyval).nextList.insert((yyval).nextList.end(), (yyvsp[0]).nextList.begin(), (yyvsp[0]).nextList.end());
		  cout << "<\\CNTRL 1>" << endl;
		}
#line 1740 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 291 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<CNTRL 2>" << endl;
		  backpatch((yyvsp[-4]).trueList, (yyvsp[-2]).quad);
		  (yyval).nextList.insert((yyval).nextList.end(), (yyvsp[-4]).falseList.begin(), (yyvsp[-4]).falseList.end());
		  (yyval).nextList.insert((yyval).nextList.end(), (yyvsp[-1]).nextList.begin(), (yyvsp[-1]).nextList.end());
		  cout << "<\\CNTRL 2>" << endl;
		}
#line 1752 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 299 "parser.ypp" /* yacc.c:1646  */
    {
		  //cout << "<CNTRL 3>" << endl;
		  backpatch((yyvsp[-3]).trueList, (yyvsp[-1]).quad);
		  backpatch((yyvsp[-1]).nextList, (yyvsp[-4]).quad);
		  (yyval).nextList.insert((yyval).nextList.end(), (yyvsp[-4]).falseList.begin(), (yyvsp[-4]).falseList.end());
		  emit((string)"UJUMP " + INT2STR((yyvsp[-5]).quad));
		  cout << "<\\CNTRL 3>" << endl;
		}
#line 1765 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 309 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 1>" << endl;
		  backpatch((yyvsp[-3]).falseList, (yyvsp[-1]).quad);
		  (yyval).trueList.insert((yyval).trueList.end(), (yyvsp[-3]).trueList.begin(), (yyvsp[-3]).trueList.end());
		  (yyval).trueList.insert((yyval).trueList.end(), (yyvsp[0]).trueList.begin(), (yyvsp[0]).trueList.end());
		  (yyval).falseList.insert((yyval).falseList.end(), (yyvsp[0]).falseList.begin(), (yyvsp[0]).falseList.end());
		  cout << "<\\BEXP 1>" << endl;
		}
#line 1778 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 318 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 2>" << endl;
		  backpatch((yyvsp[-3]).trueList, (yyvsp[-1]).quad);
		  (yyval).falseList.insert((yyval).falseList.end(), (yyvsp[-3]).falseList.begin(), (yyvsp[-3]).falseList.end());
		  (yyval).falseList.insert((yyval).falseList.end(), (yyvsp[0]).falseList.begin(), (yyvsp[0]).falseList.end());
		  (yyval).trueList.insert((yyval).trueList.end(), (yyvsp[0]).trueList.begin(), (yyvsp[0]).trueList.end());
		  cout << "<\\BEXP 2>" << endl;
		}
#line 1791 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 327 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 3>" << endl;
		  string tempReg = getIntReg();
		  string SLET = "";
		  string SGRT = "";
		  string SEQU = "";
		  string SNEQ = "";
		  string opCommand = "";
		  
		  if(isIntegerVariable((yyvsp[-2]).place) && isIntegerVariable((yyvsp[0]).place)) {
		    SLET = "SLETI";
		    SGRT = "SGRTI";
		    SEQU = "SEQUI";
		    SNEQ = "SNEQI";
		  } else if(isRealVariable((yyvsp[-2]).place) && isRealVariable((yyvsp[0]).place)) {
		    SLET = "SLETR";
		    SGRT = "SGRTR";
		    SEQU = "SEQUR";
		    SNEQ = "SNEQR";		    
		  } else {
		    semanticError("type missmatch on relop \'" + (yyvsp[-1]).tokenValue + "\'");
		  }
		  
		  if((yyvsp[-1]).tokenValue == "<" || (yyvsp[-1]).tokenValue == "<=") {
		    opCommand = SLET;
		  } else if((yyvsp[-1]).tokenValue == ">" || (yyvsp[-1]).tokenValue == ">=") {
		    opCommand = SGRT;
		  } else if((yyvsp[-1]).tokenValue == "==") {
		    opCommand = SEQU;
		  } else if((yyvsp[-1]).tokenValue == "<>") {
		    opCommand = SNEQ;
		  } else {
		    semanticError("can't recognize RELOP " + (yyvsp[-1]).tokenValue);
		  }
		  
		  bool equalsFlag = false;
		  if((yyvsp[-1]).tokenValue == "<=" || (yyvsp[-1]).tokenValue == ">=") {
		    equalsFlag = true;
		  }
		  
		  emit(opCommand + " " + tempReg + " " + (yyvsp[-2]).place + " " + (yyvsp[0]).place);
		  (yyval).trueList.push_back(nextquad());
		  emit("BNEQZ " + tempReg + " ___");
		  if(equalsFlag) {
		    // if tempReg == 0 we should continue down the flow (no jump needed)
		    emit(SEQU + " " + tempReg + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
		    (yyval).trueList.push_back(nextquad());
		    emit("BNEQZ " + tempReg + " ___");
		  }
		  (yyval).falseList.push_back(nextquad());
		  emit((string)"UJUMP " + "___");
		  cout << "<\\BEXP 3>" << endl;
		}
#line 1849 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 382 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 4>" << endl;
		  (yyval).trueList.swap((yyval).falseList);
		  cout << "<\\BEXP 4>" << endl;
		}
#line 1859 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 388 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<BEXP 5>" << endl;
		  (yyval).trueList = (yyvsp[-1]).trueList;
		  (yyval).falseList = (yyvsp[-1]).falseList;
		  cout << "<\\BEXP 5>" << endl;
		}
#line 1870 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 396 "parser.ypp" /* yacc.c:1646  */
    {
                  (yyval).quad = nextquad();
				  cout << "<M>" << "quad=" << (yyval).quad << endl;
                }
#line 1879 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 402 "parser.ypp" /* yacc.c:1646  */
    {
  		  cout << "<N>" << endl;
          (yyval).nextList.push_back(nextquad());
		  emit((string)"UJUMP" + " ___");
                }
#line 1889 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 410 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 1>" << endl;
		  if(!isPrimitive((yyvsp[-2]).type) || !isPrimitive((yyvsp[0]).type)) {
		    semanticError("can not perform add operation on defstruct");
		  }

		  // EXP->place is always in register!
		  if(isUsedIntReg((yyvsp[-2]).place) && isUsedIntReg((yyvsp[0]).place)) {
		    (yyval).place = getIntReg();
		    emit("ADD2I " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
		  } else if(isUsedRealReg((yyvsp[-2]).place) && isUsedRealReg((yyvsp[0]).place)) {
		    (yyval).place = getRealReg();
		    emit("ADD2R " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
		  } else {
		    semanticError("type missmatch within add operation");
		  }
		  cout << "<\\EXP 1>" << endl;
		}
#line 1912 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 429 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 2>" << endl;
		  if(!isPrimitive((yyvsp[-2]).type) || !isPrimitive((yyvsp[0]).type)) {
		    semanticError("can not perform add operation on defstruct");
		  }

		  if(isUsedIntReg((yyvsp[-2]).place) && isUsedIntReg((yyvsp[0]).place)) {
		    (yyval).place = getIntReg();
		    emit("MULTI " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
		  } else if(isUsedRealReg((yyvsp[-2]).place) && isUsedRealReg((yyvsp[0]).place)) {
		    (yyval).place = getRealReg();
		    emit("MULTR " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
		  } else {
		    semanticError("type missmatch within mul operation");
		  }
		  cout << "<\\EXP 2>" << endl;
		}
#line 1934 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 447 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 3>" << endl;
		  (yyval).place = (yyvsp[-1]).place;
		  (yyval).type = (yyvsp[-1]).type;
		  cout << "<\\EXP 3>" << endl;
		}
#line 1945 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 454 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 4>" << endl;
		  if((yyvsp[-2]).tokenValue == "Integer") {
		    if(isUsedIntReg((yyvsp[0]).place)) {
		      (yyval).place = (yyvsp[0]).place;
		    } else if(isUsedRealReg((yyvsp[0]).place)) {
		      (yyval).place = getIntReg();
		      emit("CRTOI " + (yyval).place + " " + (yyvsp[0]).place);
		    }
		  } else if((yyvsp[-2]).tokenValue == "Real") {
		    if(isUsedRealReg((yyvsp[0]).place)) {
		      (yyval).place = (yyvsp[0]).place;
		    } else if(isUsedIntReg((yyvsp[0]).place)) {
		      (yyval).place = getRealReg();
		      emit("CITOR " + (yyval).place + " " + (yyvsp[0]).place);
		    }
		  } else {
		    semanticError("undefined explicit cast");
		  }
		  cout << "<\\EXP 4>" << endl;
		}
#line 1971 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 476 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 5>" << endl;
		  // make sure ID is a variable in current scope
		  Variable* var = currBlock->getScopeVariable((yyvsp[0]).tokenValue);
		  if(var == NULL) {
		    cout << "currFunction: " << currFunction->name << endl;
		    printState();
		    semanticError((yyvsp[0]).tokenValue + " was not declared in this scope");
		  }

		  if(isPrimitive(var)) {
		    // EXP's register will hold the variable's value!
		    string LOAD = "";
		    if(var->getType() == "integer") {
		      LOAD = "LOADI";
		      (yyval).place = getIntReg();
		    }
		    else if(var->getType() == "real") {
		      LOAD = "LOADR";
		      (yyval).place = getRealReg();
		    }
		    else {
		      assert(0);
		    }
		    emit(LOAD + " " + (yyval).place + " I1 " + to_string(var->getOffset()));
		    (yyval).type = var->getType();
		  }
		  else { // var is struct
		    // EXP's register will hold the defstruct's offset from FP!
		    emit("ADD2I " + (yyval).place + " 0 " + to_string(var->getOffset()));
		    (yyval).type = var->getType();
		  }
		  cout << "<\\EXP 5>" << endl;
		}
#line 2010 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 511 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 6>" << endl;
		  
		  cout << "<\\EXP 6>" << endl;
		}
#line 2020 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 517 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 7>" << endl;
		  if(isInteger((yyvsp[0]).tokenValue)) {
		    (yyval).type = "integer";
		    (yyval).place = getIntReg();
		    emit("COPYI " + (yyval).place + " " + (yyvsp[0]).tokenValue);
		  }
		  else {
		    (yyval).type = "real";
		    (yyval).place = getRealReg();
		    emit("COPYR " + (yyval).place + " " + (yyvsp[0]).tokenValue);
		  }
		  cout << "<\\EXP 7>" << endl;
		}
#line 2039 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 532 "parser.ypp" /* yacc.c:1646  */
    {
		  cout << "<EXP 8>" << endl;
		  (yyval).place = (yyvsp[0]).place;
		  cout << "<\\EXP 8>" << endl;
		}
#line 2049 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 539 "parser.ypp" /* yacc.c:1646  */
    {
		  // check if $1 is a variable of type defstruct
		  Variable* var = currBlock->getScopeVariable((yyvsp[-3]).tokenValue);
		  if(!var) {
		    semanticError("");
		  }
		  if(var->getType() == "defstruct") {
		    
		    Variable* field;
		    // get the value if var[field] from memory
		  } else {
		    semanticError((yyvsp[-3]).tokenValue + " of type " + var->getType() + " is not subscriptable");
		  }
		}
#line 2068 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 554 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2075 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 558 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2082 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 562 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2089 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 566 "parser.ypp" /* yacc.c:1646  */
    {}
#line 2095 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 569 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2102 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 572 "parser.ypp" /* yacc.c:1646  */
    {
		}
#line 2109 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 576 "parser.ypp" /* yacc.c:1646  */
    {cout << "<PROGRAM>" << endl;}
#line 2115 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 577 "parser.ypp" /* yacc.c:1646  */
    {cout << "<MAIN_FUNCTION>" << endl;}
#line 2121 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 578 "parser.ypp" /* yacc.c:1646  */
    {cout << "<BLK>" << endl;}
#line 2127 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 579 "parser.ypp" /* yacc.c:1646  */
    {cout << "<CNTRL 3>" << endl;}
#line 2133 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2137 "parser.tab.cpp" /* yacc.c:1646  */
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
#line 581 "parser.ypp" /* yacc.c:1906  */


void yyerror (char const *err){
   printf("Syntax error: '%s' in line number %d\n", yytext, yylineno);
   exit(1);
}

void semanticError(string s) {
  printf("Semantic error: '%s' in line number %d\n", s.c_str(), yylineno);
  exit(1);
}

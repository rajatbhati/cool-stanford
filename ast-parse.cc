
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         ast_yyparse
#define yylex           ast_yylex
#define yyerror         ast_yyerror
#define yylval          ast_yylval
#define yychar          ast_yychar
#define yydebug         ast_yydebug
#define yynerrs         ast_yynerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 6 "ast.y"

#include "cool-io.h"
#include "cool-tree.h"
#include "stringtab.h"
#include "utilities.h"

#ifdef yylineno
#undef yylineno
#endif //yylineno

void ast_yyerror(char *);
extern int curr_lineno;
extern int yylex();           /* the entry point to the lexer  */
Program ast_root;             /* the result of the parse  */
Classes parse_results;        /* for use in parsing multiple files */
int omerrs = 0;               /* number of errors in lexing and parsing */


/* Line 189 of yacc.c  */
#line 100 "ast.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     CLASS = 259,
     METHOD = 260,
     ATTR = 261,
     FORMAL = 262,
     BRANCH = 263,
     ASSIGN = 264,
     STATIC_DISPATCH = 265,
     DISPATCH = 266,
     COND = 267,
     LOOP = 268,
     TYPCASE = 269,
     BLOCK = 270,
     LET = 271,
     PLUS = 272,
     SUB = 273,
     MUL = 274,
     DIVIDE = 275,
     NEG = 276,
     LT = 277,
     EQ = 278,
     LEQ = 279,
     COMP = 280,
     INT = 281,
     STR = 282,
     BOOL = 283,
     NEW = 284,
     ISVOID = 285,
     NO_EXPR = 286,
     OBJECT = 287,
     NO_TYPE = 288,
     STR_CONST = 289,
     INT_CONST = 290,
     ID = 291,
     LINENO = 292
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define CLASS 259
#define METHOD 260
#define ATTR 261
#define FORMAL 262
#define BRANCH 263
#define ASSIGN 264
#define STATIC_DISPATCH 265
#define DISPATCH 266
#define COND 267
#define LOOP 268
#define TYPCASE 269
#define BLOCK 270
#define LET 271
#define PLUS 272
#define SUB 273
#define MUL 274
#define DIVIDE 275
#define NEG 276
#define LT 277
#define EQ 278
#define LEQ 279
#define COMP 280
#define INT 281
#define STR 282
#define BOOL 283
#define NEW 284
#define ISVOID 285
#define NO_EXPR 286
#define OBJECT 287
#define NO_TYPE 288
#define STR_CONST 289
#define INT_CONST 290
#define ID 291
#define LINENO 292




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "ast.y"

  int lineno;
  Boolean boolean;
  Symbol symbol;
  Program program;
  Class_ class_;
  Classes classes;
  Feature feature;
  Features features;
  Formal formal;
  Formals formals;
  Case case_;
  Cases cases;
  Expression expression;
  Expressions expressions;



/* Line 214 of yacc.c  */
#line 229 "ast.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */

#line 241 "ast.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
        && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)     \
      do             \
   {              \
     YYSIZE_T yyi;            \
     for (yyi = 0; yyi < (Count); yyi++)  \
       (To)[yyi] = (From)[yyi];     \
   }              \
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)            \
    do                           \
      {                          \
   YYSIZE_T yynewbytes;                \
   YYCOPY (&yyptr->Stack_alloc, Stack, yysize);       \
   Stack = &yyptr->Stack_alloc;              \
   yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
   yyptr += yynewbytes / sizeof (*yyptr);          \
      }                          \
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  121

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)                  \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,     8,    10,    13,    22,    23,    25,
      27,    30,    37,    43,    44,    46,    48,    51,    56,    60,
      64,    69,    76,    82,    88,    93,    97,   104,   109,   113,
     117,   122,   127,   132,   137,   141,   146,   151,   156,   160,
     164,   168,   172,   176,   179,   182,   186,   188,   191,   193,
     196
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    37,     3,    43,    -1,    -1,    44,    -1,
      43,    44,    -1,    37,     4,    36,    36,    34,    38,    45,
      39,    -1,    -1,    46,    -1,    47,    -1,    46,    47,    -1,
      37,     5,    36,    48,    36,    51,    -1,    37,     6,    36,
      36,    51,    -1,    -1,    49,    -1,    50,    -1,    49,    50,
      -1,    37,     7,    36,    36,    -1,    52,    40,    36,    -1,
      52,    40,    33,    -1,    37,     9,    36,    51,    -1,    37,
      10,    51,    36,    36,    53,    -1,    37,    11,    51,    36,
      53,    -1,    37,    12,    51,    51,    51,    -1,    37,    13,
      51,    51,    -1,    37,    15,    54,    -1,    37,    16,    36,
      36,    51,    51,    -1,    37,    14,    51,    55,    -1,    37,
      29,    36,    -1,    37,    30,    51,    -1,    37,    17,    51,
      51,    -1,    37,    18,    51,    51,    -1,    37,    19,    51,
      51,    -1,    37,    20,    51,    51,    -1,    37,    21,    51,
      -1,    37,    22,    51,    51,    -1,    37,    23,    51,    51,
      -1,    37,    24,    51,    51,    -1,    37,    25,    51,    -1,
      37,    26,    35,    -1,    37,    27,    34,    -1,    37,    28,
      35,    -1,    37,    32,    36,    -1,    37,    31,    -1,    38,
      39,    -1,    38,    54,    39,    -1,    51,    -1,    54,    51,
      -1,    56,    -1,    55,    56,    -1,    37,     8,    36,    36,
      51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    75,    79,    82,    87,    94,    95,   100,
     102,   106,   108,   113,   114,   119,   121,   125,   129,   133,
     136,   139,   142,   145,   148,   151,   154,   157,   160,   163,
     166,   169,   172,   175,   178,   181,   184,   187,   190,   193,
     196,   199,   207,   210,   214,   216,   221,   223,   228,   230,
     235
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "CLASS", "METHOD", "ATTR",
  "FORMAL", "BRANCH", "ASSIGN", "STATIC_DISPATCH", "DISPATCH", "COND",
  "LOOP", "TYPCASE", "BLOCK", "LET", "PLUS", "SUB", "MUL", "DIVIDE", "NEG",
  "LT", "EQ", "LEQ", "COMP", "INT", "STR", "BOOL", "NEW", "ISVOID",
  "NO_EXPR", "OBJECT", "NO_TYPE", "STR_CONST", "INT_CONST", "ID", "LINENO",
  "'('", "')'", "':'", "$accept", "program", "class_list", "class",
  "optional_feature_list", "feature_list", "feature", "formals",
  "formal_list", "formal", "expr", "expr_aux", "actuals", "expr_list",
  "case_list", "simple_case", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    40,    41,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    49,    49,    50,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    54,    54,    55,    55,
      56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     2,     8,     0,     1,     1,
       2,     6,     5,     0,     1,     1,     2,     4,     3,     3,
       4,     6,     5,     5,     4,     3,     6,     4,     3,     3,
       4,     4,     4,     4,     3,     4,     4,     4,     3,     3,
       3,     3,     3,     2,     2,     3,     1,     2,     1,     2,
       5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     1,     0,     2,     4,     0,     5,
       0,     0,     0,     7,     0,     0,     8,     9,     0,     0,
       6,    10,    13,     0,     0,     0,    14,    15,     0,     0,
       0,    16,     0,    12,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,    17,     0,     0,     0,     0,     0,     0,    46,
      25,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      38,    39,    40,    41,    28,    29,    42,    19,    18,    20,
       0,     0,     0,    24,     0,    27,    48,    47,     0,    30,
      31,    32,    33,    35,    36,    37,     0,     0,    22,    23,
       0,    49,     0,    21,    44,     0,     0,    26,    45,     0,
      50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     6,     7,    15,    16,    17,    25,    26,    27,
      69,    34,   108,    70,    95,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int8 yypact[] =
{
     -30,     6,    26,   -10,   -35,    24,   -10,   -35,    -7,   -35,
      -5,    -2,    -4,    -1,    10,    -6,    -1,   -35,     1,     4,
     -35,   -35,    11,     5,    36,    16,    11,   -35,    17,    19,
      17,   -35,    83,   -35,    13,    20,   -35,    21,    17,    17,
      17,    17,    17,    17,    22,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    25,    27,    28,    23,    17,   -35,
      29,   -32,   -35,    17,    30,    31,    17,    17,    32,   -35,
      17,    35,    17,    17,    17,    17,   -35,    17,    17,    17,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
      37,    34,    17,   -35,    54,    32,   -35,   -35,    17,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,    34,   -34,   -35,   -35,
      38,   -35,    17,   -35,   -35,   -31,    39,   -35,   -35,    17,
     -35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,   -35,    62,   -35,   -35,    60,   -35,   -35,    51,
     -28,   -35,   -27,   -29,   -35,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      33,    87,    36,    32,    88,   114,    32,     1,   118,     3,
      64,    65,    66,    67,    68,    18,    19,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     4,     5,     8,    10,
      85,    11,    12,    20,    13,    89,    14,    22,    92,    93,
      23,    28,    97,    29,    99,   100,   101,   102,    24,   103,
     104,   105,    30,    61,    32,    35,    62,    63,    71,    84,
      81,    82,   110,    83,   109,    86,    90,    91,     9,    94,
     112,    98,   107,   106,   116,   119,    21,    31,   115,   113,
     111,     0,     0,     0,   117,     0,     0,    97,     0,     0,
       0,   120,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

static const yytype_int8 yycheck[] =
{
      28,    33,    30,    37,    36,    39,    37,    37,    39,     3,
      38,    39,    40,    41,    42,     5,     6,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,    37,     4,    36,
      58,    36,    34,    39,    38,    63,    37,    36,    66,    67,
      36,    36,    70,     7,    72,    73,    74,    75,    37,    77,
      78,    79,    36,    40,    37,    36,    36,    36,    36,    36,
      35,    34,     8,    35,    92,    36,    36,    36,     6,    37,
      98,    36,    38,    36,    36,    36,    16,    26,   107,   106,
      95,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,   119,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    42,     3,     0,    37,    43,    44,     4,    44,
      36,    36,    34,    38,    37,    45,    46,    47,     5,     6,
      39,    47,    36,    36,    37,    48,    49,    50,    36,     7,
      36,    50,    37,    51,    52,    36,    51,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    40,    36,    36,    51,    51,    51,    51,    51,    51,
      54,    36,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    35,    34,    35,    36,    51,    36,    33,    36,    51,
      36,    36,    51,    51,    37,    55,    56,    51,    36,    51,
      51,    51,    51,    51,    51,    51,    36,    38,    53,    51,
       8,    56,    51,    53,    39,    54,    36,    51,    39,    36,
      51
};

#define yyerrok      (yyerrstatus = 0)
#define yyclearin (yychar = YYEMPTY)
#define YYEMPTY      (-2)
#define YYEOF     0

#define YYACCEPT  goto yyacceptlab
#define YYABORT      goto yyabortlab
#define YYERROR      goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL    goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)               \
do                      \
  if (yychar == YYEMPTY && yylen == 1)          \
    {                      \
      yychar = (Token);                \
      yylval = (Value);                \
      yytoken = YYTRANSLATE (yychar);           \
      YYPOPSTACK (1);                  \
      goto yybackup;                \
    }                      \
  else                        \
    {                      \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                   \
    }                      \
while (YYID (0))


#define YYTERROR  1
#define YYERRCODE 256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)           \
    do                           \
      if (YYID (N))                                                    \
   {                       \
     (Current).first_line   = YYRHSLOC (Rhs, 1).first_line; \
     (Current).first_column = YYRHSLOC (Rhs, 1).first_column;  \
     (Current).last_line    = YYRHSLOC (Rhs, N).last_line;     \
     (Current).last_column  = YYRHSLOC (Rhs, N).last_column;   \
   }                       \
      else                       \
   {                       \
     (Current).first_line   = (Current).last_line   =    \
       YYRHSLOC (Rhs, 0).last_line;          \
     (Current).first_column = (Current).last_column =    \
       YYRHSLOC (Rhs, 0).last_column;           \
   }                       \
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)       \
     fprintf (File, "%d.%d-%d.%d",        \
         (Loc).first_line, (Loc).first_column,  \
         (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)         \
do {                 \
  if (yydebug)             \
    YYFPRINTF Args;           \
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)           \
do {                            \
  if (yydebug)                        \
    {                           \
      YYFPRINTF (stderr, "%s ", Title);                 \
      yy_symbol_print (stderr,                    \
        Type, Value); \
      YYFPRINTF (stderr, "\n");                   \
    }                           \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
   break;
    }
}


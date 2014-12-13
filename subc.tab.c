
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



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "subc.y"
                 
/*                 
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"

int    yylex ();
int    yyerror (char* s);
void    REDUCE(char* s);
extern struct decl* inttype;
extern struct decl* chartype;
extern struct decl* voidtype;
extern struct id* returnid;



/* Line 189 of yacc.c  */
#line 92 "subc.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     LOGICAL_OR = 258,
     LOGICAL_AND = 259,
     EQUOP = 260,
     RELOP = 261,
     DECOP = 262,
     INCOP = 263,
     STRUCTOP = 264,
     IF = 265,
     ELSE = 266,
     VOID = 267,
     STRUCT = 268,
     RETURN = 269,
     WHILE = 270,
     FOR = 271,
     BREAK = 272,
     CONTINUE = 273,
     ID = 274,
     CHAR_CONST = 275,
     STRING = 276,
     EQUOPG = 277,
     INTEGER_CONST = 278,
     TYPE = 279
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "subc.y"

        int             intVal;
        char            *stringVal;
        struct id       *idptr;
        struct decl     *declptr;
        struct ste      *steptr;



/* Line 214 of yacc.c  */
#line 162 "subc.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 174 "subc.tab.c"

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
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNRULES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    13,     2,     2,     2,     2,     7,     2,
      19,    18,    12,    10,     3,    11,    20,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    16,     2,    17,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
       8,     9,    14,    15,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    14,    22,    25,    28,
      31,    33,    35,    37,    38,    45,    48,    55,    63,    71,
      72,    74,    75,    77,    81,    85,    92,    95,    96,   101,
     109,   112,   115,   116,   117,   124,   126,   129,   130,   133,
     135,   138,   142,   144,   150,   158,   164,   174,   177,   180,
     182,   183,   185,   189,   191,   193,   197,   199,   201,   205,
     207,   211,   215,   219,   223,   225,   229,   233,   235,   237,
     239,   241,   244,   247,   250,   253,   256,   259,   262,   265,
     270,   274,   278,   283,   287,   289
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    -1,    42,    43,    -1,    -1,    44,
      49,    31,    37,    -1,    44,    49,    31,    16,    61,    17,
      37,    -1,    47,    37,    -1,    44,    37,    -1,    47,    54,
      -1,    36,    -1,    24,    -1,    45,    -1,    -1,    25,    31,
      38,    46,    52,    39,    -1,    25,    31,    -1,    44,    49,
      31,    19,    48,    18,    -1,    44,    49,    31,    19,    48,
      24,    18,    -1,    44,    49,    31,    19,    48,    50,    18,
      -1,    -1,    12,    -1,    -1,    51,    -1,    50,     3,    51,
      -1,    44,    49,    31,    -1,    44,    49,    31,    16,    61,
      17,    -1,    52,    53,    -1,    -1,    44,    49,    31,    37,
      -1,    44,    49,    31,    16,    61,    17,    37,    -1,    44,
      37,    -1,    47,    37,    -1,    -1,    -1,    38,    55,    57,
      58,    56,    39,    -1,    52,    -1,    58,    59,    -1,    -1,
      62,    37,    -1,    54,    -1,    26,    37,    -1,    26,    62,
      37,    -1,    37,    -1,    22,    19,    62,    18,    59,    -1,
      22,    19,    62,    18,    59,    23,    59,    -1,    27,    19,
      62,    18,    59,    -1,    28,    19,    60,    37,    60,    37,
      60,    18,    59,    -1,    29,    37,    -1,    30,    37,    -1,
      62,    -1,    -1,    62,    -1,    68,     4,    62,    -1,    63,
      -1,    64,    -1,    64,     5,    65,    -1,    65,    -1,    66,
      -1,    66,     6,    67,    -1,    67,    -1,    67,     9,    67,
      -1,    67,     8,    67,    -1,    67,    10,    67,    -1,    67,
      11,    67,    -1,    68,    -1,    19,    62,    18,    -1,    19,
      68,    18,    -1,    35,    -1,    32,    -1,    31,    -1,    33,
      -1,    11,    68,    -1,    13,    68,    -1,    68,    15,    -1,
      68,    14,    -1,    15,    68,    -1,    14,    68,    -1,     7,
      68,    -1,    12,    68,    -1,    68,    16,    62,    17,    -1,
      68,    20,    31,    -1,    68,    21,    31,    -1,    68,    19,
      69,    18,    -1,    68,    19,    18,    -1,    62,    -1,    69,
       3,    62,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    60,    63,    67,    75,    83,    87,    90,
      95,   101,   105,   111,   110,   121,   133,   144,   154,   167,
     184,   188,   195,   198,   203,   212,   221,   224,   228,   237,
     245,   248,   253,   257,   252,   265,   269,   272,   276,   279,
     282,   290,   297,   300,   303,   306,   309,   312,   315,   319,
     323,   329,   342,   346,   351,   356,   360,   365,   370,   374,
     379,   383,   387,   391,   395,   400,   404,   408,   412,   416,
     420,   424,   432,   440,   448,   456,   464,   473,   477,   481,
     485,   489,   493,   497,   502,   506
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'", "'!'",
  "DECOP", "INCOP", "'['", "']'", "')'", "'('", "'.'", "STRUCTOP", "IF",
  "ELSE", "VOID", "STRUCT", "RETURN", "WHILE", "FOR", "BREAK", "CONTINUE",
  "ID", "CHAR_CONST", "STRING", "EQUOPG", "INTEGER_CONST", "TYPE", "';'",
  "'{'", "'}'", "$accept", "program", "ext_def_list", "ext_def",
  "type_specifier", "struct_specifier", "$@1", "func_decl",
  "open_func_param_scope", "pointers", "param_list", "param_decl",
  "def_list", "def", "compound_stmt", "$@2", "$@3", "local_defs",
  "stmt_list", "stmt", "expr_e", "const_expr", "expr", "or_expr",
  "or_list", "and_expr", "and_list", "binary", "unary", "args", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,    61,   258,   259,    38,   260,   261,
      43,    45,    42,    33,   262,   263,    91,    93,    41,    40,
      46,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      44,    44,    44,    46,    45,    45,    47,    47,    47,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    53,    53,
      53,    53,    55,    56,    54,    57,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      60,    61,    62,    62,    63,    64,    64,    65,    66,    66,
      67,    67,    67,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     2,
       1,     1,     1,     0,     6,     2,     6,     7,     7,     0,
       1,     0,     1,     3,     3,     6,     2,     0,     4,     7,
       2,     2,     0,     0,     6,     1,     2,     0,     2,     1,
       2,     3,     1,     5,     7,     5,     9,     2,     2,     1,
       0,     1,     3,     1,     1,     3,     1,     1,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       3,     3,     4,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    11,     0,    10,     3,    21,    12,
       0,    15,    20,     8,     0,     7,    32,     9,    13,     0,
      27,    27,     0,    19,     5,    35,    37,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    68,    70,    67,     0,
      51,    53,    54,    56,    57,    59,    64,     0,    21,     0,
      26,    33,    14,    77,    71,    78,    72,    76,    75,     0,
      64,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      73,     0,     0,     0,     0,    16,    11,    21,     0,    22,
      30,     0,    31,     0,     0,     0,     0,     0,     0,    42,
      39,     0,    36,     0,    65,    66,     6,    55,    64,    58,
      61,    60,    62,    63,    52,     0,    83,    84,     0,    80,
      81,    17,     0,     0,    18,     0,     0,    40,     0,     0,
      50,    47,    48,    34,    38,    79,     0,    82,    24,    23,
       0,    28,     0,    41,     0,     0,    49,    85,     0,     0,
       0,     0,    50,     0,     0,    43,    45,     0,    25,    29,
       0,    50,    44,     0,     0,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    48,     9,    21,    49,    47,    14,
      78,    79,    25,    50,    90,    20,    91,    26,    51,    92,
     135,    39,    93,    41,    42,    43,    44,    45,    46,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -128
static const yytype_int16 yypact[] =
{
    -128,    17,    85,  -128,  -128,    -8,  -128,  -128,    -2,  -128,
      27,   -12,  -128,  -128,    14,  -128,  -128,  -128,  -128,    -3,
    -128,  -128,   121,  -128,  -128,    85,  -128,    75,   121,   121,
     121,   121,   121,   121,   121,  -128,  -128,  -128,  -128,    11,
    -128,  -128,    46,  -128,    25,   173,   153,    -4,    -1,    24,
    -128,    41,  -128,    72,    72,    72,    72,    72,    72,    57,
     144,    29,   121,   121,   121,   121,   121,   121,   121,  -128,
    -128,   121,   112,    49,    59,  -128,    77,    84,    15,  -128,
    -128,    81,  -128,    87,    70,    96,   103,   100,   101,  -128,
    -128,   110,  -128,   102,  -128,  -128,  -128,  -128,    72,   173,
      48,   107,  -128,  -128,  -128,   129,  -128,  -128,    26,  -128,
    -128,  -128,   119,    85,  -128,     6,   121,  -128,   124,   121,
     121,  -128,  -128,  -128,  -128,  -128,   121,  -128,   150,  -128,
     121,  -128,   152,  -128,   157,   134,  -128,  -128,   121,   168,
      41,    41,   121,   169,   151,   164,  -128,   154,  -128,  -128,
      41,   121,  -128,   171,    41,  -128
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,  -128,     0,  -128,  -128,   188,  -128,   -47,
    -128,    79,   172,  -128,   184,  -128,  -128,  -128,  -128,     1,
    -127,  -111,   -22,  -128,  -128,   133,  -128,   113,   -25,  -128
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      40,    81,     8,    53,    54,    55,    56,    57,    58,    60,
      12,    12,    59,    22,    75,   147,    23,     3,   113,   139,
      76,     5,   130,    11,   153,    23,    18,   143,    61,   126,
     112,    63,     6,   114,    24,    13,    80,    98,    98,    98,
      98,    98,    98,   131,   127,    19,   104,    77,    28,   105,
     107,    62,    29,    30,    31,    32,    33,    65,    66,    67,
      34,    82,   118,    83,    15,    16,    96,    84,    85,    86,
      87,    88,    35,    36,    37,    94,    38,    28,    89,    16,
     109,    29,    30,    31,    32,    33,    69,    70,    71,    34,
     110,    72,    73,    74,   132,   111,    12,   134,   136,     4,
       5,    35,    36,    37,   137,    38,   116,   117,    40,     4,
       5,     6,   115,    77,    52,   119,    40,    66,    67,    28,
     136,     6,   120,    29,    30,    31,    32,    33,    28,   136,
     106,    34,    29,    30,    31,    32,    33,   121,   122,   124,
      34,   145,   146,    35,    36,    37,   125,    38,    68,   123,
     128,   152,    35,    36,    37,   155,    38,    68,    69,    70,
      71,   133,    95,    72,    73,    74,   138,    69,    70,    71,
     140,   142,    72,    73,    74,   141,    99,   100,   101,   102,
     103,    64,    65,    66,    67,   144,   148,   150,   149,   154,
      10,   151,   129,    27,    17,    97
};

static const yytype_uint8 yycheck[] =
{
      22,    48,     2,    28,    29,    30,    31,    32,    33,    34,
      12,    12,    34,    16,    18,   142,    19,     0,     3,   130,
      24,    25,    16,    31,   151,    19,    38,   138,    17,     3,
      77,     6,    36,    18,    37,    37,    37,    62,    63,    64,
      65,    66,    67,    37,    18,    31,    68,    47,     7,    71,
      72,     5,    11,    12,    13,    14,    15,     9,    10,    11,
      19,    37,    84,    22,    37,    38,    37,    26,    27,    28,
      29,    30,    31,    32,    33,    18,    35,     7,    37,    38,
      31,    11,    12,    13,    14,    15,    14,    15,    16,    19,
      31,    19,    20,    21,   116,    18,    12,   119,   120,    24,
      25,    31,    32,    33,   126,    35,    19,    37,   130,    24,
      25,    36,    31,   113,    39,    19,   138,    10,    11,     7,
     142,    36,    19,    11,    12,    13,    14,    15,     7,   151,
      18,    19,    11,    12,    13,    14,    15,    37,    37,    37,
      19,   140,   141,    31,    32,    33,    17,    35,     4,    39,
      31,   150,    31,    32,    33,   154,    35,     4,    14,    15,
      16,    37,    18,    19,    20,    21,    16,    14,    15,    16,
      18,    37,    19,    20,    21,    18,    63,    64,    65,    66,
      67,     8,     9,    10,    11,    17,    17,    23,    37,    18,
       2,    37,   113,    21,    10,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,    24,    25,    36,    43,    44,    45,
      47,    31,    12,    37,    49,    37,    38,    54,    38,    31,
      55,    46,    16,    19,    37,    52,    57,    52,     7,    11,
      12,    13,    14,    15,    19,    31,    32,    33,    35,    61,
      62,    63,    64,    65,    66,    67,    68,    48,    44,    47,
      53,    58,    39,    68,    68,    68,    68,    68,    68,    62,
      68,    17,     5,     6,     8,     9,    10,    11,     4,    14,
      15,    16,    19,    20,    21,    18,    24,    44,    50,    51,
      37,    49,    37,    22,    26,    27,    28,    29,    30,    37,
      54,    56,    59,    62,    18,    18,    37,    65,    68,    67,
      67,    67,    67,    67,    62,    62,    18,    62,    69,    31,
      31,    18,    49,     3,    18,    31,    19,    37,    62,    19,
      19,    37,    37,    39,    37,    17,     3,    18,    31,    51,
      16,    37,    62,    37,    62,    60,    62,    62,    16,    61,
      18,    18,    37,    61,    17,    59,    59,    60,    17,    37,
      23,    37,    59,    60,    18,    59
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
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

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
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


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 55 "subc.y"
    {
                REDUCE("program->ext_def_list");
        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 60 "subc.y"
    {
                REDUCE("ext_def_list->ext_def_list ext_def");
        ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 63 "subc.y"
    {
                REDUCE("ext_def_list->epsilon");
        ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 67 "subc.y"
    {
                REDUCE("ext_def->type_specifier pointers ID ;");
                if((yyvsp[(2) - (4)].intVal) == 1) {
                        declare((yyvsp[(3) - (4)].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[(1) - (4)].declptr)))));
                }else {
                        declare((yyvsp[(3) - (4)].idptr), makevardecl((yyvsp[(1) - (4)].declptr)));
                }
        ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 75 "subc.y"
    {
                REDUCE("ext_def->type_specifier pointers ID '[' const_expr ']' ;");
                if((yyvsp[(2) - (7)].intVal) == 1){
                        declare((yyvsp[(3) - (7)].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[(5) - (7)].intVal),makevardecl((yyvsp[(1) - (7)].declptr)))))));
                } else{
                        declare((yyvsp[(3) - (7)].idptr), makeconstdecl(makearraydecl((yyvsp[(5) - (7)].intVal),makevardecl((yyvsp[(1) - (7)].declptr)))));
                }
        ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 83 "subc.y"
    {
                REDUCE("ext_def->func_decl ;");
                pop_scope();
        ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 87 "subc.y"
    {
                REDUCE("ext_def->type_specifier ;");
        ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 90 "subc.y"
    {
                REDUCE("ext_def->func_decl compound_stmt");
                pop_scope();
        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 95 "subc.y"
    {
                REDUCE("type_specifier->TYPE");
                struct decl* currentdecl = findcurrentdecl((yyvsp[(1) - (1)].idptr));
                if(check_is_type(currentdecl)) (yyval.declptr) = currentdecl;
                else (yyval.declptr) = NULL;
        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 101 "subc.y"
    {
                REDUCE("type_specifier->VOID");
                (yyval.declptr) = voidtype;
        ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 105 "subc.y"
    {
                REDUCE("type_specifier->struct_specifier");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 111 "subc.y"
    {
                push_scope();
        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 116 "subc.y"
    {
                REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
                struct ste *fields = pop_scope();
                declare_struct((yyvsp[(2) - (6)].idptr), ((yyval.declptr)=makestructdecl(fields)));
        ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 121 "subc.y"
    {
                REDUCE("struct_specifier->STRUCT ID");
                struct decl* declptr = findcurrentdecl_struct((yyvsp[(2) - (2)].idptr));
                if(check_is_struct_type(declptr)==1 ) (yyval.declptr) = declptr;
				else  if( declptr == NULL) (yyval.declptr) = NULL;
                else {
                        printf("%s:%d:error: '%s' is not struct type\n",read_filename(), read_line(),(yyvsp[(2) - (2)].idptr)->name);
                        (yyval.declptr) = NULL;
                }
        ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 133 "subc.y"
    {
                REDUCE("func_decl->type_specifier pointers ID '(' ')'");
                struct ste* formals;
                struct decl* procdecl = (yyvsp[(5) - (6)].declptr);
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);

        ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 144 "subc.y"
    {
                REDUCE("func_decl->type_specifier pointers ID '(' VOID ')'");
                struct ste* formals;
                struct decl* procdecl = (yyvsp[(5) - (7)].declptr);
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);
        ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 154 "subc.y"
    {
                REDUCE("func_decl->type_specifier pointers ID '(' param_list ')'");
                struct ste* formals;
                struct decl* procdecl = (yyvsp[(5) - (7)].declptr);
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);
        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 167 "subc.y"
    {
                REDUCE("open_func_param_scope -> epsilon");
                struct decl* procdecl = makeprocdecl();
                struct id* name = (yyvsp[(-1) - (0)].idptr);
                declare(name, procdecl);
                push_scope();
//              printf("returnid : %s\n", returnid->name);
                if((yyvsp[(-2) - (0)].intVal) == 1) {
                        declare(returnid, makevardecl(makeptrdecl(makevardecl((yyvsp[(-3) - (0)].declptr)))));
                }
                else {
                        declare(returnid, makevardecl((yyvsp[(-3) - (0)].declptr)));
                }
                (yyval.declptr) = procdecl;
        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 184 "subc.y"
    {
                REDUCE("pointer->'*'");
                (yyval.intVal) = 1;
        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 188 "subc.y"
    {
                REDUCE("pointer->epsilon");
                (yyval.intVal) = 0;
        ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 195 "subc.y"
    {
                REDUCE("param_list->param_decl");
        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 198 "subc.y"
    {
                REDUCE("param_list->param_list ',' param_decl");
        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 203 "subc.y"
    {
                REDUCE("param_decl-> type_specifier pointers ID");
                if((yyvsp[(2) - (3)].intVal) == 1) {
                        declare((yyvsp[(3) - (3)].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[(1) - (3)].declptr)))));
                }
                else {
                        declare((yyvsp[(3) - (3)].idptr), makevardecl((yyvsp[(1) - (3)].declptr)));
                }
        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 212 "subc.y"
    {
                REDUCE("param_decl->type_specifier pointers ID '[' const_expr ']'");
                if((yyvsp[(2) - (6)].intVal) == 1){
                        declare((yyvsp[(3) - (6)].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[(5) - (6)].intVal),makevardecl((yyvsp[(1) - (6)].declptr)))))));
                } else{
                        declare((yyvsp[(3) - (6)].idptr), makeconstdecl(makearraydecl((yyvsp[(5) - (6)].intVal),makevardecl((yyvsp[(1) - (6)].declptr)))));
                }
        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 221 "subc.y"
    {
                REDUCE("def_list->def_list def");
        ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 224 "subc.y"
    {
                REDUCE("def_list->epsilon");
        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 228 "subc.y"
    {
                REDUCE("def->type_specifier pointers ID ';'");
                if((yyvsp[(2) - (4)].intVal) == 1) {
                        declare((yyvsp[(3) - (4)].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[(1) - (4)].declptr)))));
                }
                else {
                        declare((yyvsp[(3) - (4)].idptr), makevardecl((yyvsp[(1) - (4)].declptr)));
                }
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 237 "subc.y"
    {
                REDUCE("def->type_specifier pointers ID '[' const_expr ']' ;");
                if((yyvsp[(2) - (7)].intVal) == 1){
                        declare((yyvsp[(3) - (7)].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[(5) - (7)].intVal),makevardecl((yyvsp[(1) - (7)].declptr)))))));
                } else{
                        declare((yyvsp[(3) - (7)].idptr), makeconstdecl(makearraydecl((yyvsp[(5) - (7)].intVal),makevardecl((yyvsp[(1) - (7)].declptr)))));
                }
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 245 "subc.y"
    {
                REDUCE("def->type_specifer ;");
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 248 "subc.y"
    {
                REDUCE("def->type_specifer func_decl ;");
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 253 "subc.y"
    {	
					push_scope();
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 257 "subc.y"
    {
					pop_scope();
		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 261 "subc.y"
    {
                REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 265 "subc.y"
    {
                REDUCE("local_defs->def_list");
        ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 269 "subc.y"
    {
                REDUCE("stmt_list->stmt_list stmt");
        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 272 "subc.y"
    {
                REDUCE("stmt_list->epsilon");
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 276 "subc.y"
    {
                REDUCE("stmt->expr ';'");
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 279 "subc.y"
    {
                REDUCE("stmt->compound_stmt");
        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 282 "subc.y"
    {
                REDUCE("stmt->RETURN ';'");
                struct decl* returndecl = findcurrentdecl(returnid);
                if(returndecl->type != voidtype){
                        printf("%s:%d:error: return type error (type mismatch)\n",read_filename(), read_line());
                        printf("%s:%d:error: \n",read_filename(), read_line());
                }
        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 290 "subc.y"
    {
                REDUCE("stmt->RETURN expr ';'");
                struct decl* returndecl = findcurrentdecl(returnid);
                if(!check_compatible(returndecl, (yyvsp[(2) - (3)].declptr))){
                        printf("%s:%d:error: return type error (type mismatch)\n",read_filename(), read_line());
                }
        ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 297 "subc.y"
    {
                REDUCE("stmt->';'");
        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 300 "subc.y"
    {
                REDUCE("stmt->IF '(' expr ')' stmt");
        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 303 "subc.y"
    {
                REDUCE("stmt->IF '(' expr ')' stmt ELSE stmt");
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 306 "subc.y"
    {
                REDUCE("stmt->WHILE '(' expr ')' stmt");
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 309 "subc.y"
    {
                REDUCE("stmt->FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt");
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 312 "subc.y"
    {
                REDUCE("stmt->BREAK ';'");
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 315 "subc.y"
    {
                REDUCE("stmt->CONTINUE ';'");
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 319 "subc.y"
    {
                REDUCE("expr_e->expr");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 323 "subc.y"
    {
                REDUCE("expr_e->epsilon");
                (yyval.declptr) = NULL;
        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 329 "subc.y"
    {
                REDUCE("const_expr->expr");
                if(check_is_const((yyvsp[(1) - (1)].declptr)) && check_is_int((yyvsp[(1) - (1)].declptr))){
                        (yyval.intVal) = (yyvsp[(1) - (1)].declptr)->value;
                }
                else {
                        printf("%s:%d:error: index type error(index must be constInt)\n",read_filename(), read_line());
                        (yyval.intVal) = 0;
                }

        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 342 "subc.y"
    {
                REDUCE("expr->expr '=' expr");
                (yyval.declptr) = assigndecl((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].declptr));
        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 346 "subc.y"
    {
                REDUCE("expr->or_expr");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 351 "subc.y"
    {
                REDUCE("or_expr->or_list");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 356 "subc.y"
    {
                REDUCE("or_list->or_list LOGICAL_OR and_expr");
                (yyval.declptr) = logicalopdecl((yyvsp[(1) - (3)].declptr),(yyvsp[(3) - (3)].declptr));
        ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 360 "subc.y"
    {
                REDUCE("or_list->and_expr");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 365 "subc.y"
    {
                REDUCE("and_expr->and_list");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 370 "subc.y"
    {
                REDUCE("and_list->and_list LOGICAL_AND binary");
                (yyval.declptr) = logicalopdecl((yyvsp[(1) - (3)].declptr),(yyvsp[(3) - (3)].declptr));
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 374 "subc.y"
    {
                REDUCE("and_list->binary");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 379 "subc.y"
    {
                REDUCE("binary->binary RELOP binary");
                (yyval.declptr) = relopdecl((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].declptr));
        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 383 "subc.y"
    {
                REDUCE("binary->binary EQUOP binary");
                (yyval.declptr) = equopdecl((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].declptr));
        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 387 "subc.y"
    {
                REDUCE("binary->binary '+' binary");
                (yyval.declptr) = plusdecl((yyvsp[(1) - (3)].declptr),(yyvsp[(3) - (3)].declptr));
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 391 "subc.y"
    {
                REDUCE("binary->binary '-' binary");
                (yyval.declptr) = minusdecl((yyvsp[(1) - (3)].declptr),(yyvsp[(3) - (3)].declptr));
        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 395 "subc.y"
    {
                REDUCE("binary->unary");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 400 "subc.y"
    {
                REDUCE("unary->'(' expr ')'");
                (yyval.declptr) = (yyvsp[(2) - (3)].declptr);
        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 404 "subc.y"
    {
                REDUCE("unary->'(' unary ')'");
                (yyval.declptr) = (yyvsp[(2) - (3)].declptr);
        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 408 "subc.y"
    {
                REDUCE("unary->INTEGER_CONST");
                (yyval.declptr) = makenumconstdecl(inttype, (yyvsp[(1) - (1)].intVal));
        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 412 "subc.y"
    {
                REDUCE("unary->CHAR_CONST");
                (yyval.declptr) = makecharconstdecl(chartype, (yyvsp[(1) - (1)].stringVal));
        ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 416 "subc.y"
    {
                REDUCE("unary->ID");
                (yyval.declptr) = findcurrentdecl((yyvsp[(1) - (1)].idptr));
        ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 420 "subc.y"
    {
                REDUCE("unary->STRING");
                (yyval.declptr) = makestringconstdecl(chartype, (yyvsp[(1) - (1)].stringVal));
        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 424 "subc.y"
    {
                REDUCE("unary->'-' unary");
                if(check_is_int((yyvsp[(2) - (2)].declptr))) (yyval.declptr) = (yyvsp[(2) - (2)].declptr);
                else {
                        printf("%s:%d:error: illegal type for '-' unary op\n",read_filename(), read_line());
                        (yyval.declptr) = NULL;
                }
        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 432 "subc.y"
    {
                REDUCE("unary->'!' unary");
                if(check_is_int((yyvsp[(2) - (2)].declptr))) (yyval.declptr) = (yyvsp[(2) - (2)].declptr);
                else {
                        printf("%s:%d:error: illegal type for '!' unary op\n",read_filename(), read_line());
                        (yyval.declptr) = NULL;
                }
        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 440 "subc.y"
    {
                REDUCE("unary->unary INCOP");
                if(check_is_int((yyvsp[(1) - (2)].declptr)) || check_is_char((yyvsp[(1) - (2)].declptr)) || check_is_ptr((yyvsp[(1) - (2)].declptr))) (yyval.declptr) = (yyvsp[(1) - (2)].declptr);
                else {
                        printf("%s:%d:error: illegal type for postfixINCOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 448 "subc.y"
    {
                REDUCE("unary->unary DECOP");
                if(check_is_int((yyvsp[(1) - (2)].declptr)) || check_is_char((yyvsp[(1) - (2)].declptr)) || check_is_ptr((yyvsp[(1) - (2)].declptr))) (yyval.declptr) = (yyvsp[(1) - (2)].declptr);
                else {
                        printf("%s:%d:error: illegal type for postfixDECOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 456 "subc.y"
    {
                REDUCE("unary->INCOP unary");
                if(check_is_int((yyvsp[(2) - (2)].declptr)) || check_is_char((yyvsp[(2) - (2)].declptr)) || check_is_ptr((yyvsp[(2) - (2)].declptr))) (yyval.declptr) = (yyvsp[(2) - (2)].declptr);
                else {
                        printf("%s:%d:error: illegal type for prefixINCOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 464 "subc.y"
    {
                REDUCE("unary->DECOP unary");
                if(check_is_int((yyvsp[(2) - (2)].declptr)) || check_is_char((yyvsp[(2) - (2)].declptr)) || check_is_ptr((yyvsp[(2) - (2)].declptr))) (yyval.declptr) = (yyvsp[(2) - (2)].declptr);
                else {
                        printf("%s:%d:error: illegal type for DECOP\n",read_filename(), read_line());

                        (yyval.declptr) = NULL;
                }
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 473 "subc.y"
    {
                REDUCE("unary->'&' unary");
                (yyval.declptr) = referdecl((yyvsp[(2) - (2)].declptr));
        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 477 "subc.y"
    {
                REDUCE("unary->'*' unary");
                (yyval.declptr) = ptropdecl((yyvsp[(2) - (2)].declptr));
        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 481 "subc.y"
    {
                REDUCE("unary->unary '[' expr ']'");
                (yyval.declptr) = arrayaccess((yyvsp[(1) - (4)].declptr), (yyvsp[(3) - (4)].declptr));
        ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 485 "subc.y"
    {
                REDUCE("unary-> unary '.' ID");
                (yyval.declptr) = structaccess((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].idptr));
        ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 489 "subc.y"
    {
                REDUCE("unary->unary STRUCTOP ID");
                (yyval.declptr) = STRUCTOPdecl((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].idptr));
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 493 "subc.y"
    {
                REDUCE("unary->unary '(' args ')'");
                (yyval.declptr) = checkfunctioncall((yyvsp[(1) - (4)].declptr),(yyvsp[(3) - (4)].declptr));
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 497 "subc.y"
    {
                REDUCE("unary->unary '(' ')'");
                (yyval.declptr) = checkfunctioncall((yyvsp[(1) - (3)].declptr), NULL);
        ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 502 "subc.y"
    {
                REDUCE("args->expr");
                (yyval.declptr) = makeconstdecl((yyvsp[(1) - (1)].declptr)->type);
        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 506 "subc.y"
    {
                REDUCE("args->args ',' expr");
                struct decl* argsdecl = (yyvsp[(1) - (3)].declptr);
                if(argsdecl == NULL || (yyvsp[(3) - (3)].declptr) == NULL) (yyval.declptr) = NULL;
                else{
                        struct decl* exprdecl = makeconstdecl((yyvsp[(3) - (3)].declptr)->type);

                        while(argsdecl->next != NULL){
                                argsdecl = argsdecl->next;
                        }
                        argsdecl->next = exprdecl;
                        (yyval.declptr) = (yyvsp[(1) - (3)].declptr);
                }
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2441 "subc.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 522 "subc.y"


/*  Additional C Codes 
        Implemnt REDUCE function here */

int    yyerror (char* s)
{
        fprintf (stderr, "%s\n", s);
}

int 	yyprint(char* s)
{
		fprintf (stdout, "%s\n", s);
}

void    REDUCE( char* s)
{
        //printf("%s\n",s);
}


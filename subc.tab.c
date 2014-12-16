/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
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



/* Line 268 of yacc.c  */
#line 90 "subc.tab.c"

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

/* Line 293 of yacc.c  */
#line 20 "subc.y"

        int             intVal;
        char            *stringVal;
        struct id       *idptr;
        struct decl     *declptr;
        struct ste      *steptr;



/* Line 293 of yacc.c  */
#line 160 "subc.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 172 "subc.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  158

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
     109,   112,   115,   116,   117,   118,   126,   128,   131,   132,
     135,   137,   140,   144,   146,   152,   160,   166,   176,   179,
     182,   184,   185,   187,   192,   194,   195,   197,   201,   203,
     205,   209,   211,   215,   219,   223,   227,   229,   233,   237,
     239,   241,   243,   245,   248,   251,   254,   257,   260,   263,
     266,   269,   274,   278,   282,   287,   291,   293
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    -1,    42,    43,    -1,    -1,    44,
      49,    31,    37,    -1,    44,    49,    31,    16,    62,    17,
      37,    -1,    47,    37,    -1,    44,    37,    -1,    47,    54,
      -1,    36,    -1,    24,    -1,    45,    -1,    -1,    25,    31,
      38,    46,    52,    39,    -1,    25,    31,    -1,    44,    49,
      31,    19,    48,    18,    -1,    44,    49,    31,    19,    48,
      24,    18,    -1,    44,    49,    31,    19,    48,    50,    18,
      -1,    -1,    12,    -1,    -1,    51,    -1,    50,     3,    51,
      -1,    44,    49,    31,    -1,    44,    49,    31,    16,    62,
      17,    -1,    52,    53,    -1,    -1,    44,    49,    31,    37,
      -1,    44,    49,    31,    16,    62,    17,    37,    -1,    44,
      37,    -1,    47,    37,    -1,    -1,    -1,    -1,    38,    55,
      58,    56,    59,    57,    39,    -1,    52,    -1,    59,    60,
      -1,    -1,    63,    37,    -1,    54,    -1,    26,    37,    -1,
      26,    63,    37,    -1,    37,    -1,    22,    19,    63,    18,
      60,    -1,    22,    19,    63,    18,    60,    23,    60,    -1,
      27,    19,    63,    18,    60,    -1,    28,    19,    61,    37,
      61,    37,    61,    18,    60,    -1,    29,    37,    -1,    30,
      37,    -1,    63,    -1,    -1,    63,    -1,    70,    64,     4,
      63,    -1,    65,    -1,    -1,    66,    -1,    66,     5,    67,
      -1,    67,    -1,    68,    -1,    68,     6,    69,    -1,    69,
      -1,    69,     9,    69,    -1,    69,     8,    69,    -1,    69,
      10,    69,    -1,    69,    11,    69,    -1,    70,    -1,    19,
      63,    18,    -1,    19,    70,    18,    -1,    35,    -1,    32,
      -1,    31,    -1,    33,    -1,    11,    70,    -1,    13,    70,
      -1,    70,    15,    -1,    70,    14,    -1,    15,    70,    -1,
      14,    70,    -1,     7,    70,    -1,    12,    70,    -1,    70,
      16,    63,    17,    -1,    70,    20,    31,    -1,    70,    21,
      31,    -1,    70,    19,    71,    18,    -1,    70,    19,    18,
      -1,    63,    -1,    71,     3,    63,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    60,    63,    67,    75,    83,    87,    90,
      95,   101,   105,   111,   110,   121,   133,   146,   159,   175,
     193,   197,   204,   207,   212,   221,   230,   233,   237,   246,
     254,   257,   262,   269,   278,   261,   286,   290,   293,   297,
     301,   304,   312,   319,   324,   327,   330,   333,   336,   339,
     343,   347,   353,   366,   374,   385,   393,   398,   402,   407,
     412,   416,   421,   425,   429,   433,   437,   442,   447,   452,
     458,   464,   474,   481,   500,   519,   549,   579,   609,   639,
     645,   653,   663,   672,   681,   690,   695,   699
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
  "def_list", "def", "compound_stmt", "$@2", "$@3", "$@4", "local_defs",
  "stmt_list", "stmt", "expr_e", "const_expr", "expr", "assign_action",
  "or_expr", "or_list", "and_expr", "and_list", "binary", "unary", "args", 0
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
      53,    53,    55,    56,    57,    54,    58,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    62,    63,    63,    64,    65,    66,    66,    67,
      68,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     2,
       1,     1,     1,     0,     6,     2,     6,     7,     7,     0,
       1,     0,     1,     3,     3,     6,     2,     0,     4,     7,
       2,     2,     0,     0,     0,     7,     1,     2,     0,     2,
       1,     2,     3,     1,     5,     7,     5,     9,     2,     2,
       1,     0,     1,     4,     1,     0,     1,     3,     1,     1,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     3,     3,     4,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    11,     0,    10,     3,    21,    12,
       0,    15,    20,     8,     0,     7,    32,     9,    13,     0,
      27,    27,     0,    19,     5,    36,    33,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    70,    72,    69,     0,
      52,    54,    56,    58,    59,    61,    66,     0,    21,     0,
      26,    38,    14,    79,    73,    80,    74,    78,    77,     0,
      66,     0,     0,     0,     0,     0,     0,     0,    76,    75,
       0,     0,     0,     0,     0,    16,    11,    21,     0,    22,
      30,     0,    31,    34,    67,    68,     6,    57,    66,    60,
      63,    62,    64,    65,     0,    85,    86,     0,    82,    83,
       0,    17,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,    43,    40,     0,    37,     0,    81,     0,    84,
      53,    24,    23,     0,    28,     0,    41,     0,     0,    51,
      48,    49,    35,    39,    87,     0,     0,     0,    42,     0,
       0,    50,     0,     0,     0,     0,    51,    25,    29,    44,
      46,     0,     0,    51,    45,     0,     0,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    48,     9,    21,    49,    47,    14,
      78,    79,    25,    50,   113,    20,    51,   114,    26,    83,
     115,   140,    39,   116,    74,    41,    42,    43,    44,    45,
      46,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -132
static const yytype_int16 yypact[] =
{
    -132,    29,    -8,  -132,  -132,    19,  -132,  -132,    -3,  -132,
     -17,    59,  -132,  -132,    53,  -132,  -132,  -132,  -132,    -5,
    -132,  -132,   108,  -132,  -132,    -8,  -132,    28,   108,   108,
     108,   108,   108,   108,   108,  -132,  -132,  -132,  -132,    72,
    -132,  -132,    95,  -132,    98,   169,   141,   110,    -2,    68,
    -132,  -132,  -132,   149,   149,   149,   149,   149,   149,    90,
     133,    80,   108,   108,   108,   108,   108,   108,  -132,  -132,
     108,    12,    78,    87,   121,  -132,   111,   114,    15,  -132,
    -132,    99,  -132,    44,  -132,  -132,  -132,  -132,   149,   169,
     172,    50,  -132,  -132,   115,  -132,  -132,    51,  -132,  -132,
     108,  -132,   102,    -8,  -132,    46,   117,    79,   119,   123,
     107,   113,  -132,  -132,   120,  -132,   129,  -132,   108,  -132,
    -132,   142,  -132,   108,  -132,   108,  -132,   130,   108,   108,
    -132,  -132,  -132,  -132,  -132,   108,   154,   166,  -132,   167,
     150,  -132,   171,   152,    44,    44,   108,  -132,  -132,   163,
    -132,   153,    44,   108,  -132,   173,    44,  -132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,    -1,  -132,  -132,   190,  -132,   -35,
    -132,    91,   174,  -132,   183,  -132,  -132,  -132,  -132,  -132,
     -57,  -131,   -55,   -22,  -132,  -132,  -132,   134,  -132,   109,
     -26,  -132
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      40,     8,    53,    54,    55,    56,    57,    58,    60,    12,
      12,    22,    59,    81,    23,   151,     4,     5,   103,    28,
      15,    16,   155,    29,    30,    31,    32,    33,     6,     3,
      95,    34,    24,   104,    13,    80,    88,    88,    88,    88,
      88,    88,   102,    35,    36,    37,    77,    38,    94,    96,
      11,    28,     4,     5,   118,    29,    30,    31,    32,    33,
      66,    67,   123,    34,     6,    23,   106,    52,   136,   119,
     107,   108,   109,   110,   111,    35,    36,    37,   120,    38,
     142,   112,    16,   124,    19,   127,    28,   149,   150,    61,
      29,    30,    31,    32,    33,   154,   134,    18,    34,   157,
      62,    40,    77,   137,    63,    82,   139,   141,    84,    98,
      35,    36,    37,    40,    38,    28,   126,    86,    99,    29,
      30,    31,    32,    33,   141,   100,    12,    34,    75,   101,
     105,   141,   117,   121,    76,     5,   125,   -55,   128,    35,
      36,    37,   129,    38,   130,   -55,     6,    68,    69,    70,
     131,    85,    71,    72,    73,    68,    69,    70,   135,   132,
      71,    72,    73,    68,    69,    70,   133,   138,    71,    72,
      73,   143,    89,    90,    91,    92,    93,    64,    65,    66,
      67,    65,    66,    67,   144,   145,   152,   146,   147,   148,
     153,   156,    10,    17,   122,    27,    87
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-132))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      22,     2,    28,    29,    30,    31,    32,    33,    34,    12,
      12,    16,    34,    48,    19,   146,    24,    25,     3,     7,
      37,    38,   153,    11,    12,    13,    14,    15,    36,     0,
      18,    19,    37,    18,    37,    37,    62,    63,    64,    65,
      66,    67,    77,    31,    32,    33,    47,    35,    70,    71,
      31,     7,    24,    25,     3,    11,    12,    13,    14,    15,
      10,    11,    16,    19,    36,    19,    22,    39,   123,    18,
      26,    27,    28,    29,    30,    31,    32,    33,   100,    35,
     135,    37,    38,    37,    31,   107,     7,   144,   145,    17,
      11,    12,    13,    14,    15,   152,   118,    38,    19,   156,
       5,   123,   103,   125,     6,    37,   128,   129,    18,    31,
      31,    32,    33,   135,    35,     7,    37,    37,    31,    11,
      12,    13,    14,    15,   146,     4,    12,    19,    18,    18,
      31,   153,    17,    31,    24,    25,    19,     4,    19,    31,
      32,    33,    19,    35,    37,     4,    36,    14,    15,    16,
      37,    18,    19,    20,    21,    14,    15,    16,    16,    39,
      19,    20,    21,    14,    15,    16,    37,    37,    19,    20,
      21,    17,    63,    64,    65,    66,    67,     8,     9,    10,
      11,     9,    10,    11,    18,    18,    23,    37,    17,    37,
      37,    18,     2,    10,   103,    21,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,    24,    25,    36,    43,    44,    45,
      47,    31,    12,    37,    49,    37,    38,    54,    38,    31,
      55,    46,    16,    19,    37,    52,    58,    52,     7,    11,
      12,    13,    14,    15,    19,    31,    32,    33,    35,    62,
      63,    65,    66,    67,    68,    69,    70,    48,    44,    47,
      53,    56,    39,    70,    70,    70,    70,    70,    70,    63,
      70,    17,     5,     6,     8,     9,    10,    11,    14,    15,
      16,    19,    20,    21,    64,    18,    24,    44,    50,    51,
      37,    49,    37,    59,    18,    18,    37,    67,    70,    69,
      69,    69,    69,    69,    63,    18,    63,    71,    31,    31,
       4,    18,    49,     3,    18,    31,    22,    26,    27,    28,
      29,    30,    37,    54,    57,    60,    63,    17,     3,    18,
      63,    31,    51,    16,    37,    19,    37,    63,    19,    19,
      37,    37,    39,    37,    63,    16,    62,    63,    37,    63,
      61,    63,    62,    17,    18,    18,    37,    17,    37,    60,
      60,    61,    23,    37,    60,    61,    18,    60
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 55 "subc.y"
    {
                REDUCE("program->ext_def_list");
        }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 60 "subc.y"
    {
                REDUCE("ext_def_list->ext_def_list ext_def");
        }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 63 "subc.y"
    {
                REDUCE("ext_def_list->epsilon");
        }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 67 "subc.y"
    {
                REDUCE("ext_def->type_specifier pointers ID ;");
                if((yyvsp[(2) - (4)].intVal) == 1) {
                        declare((yyvsp[(3) - (4)].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[(1) - (4)].declptr)))));
                }else {
                        declare((yyvsp[(3) - (4)].idptr), makevardecl((yyvsp[(1) - (4)].declptr)));
                }
        }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 75 "subc.y"
    {
                REDUCE("ext_def->type_specifier pointers ID '[' const_expr ']' ;");
                if((yyvsp[(2) - (7)].intVal) == 1){
                        declare((yyvsp[(3) - (7)].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[(5) - (7)].intVal),makevardecl((yyvsp[(1) - (7)].declptr)))))));
                } else{
                        declare((yyvsp[(3) - (7)].idptr), makeconstdecl(makearraydecl((yyvsp[(5) - (7)].intVal),makevardecl((yyvsp[(1) - (7)].declptr)))));
                }
        }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 83 "subc.y"
    {
                REDUCE("ext_def->func_decl ;");
                pop_scope();
        }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 87 "subc.y"
    {
                REDUCE("ext_def->type_specifier ;");
        }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 90 "subc.y"
    {
                REDUCE("ext_def->func_decl compound_stmt");
                pop_scope();
        }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 95 "subc.y"
    {
                REDUCE("type_specifier->TYPE");
                struct decl* currentdecl = findcurrentdecl((yyvsp[(1) - (1)].idptr));
                if(check_is_type(currentdecl)) (yyval.declptr) = currentdecl;
                else (yyval.declptr) = NULL;
        }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 101 "subc.y"
    {
                REDUCE("type_specifier->VOID");
                (yyval.declptr) = voidtype;
        }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 105 "subc.y"
    {
                REDUCE("type_specifier->struct_specifier");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 111 "subc.y"
    {
                push_scope();
        }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 116 "subc.y"
    {
                REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
                struct ste *fields = pop_scope();
                declare_struct((yyvsp[(2) - (6)].idptr), ((yyval.declptr)=makestructdecl(fields)));
        }
    break;

  case 15:

/* Line 1806 of yacc.c  */
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
        }
    break;

  case 16:

/* Line 1806 of yacc.c  */
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
		(yyval.declptr) = procdecl;
		yyprint("%s:\n", func_name);

        }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 146 "subc.y"
    {
                REDUCE("func_decl->type_specifier pointers ID '(' VOID ')'");
                struct ste* formals;
                struct decl* procdecl = (yyvsp[(5) - (7)].declptr);
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);
		(yyval.declptr) = procdecl;
		yyprint(code_gen,"%s:\n", func_name);
		
        }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 159 "subc.y"
    {
                REDUCE("func_decl->type_specifier pointers ID '(' param_list ')'");
                struct ste* formals;
                struct decl* procdecl = (yyvsp[(5) - (7)].declptr);
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);
		(yyval.declptr) = procdecl;
		yyprint(code_gen,"%s:\n", func_name);
		
        }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 175 "subc.y"
    {
                REDUCE("open_func_param_scope -> epsilon");
                struct decl* procdecl = makeprocdecl();
                struct id* name = (yyvsp[(-1) - (0)].idptr);
                declare(name, procdecl);
		func_name = name->name;
                push_scope();
//              printf("returnid : %s\n", returnid->name);
                if((yyvsp[(-2) - (0)].intVal) == 1) {
                        declare(returnid, makevardecl(makeptrdecl(makevardecl((yyvsp[(-3) - (0)].declptr)))));
                }
                else {
                        declare(returnid, makevardecl((yyvsp[(-3) - (0)].declptr)));
                }
                (yyval.declptr) = procdecl;
        }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 193 "subc.y"
    {
                REDUCE("pointer->'*'");
                (yyval.intVal) = 1;
        }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 197 "subc.y"
    {
                REDUCE("pointer->epsilon");
                (yyval.intVal) = 0;
        }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 204 "subc.y"
    {
                REDUCE("param_list->param_decl");
        }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 207 "subc.y"
    {
                REDUCE("param_list->param_list ',' param_decl");
        }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 212 "subc.y"
    {
                REDUCE("param_decl-> type_specifier pointers ID");
                if((yyvsp[(2) - (3)].intVal) == 1) {
                        declare((yyvsp[(3) - (3)].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[(1) - (3)].declptr)))));
                }
                else {
                        declare((yyvsp[(3) - (3)].idptr), makevardecl((yyvsp[(1) - (3)].declptr)));
                }
        }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 221 "subc.y"
    {
                REDUCE("param_decl->type_specifier pointers ID '[' const_expr ']'");
                if((yyvsp[(2) - (6)].intVal) == 1){
                        declare((yyvsp[(3) - (6)].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[(5) - (6)].intVal),makevardecl((yyvsp[(1) - (6)].declptr)))))));
                } else{
                        declare((yyvsp[(3) - (6)].idptr), makeconstdecl(makearraydecl((yyvsp[(5) - (6)].intVal),makevardecl((yyvsp[(1) - (6)].declptr)))));
                }
        }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 230 "subc.y"
    {
                REDUCE("def_list->def_list def");
        }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 233 "subc.y"
    {
                REDUCE("def_list->epsilon");
        }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 237 "subc.y"
    {
                REDUCE("def->type_specifier pointers ID ';'");
                if((yyvsp[(2) - (4)].intVal) == 1) {
                        declare((yyvsp[(3) - (4)].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[(1) - (4)].declptr)))));
                }
                else {
                        declare((yyvsp[(3) - (4)].idptr), makevardecl((yyvsp[(1) - (4)].declptr)));
                }
        }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 246 "subc.y"
    {
                REDUCE("def->type_specifier pointers ID '[' const_expr ']' ;");
                if((yyvsp[(2) - (7)].intVal) == 1){
                        declare((yyvsp[(3) - (7)].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[(5) - (7)].intVal),makevardecl((yyvsp[(1) - (7)].declptr)))))));
                } else{
                        declare((yyvsp[(3) - (7)].idptr), makeconstdecl(makearraydecl((yyvsp[(5) - (7)].intVal),makevardecl((yyvsp[(1) - (7)].declptr)))));
                }
        }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 254 "subc.y"
    {
                REDUCE("def->type_specifer ;");
        }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 257 "subc.y"
    {
                REDUCE("def->type_specifer func_decl ;");
        }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 262 "subc.y"
    {	
			push_scope();
			//sprintf(code_gen, "block_%d:", block_num++);
			//
			
		}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 269 "subc.y"
    {
			struct sse* scope_top = getscopetop();
			if(scope_top->scope_entry)
			yyprint("\tshift_sp %d\n", scope_top->scope_entry->offset);
			
			yyprint("%s_start:\n", func_name);
			
		}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 278 "subc.y"
    {
			pop_scope();
		}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 282 "subc.y"
    {
                REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
        }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 286 "subc.y"
    {
                REDUCE("local_defs->def_list");
        }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 290 "subc.y"
    {
                REDUCE("stmt_list->stmt_list stmt");
        }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 293 "subc.y"
    {
                REDUCE("stmt_list->epsilon");
        }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 297 "subc.y"
    {
                REDUCE("stmt->expr ';'");
			yyprint("\tshift_sp -1\n");
        }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 301 "subc.y"
    {
                REDUCE("stmt->compound_stmt");
        }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 304 "subc.y"
    {
                REDUCE("stmt->RETURN ';'");
                struct decl* returndecl = findcurrentdecl(returnid);
                if(returndecl->type != voidtype){
                        printf("%s:%d:error: return type error (type mismatch)\n",read_filename(), read_line());
                        printf("%s:%d:error: \n",read_filename(), read_line());
                }
        }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 312 "subc.y"
    {
                REDUCE("stmt->RETURN expr ';'");
                struct decl* returndecl = findcurrentdecl(returnid);
                if(!check_compatible(returndecl, (yyvsp[(2) - (3)].declptr))){
                        printf("%s:%d:error: return type error (type mismatch)\n",read_filename(), read_line());
                }
        }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 319 "subc.y"
    {
                REDUCE("stmt->';'");
		yyprint("\tshift_sp -1\n");
		
        }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 324 "subc.y"
    {
                REDUCE("stmt->IF '(' expr ')' stmt");
        }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 327 "subc.y"
    {
                REDUCE("stmt->IF '(' expr ')' stmt ELSE stmt");
        }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 330 "subc.y"
    {
                REDUCE("stmt->WHILE '(' expr ')' stmt");
        }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 333 "subc.y"
    {
                REDUCE("stmt->FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt");
        }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 336 "subc.y"
    {
                REDUCE("stmt->BREAK ';'");
        }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 339 "subc.y"
    {
                REDUCE("stmt->CONTINUE ';'");
        }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 343 "subc.y"
    {
                REDUCE("expr_e->expr");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 347 "subc.y"
    {
                REDUCE("expr_e->epsilon");
                (yyval.declptr) = NULL;
        }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 353 "subc.y"
    {
                REDUCE("const_expr->expr");
                if(check_is_const((yyvsp[(1) - (1)].declptr)) && check_is_int((yyvsp[(1) - (1)].declptr))){
                        (yyval.intVal) = (yyvsp[(1) - (1)].declptr)->value;
                }
                else {
                        printf("%s:%d:error: index type error(index must be constInt)\n",read_filename(), read_line());
                        (yyval.intVal) = 0;
                }

        }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 366 "subc.y"
    {
                REDUCE("expr->expr '=' expr");
                (yyval.declptr) = assigndecl((yyvsp[(1) - (4)].declptr), (yyvsp[(4) - (4)].declptr));
		if((yyval.declptr)!=NULL){
			yyprint("\tassign\n");
			yyprint("\tfetch\n");
		}
        }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 374 "subc.y"
    {
                REDUCE("expr->or_expr");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
		if(check_is_var((yyvsp[(1) - (1)].declptr))){
			if(check_is_var((yyvsp[(1) - (1)].declptr))){
				yyprint("\tfetch\n");
			}
		}
        }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 385 "subc.y"
    {
			if((yyvsp[(0) - (0)].declptr) != NULL){
				yyprint("\tpush_reg sp\n");
				yyprint("\tfetch\n");
			}
			
		}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 393 "subc.y"
    {
                REDUCE("or_expr->or_list");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 398 "subc.y"
    {
                REDUCE("or_list->or_list LOGICAL_OR and_expr");
                (yyval.declptr) = logicalopdecl((yyvsp[(1) - (3)].declptr),(yyvsp[(3) - (3)].declptr));
        }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 402 "subc.y"
    {
                REDUCE("or_list->and_expr");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 407 "subc.y"
    {
                REDUCE("and_expr->and_list");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 412 "subc.y"
    {
                REDUCE("and_list->and_list LOGICAL_AND binary");
                (yyval.declptr) = logicalopdecl((yyvsp[(1) - (3)].declptr),(yyvsp[(3) - (3)].declptr));
        }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 416 "subc.y"
    {
                REDUCE("and_list->binary");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 421 "subc.y"
    {
                REDUCE("binary->binary RELOP binary");
                (yyval.declptr) = relopdecl((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].declptr));
        }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 425 "subc.y"
    {
                REDUCE("binary->binary EQUOP binary");
                (yyval.declptr) = equopdecl((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].declptr));
        }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 429 "subc.y"
    {
                REDUCE("binary->binary '+' binary");
                (yyval.declptr) = plusdecl((yyvsp[(1) - (3)].declptr),(yyvsp[(3) - (3)].declptr));
        }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 433 "subc.y"
    {
                REDUCE("binary->binary '-' binary");
                (yyval.declptr) = minusdecl((yyvsp[(1) - (3)].declptr),(yyvsp[(3) - (3)].declptr));
        }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 437 "subc.y"
    {
                REDUCE("binary->unary");
                (yyval.declptr) = (yyvsp[(1) - (1)].declptr);
        }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 442 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->'(' expr ')'");
                (yyval.declptr) = (yyvsp[(2) - (3)].declptr);
        }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 447 "subc.y"
    {
			//R-VALUE OR L-VALUE
                REDUCE("unary->'(' unary ')'");
                (yyval.declptr) = (yyvsp[(2) - (3)].declptr);
        }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 452 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->INTEGER_CONST");
                (yyval.declptr) = makenumconstdecl(inttype, (yyvsp[(1) - (1)].intVal));
			yyprint("\tpush_const %d\n", (yyvsp[(1) - (1)].intVal));
        }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 458 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->CHAR_CONST");
                (yyval.declptr) = makecharconstdecl(chartype, (yyvsp[(1) - (1)].stringVal));
			yyprint("\tpush_const %s\n", (yyvsp[(1) - (1)].stringVal));
        }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 464 "subc.y"
    {
			//R-VALUE
                REDUCE("unary->ID");
                (yyval.declptr) = findcurrentdecl((yyvsp[(1) - (1)].idptr));
		if((yyval.declptr) !=NULL){
			yyprint("\tpush_reg fp\n");
			yyprint("\tpush_const %d\n",(yyval.declptr)->offset+1);
			yyprint("\tadd\n");
		}
        }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 474 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->STRING");
                (yyval.declptr) = makestringconstdecl(chartype, (yyvsp[(1) - (1)].stringVal));
		yyprint("Str%d. string %s\n", string_num, (yyvsp[(1) - (1)].stringVal));
		yyprint("\tpush_const Str%d\n",string_num++);
        }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 481 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->'-' unary");
                if(check_is_int((yyvsp[(2) - (2)].declptr))) {
			(yyval.declptr) = (yyvsp[(2) - (2)].declptr);
			if(check_is_var((yyvsp[(2) - (2)].declptr))){
				yyprint("\tfetch\n");
				yyprint("\tnegate\n");
			}
			else{
				(yyval.declptr)->value = -(yyval.declptr)->value;
				yyprint("\tnegate\n");
			}
		}
                else {
                        printf("%s:%d:error: illegal type for '-' unary op\n",read_filename(), read_line());
                        (yyval.declptr) = NULL;
                }
        }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 500 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->'!' unary");
                if(check_is_int((yyvsp[(2) - (2)].declptr))) {
			(yyval.declptr) = (yyvsp[(2) - (2)].declptr);
			if(check_is_var((yyvsp[(2) - (2)].declptr))){
				yyprint("\tfetch\n");
				yyprint("\tnot\n");
			}
			else{
				(yyval.declptr)->value = !(yyval.declptr)->value;
				yyprint("\tnot\n");
			}
		}
                else {
                        printf("%s:%d:error: illegal type for '!' unary op\n",read_filename(), read_line());
                        (yyval.declptr) = NULL;
                }
        }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 519 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->unary INCOP");
                if(check_is_int((yyvsp[(1) - (2)].declptr)) || check_is_char((yyvsp[(1) - (2)].declptr)) || check_is_ptr((yyvsp[(1) - (2)].declptr))){
			(yyval.declptr) = INCOPDECOPdecl((yyvsp[(1) - (2)].declptr),1);
			if(check_is_var((yyvsp[(1) - (2)].declptr))){
				yyprint("\tfetch\n");
				yyprint("\tpush_reg fp\n");
				yyprint("\tpush_const %d\n",(yyvsp[(1) - (2)].declptr)->offset+1);
				yyprint("\tadd\n");
				yyprint("\tpush_reg fp\n");
				yyprint("\tpush_const %d\n",(yyvsp[(1) - (2)].declptr)->offset+1);
				yyprint("\tadd\n");
				yyprint("\tfetch\n");
				if(check_is_ptr((yyvsp[(1) - (2)].declptr)) && ((yyvsp[(1) - (2)].declptr)->type->ptrto != NULL))
					yyprint("\tpush_const %d\n",(yyvsp[(1) - (2)].declptr)->type->ptrto->size);	// 1 size adding
				else
					yyprint("\tpush_const 1\n");
				yyprint("\tadd\n");
				yyprint("\tassign\n");
			}
			else{
				// CONST has nothing to do.
			}
		}
                else {
                        printf("%s:%d:error: illegal type for postfixINCOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 549 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->unary DECOP");
                if(check_is_int((yyvsp[(1) - (2)].declptr)) || check_is_char((yyvsp[(1) - (2)].declptr)) || check_is_ptr((yyvsp[(1) - (2)].declptr))){
			(yyval.declptr) = INCOPDECOPdecl((yyvsp[(1) - (2)].declptr),-1);
			if(check_is_var((yyvsp[(1) - (2)].declptr))){
				yyprint("\tfetch\n");
				yyprint("\tpush_reg fp\n");
				yyprint("\tpush_const %d\n",(yyvsp[(1) - (2)].declptr)->offset+1);
				yyprint("\tadd\n");
				if(check_is_ptr((yyvsp[(1) - (2)].declptr)) && ((yyvsp[(1) - (2)].declptr)->type->ptrto != NULL))
					yyprint("\tpush_const %d\n",(yyvsp[(1) - (2)].declptr)->type->ptrto->size);	// 1 size adding
				else
					yyprint("\tpush_const 1\n");
				yyprint("\tpush_reg fp\n");
				yyprint("\tpush_const %d\n",(yyvsp[(1) - (2)].declptr)->offset+1);
				yyprint("\tadd\n");
				yyprint("\tfetch\n");
				yyprint("\tsub\n");
				yyprint("\tassign\n");
			}
			else{
				// CONST has nothing to do.
			}
		}
                else {
                        printf("%s:%d:error: illegal type for postfixDECOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 579 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->INCOP unary");
                if(check_is_int((yyvsp[(2) - (2)].declptr)) || check_is_char((yyvsp[(2) - (2)].declptr)) || check_is_ptr((yyvsp[(2) - (2)].declptr))){
			(yyval.declptr) = INCOPDECOPdecl((yyvsp[(2) - (2)].declptr),1);
			if(check_is_var((yyvsp[(2) - (2)].declptr))){
				// already addr of ID is stacked
				yyprint("\tpush_reg fp\n");
				yyprint("\tpush_const %d\n",(yyvsp[(2) - (2)].declptr)->offset+1);
				yyprint("\tadd\n");
				yyprint("\tfetch\n");
				if(check_is_ptr((yyvsp[(2) - (2)].declptr)) && ((yyvsp[(2) - (2)].declptr)->type->ptrto != NULL))
					yyprint("\tpush_const %d\n",(yyvsp[(2) - (2)].declptr)->type->ptrto->size);	// 1 size adding
				else
					yyprint("\tpush_const 1\n");
				yyprint("\tadd\n");
				yyprint("\tassign\n");
				yyprint("\tfetch\n");
			}
			else{
				yyprint("\tpush_const 1\n");
				yyprint("\tadd\n");
				// CONST has nothing to do.
			}
		}
                else {
                        printf("%s:%d:error: illegal type for prefixINCOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 609 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->DECOP unary");
                if(check_is_int((yyvsp[(2) - (2)].declptr)) || check_is_char((yyvsp[(2) - (2)].declptr)) || check_is_ptr((yyvsp[(2) - (2)].declptr))){
			(yyval.declptr) = INCOPDECOPdecl((yyvsp[(2) - (2)].declptr),-1);
			if(check_is_var((yyvsp[(2) - (2)].declptr))){
				// already addr of ID is stacked
				yyprint("\tpush_reg fp\n");
				yyprint("\tpush_const %d\n",(yyvsp[(2) - (2)].declptr)->offset+1);
				yyprint("\tadd\n");
				yyprint("\tfetch\n");
				if(check_is_ptr((yyvsp[(2) - (2)].declptr)) && ((yyvsp[(2) - (2)].declptr)->type->ptrto != NULL))
					yyprint("\tpush_const %d\n",(yyvsp[(2) - (2)].declptr)->type->ptrto->size);	// 1 size adding
				else
					yyprint("\tpush_const 1\n");
				yyprint("\tsub\n");
				yyprint("\tassign\n");
				yyprint("\tfetch\n");
			}
			else{
				yyprint("\tpush_const 1\n");
				yyprint("\tsub\n");
				// CONST has nothing to do.
			}
		}
                else {
                        printf("%s:%d:error: illegal type for DECOP\n",read_filename(), read_line());
                        (yyval.declptr) = NULL;
                }
        }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 639 "subc.y"
    {
			//L-VALUE
                REDUCE("unary->'&' unary");
                (yyval.declptr) = referdecl((yyvsp[(2) - (2)].declptr));
		yyprint("\tpush_reg sp\n");
        }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 645 "subc.y"
    {
			//R_VALUE
                REDUCE("unary->'*' unary");
                (yyval.declptr) = ptropdecl((yyvsp[(2) - (2)].declptr));
		if((yyval.declptr) != NULL){
			yyprint("\tfetch\n");
		}
        }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 653 "subc.y"
    {
			//R-VALUE
                REDUCE("unary->unary '[' expr ']'");
                (yyval.declptr) = arrayaccess((yyvsp[(1) - (4)].declptr), (yyvsp[(3) - (4)].declptr));
		if((yyval.declptr)!=NULL){
			yyprint("\tpush_const %d\n", (yyvsp[(3) - (4)].declptr)->size);
			yyprint("\tmul\n");
			yyprint("\tadd\n");
		}
        }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 663 "subc.y"
    {
			// R-VALUE
                REDUCE("unary-> unary '.' ID");
                (yyval.declptr) = structaccess((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].idptr));
		if((yyval.declptr)!=NULL){
			yyprint("\tpush_const %d\n", (yyval.declptr)->offset);
			yyprint("\tadd\n");
		}
        }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 672 "subc.y"
    {
                REDUCE("unary->unary STRUCTOP ID");
                (yyval.declptr) = STRUCTOPdecl((yyvsp[(1) - (3)].declptr), (yyvsp[(3) - (3)].idptr));
		if((yyval.declptr)!=NULL){
			yyprint("\tfetch\n");	// addr of ptrto
			yyprint("\tpush_const %d\n", (yyval.declptr)->offset);
			yyprint("\tadd\n");
		}
        }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 681 "subc.y"
    {
                REDUCE("unary->unary '(' args ')'");
                (yyval.declptr) = checkfunctioncall((yyvsp[(1) - (4)].declptr),(yyvsp[(3) - (4)].declptr));
		if((yyval.declptr)!=NULL){
			yyprint("\tshift_sp %d\n", findcurrentdecl(returnid)->size);
			yyprint("\tpush_const label_%d\n", block_num);
		}
		
        }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 690 "subc.y"
    {
                REDUCE("unary->unary '(' ')'");
                (yyval.declptr) = checkfunctioncall((yyvsp[(1) - (3)].declptr), NULL);
        }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 695 "subc.y"
    {
                REDUCE("args->expr");
                (yyval.declptr) = makeconstdecl((yyvsp[(1) - (1)].declptr)->type);
        }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 699 "subc.y"
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
        }
    break;



/* Line 1806 of yacc.c  */
#line 2675 "subc.tab.c"
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 715 "subc.y"


/*  Additional C Codes 
        Implemnt REDUCE function here */

int    yyerror (char* s)
{
        fprintf (stderr, "%s\n", s);
}

int 	yyprint(const char* format, ...)
{
		va_list arg;
		
		va_start(arg, format);
		vfprintf (stdout, format, arg);
		va_end(arg);
}

void    REDUCE( char* s)
{
        //printf("%s\n",s);
}


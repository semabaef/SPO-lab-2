/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     ARRAY = 259,
     OF = 260,
     AP = 261,
     SOP = 262,
     SCP = 263,
     OP = 264,
     CP = 265,
     MINUS = 266,
     NOT = 267,
     BIN_EQUALS = 268,
     BIN_GREATER = 269,
     BIN_LESS = 270,
     BIN_MOD = 271,
     BIN_DIV = 272,
     BIN_MUL = 273,
     BIN_PLUS = 274,
     BIN_OR = 275,
     BIN_AND = 276,
     ASSIGMENT = 277,
     TRUE = 278,
     FALSE = 279,
     STR = 280,
     CHAR = 281,
     HEX = 282,
     BIN = 283,
     DEC = 284,
     METHOD = 285,
     WHILE = 286,
     REPEAT = 287,
     DO = 288,
     BREAK = 289,
     UNTIL = 290,
     IF = 291,
     THEN = 292,
     ELSE = 293,
     COLON = 294,
     SEMICOLON = 295,
     COMMA = 296,
     VAR = 297,
     BEGINING = 298,
     END = 299,
     TYPE = 300
   };
#endif
/* Tokens.  */
#define IDENT 258
#define ARRAY 259
#define OF 260
#define AP 261
#define SOP 262
#define SCP 263
#define OP 264
#define CP 265
#define MINUS 266
#define NOT 267
#define BIN_EQUALS 268
#define BIN_GREATER 269
#define BIN_LESS 270
#define BIN_MOD 271
#define BIN_DIV 272
#define BIN_MUL 273
#define BIN_PLUS 274
#define BIN_OR 275
#define BIN_AND 276
#define ASSIGMENT 277
#define TRUE 278
#define FALSE 279
#define STR 280
#define CHAR 281
#define HEX 282
#define BIN 283
#define DEC 284
#define METHOD 285
#define WHILE 286
#define REPEAT 287
#define DO 288
#define BREAK 289
#define UNTIL 290
#define IF 291
#define THEN 292
#define ELSE 293
#define COLON 294
#define SEMICOLON 295
#define COMMA 296
#define VAR 297
#define BEGINING 298
#define END 299
#define TYPE 300




/* Copy the first part of user declarations.  */
#line 1 "parser/grammer.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <stdbool.h>
  #include <getopt.h>
  #include "abstract_syntax_tree/abstract_syntax_tree.h"
  #include "error/error.h"

  struct ast_node *root;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "parser/grammer.y"
{
  struct ast_node* node;
}
/* Line 193 of yacc.c.  */
#line 201 "grammer.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 214 "grammer.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    15,    17,    21,    22,
      25,    28,    33,    37,    39,    44,    51,    55,    57,    59,
      63,    65,    67,    69,    71,    73,    78,    80,    82,    84,
      86,    88,    90,    95,   102,   103,   106,   110,   115,   116,
     119,   123,   128,   134,   137,   140,   143,   146,   150,   152,
     154,   156,   158,   160,   162,   164,   167,   170,   174,   178,
     182,   186,   190,   195,   200,   204,   208,   212,   216,   220,
     225,   226,   228,   232,   234,   239,   241,   243,   245,   247,
     249,   251,   253
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    -1,    47,    48,    -1,    30,    53,    49,
      -1,    30,    53,    40,    -1,    63,    -1,    42,    50,    63,
      -1,    -1,    50,    51,    -1,    52,    40,    -1,    52,    39,
      56,    40,    -1,     3,    41,    52,    -1,     3,    -1,     3,
       9,    54,    10,    -1,     3,     9,    54,    10,    39,    56,
      -1,    55,    41,    54,    -1,    55,    -1,     3,    -1,     3,
      39,    56,    -1,    57,    -1,    58,    -1,    59,    -1,    45,
      -1,     3,    -1,     4,     6,     5,    56,    -1,    61,    -1,
      63,    -1,    65,    -1,    66,    -1,    68,    -1,    69,    -1,
      36,    71,    37,    60,    -1,    36,    71,    37,    60,    38,
      60,    -1,    -1,    60,    62,    -1,    43,    44,    40,    -1,
      43,    64,    44,    40,    -1,    -1,    60,    64,    -1,    67,
      33,    62,    -1,    32,    62,    67,    40,    -1,    32,    62,
      35,    71,    40,    -1,    31,    71,    -1,    34,    40,    -1,
      71,    40,    -1,    70,    40,    -1,    79,    22,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    78,    -1,
      79,    -1,    80,    -1,    11,    71,    -1,    12,    71,    -1,
      71,    19,    71,    -1,    71,    11,    71,    -1,    71,    18,
      71,    -1,    71,    17,    71,    -1,    71,    16,    71,    -1,
      71,    13,    13,    71,    -1,    71,    12,    13,    71,    -1,
      71,    15,    71,    -1,    71,    14,    71,    -1,    71,    21,
      71,    -1,    71,    20,    71,    -1,     9,    71,    10,    -1,
       3,     9,    76,    10,    -1,    -1,    77,    -1,    71,    41,
      77,    -1,    71,    -1,    71,     7,    77,     8,    -1,     3,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    76,    79,    80,    83,    84,    87,    88,
      94,    95,    98,    99,   102,   103,   106,   107,   110,   111,
     114,   115,   116,   120,   124,   128,   131,   132,   133,   134,
     135,   136,   139,   140,   143,   144,   147,   148,   151,   152,
     156,   159,   160,   162,   164,   167,   168,   171,   173,   174,
     175,   176,   177,   178,   179,   182,   183,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   199,   202,
     205,   206,   209,   210,   213,   216,   219,   220,   221,   222,
     223,   224,   225
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "ARRAY", "OF", "AP", "SOP",
  "SCP", "OP", "CP", "MINUS", "NOT", "BIN_EQUALS", "BIN_GREATER",
  "BIN_LESS", "BIN_MOD", "BIN_DIV", "BIN_MUL", "BIN_PLUS", "BIN_OR",
  "BIN_AND", "ASSIGMENT", "TRUE", "FALSE", "STR", "CHAR", "HEX", "BIN",
  "DEC", "METHOD", "WHILE", "REPEAT", "DO", "BREAK", "UNTIL", "IF", "THEN",
  "ELSE", "COLON", "SEMICOLON", "COMMA", "VAR", "BEGINING", "END", "TYPE",
  "$accept", "source", "source_item", "body", "body_list_var", "body_item",
  "list_var", "function_signature", "list_arg", "list_arg_item",
  "type_ref", "builtin", "custom", "array", "statement", "if",
  "list_statements", "block", "block_item", "while", "do", "we", "break",
  "expression", "assigment", "expr", "unary", "binary", "braces", "call",
  "call_list", "list_expr", "indexer", "place", "literal", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    49,    49,    50,    50,
      51,    51,    52,    52,    53,    53,    54,    54,    55,    55,
      56,    56,    56,    57,    58,    59,    60,    60,    60,    60,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    66,    66,    67,    68,    69,    69,    70,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      76,    76,    77,    77,    78,    79,    80,    80,    80,    80,
      80,    80,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     1,     3,     0,     2,
       2,     4,     3,     1,     4,     6,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     4,     6,     0,     2,     3,     4,     0,     2,
       3,     4,     5,     2,     2,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     3,
       3,     3,     4,     4,     3,     3,     3,     3,     3,     4,
       0,     1,     3,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     0,     0,     0,     5,     8,
       0,     4,     6,    18,     0,    17,     0,    75,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,     0,    34,
       0,     0,     0,    38,    26,    27,     0,    28,    29,     0,
      30,    31,     0,     0,    48,    49,    50,    51,    52,    53,
      54,     0,    14,     0,    13,     9,     0,     7,    70,     0,
      53,    55,    56,    43,    34,     0,    44,     0,    36,    39,
       0,    34,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    24,     0,    23,
      19,    20,    21,    22,     0,    16,     0,     0,    10,    73,
       0,    71,    68,    35,     0,     0,     0,    37,    40,     0,
      58,     0,     0,    65,    64,    61,    60,    59,    57,    67,
      66,    47,     0,    15,    12,     0,     0,    69,     0,    41,
      32,    74,    63,    62,     0,    11,    72,    42,     0,    25,
      33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     4,    11,    16,    55,    56,     6,    14,    15,
      90,    91,    92,    93,    64,    34,    65,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     100,   101,    48,    60,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -85
static const yytype_int16 yypact[] =
{
     -85,    18,   -85,     2,   -85,    16,    34,    13,   -85,   -85,
      80,   -85,   -85,    -3,    31,    11,     8,    35,   184,   184,
     184,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   184,     3,
      20,   184,    24,     3,   -85,   -85,     9,   -85,   -85,    25,
     -85,   -85,    38,   134,   -85,   -85,   -85,   -85,   -85,    57,
     -85,     0,    26,    13,    39,   -85,   -18,   -85,   184,   207,
     -85,   237,   237,   222,     3,     7,   -85,   165,   -85,   -85,
      41,     3,   -85,   184,   184,    69,    71,   184,   184,   184,
     184,   184,   184,   184,   184,   -85,   184,   -85,    79,   -85,
     -85,   -85,   -85,   -85,     0,   -85,    83,     0,   -85,   119,
      77,   -85,   -85,   -85,   184,    48,     3,   -85,   -85,    82,
     237,   184,   184,    36,    36,    36,    36,    36,    36,    87,
      87,   222,    90,   -85,   -85,    58,   184,   -85,   150,   -85,
      61,   -85,    36,    36,     0,   -85,   -85,   -85,     3,   -85,
     -85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,   -85,   -85,   -85,   -85,     6,   -85,    60,   -85,
     -84,   -85,   -85,   -85,    -9,   -85,   -31,    43,    84,   -85,
     -85,    45,   -85,   -85,   -85,   -11,   -85,   -85,   -85,   -85,
     -85,   -71,   -85,   -10,   -85
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      49,    33,   109,    87,    88,     5,    17,    59,    61,    62,
     123,    54,    18,   125,    19,    20,    13,    63,     2,    49,
      67,    97,    98,    49,    33,     7,    21,    22,    23,    24,
      25,    26,    27,   103,    28,    29,    51,    30,    28,    31,
     108,    52,   104,    73,    58,    89,    10,    99,     3,    12,
     139,    10,    53,    70,    49,   136,    83,    84,    71,    57,
      66,    49,    99,   110,    68,    94,   113,   114,   115,   116,
     117,   118,   119,   120,     8,   121,     9,    10,    72,    86,
      96,   107,   111,    17,   112,   122,    54,   127,   129,    18,
     131,    19,    20,   128,    73,   134,    49,   130,   135,   138,
     132,   133,   124,    21,    22,    23,    24,    25,    26,    27,
     105,    28,    29,    95,    30,    99,    31,    69,     0,     0,
       0,     0,     0,    10,    32,     0,    73,     0,    49,   140,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    73,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,     0,    73,     0,     0,
     126,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    73,     0,    85,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    17,     0,     0,
     137,     0,     0,    18,     0,    19,    20,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    73,     0,     0,   102,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    73,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    73,     0,     0,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
      10,    10,    73,     3,     4,     3,     3,    18,    19,    20,
      94,     3,     9,    97,    11,    12,     3,    28,     0,    29,
      31,    39,    40,    33,    33,     9,    23,    24,    25,    26,
      27,    28,    29,    64,    31,    32,    39,    34,    31,    36,
      71,    10,    35,     7,     9,    45,    43,    58,    30,     6,
     134,    43,    41,    44,    64,   126,    20,    21,    33,    16,
      40,    71,    73,    74,    40,    39,    77,    78,    79,    80,
      81,    82,    83,    84,    40,    86,    42,    43,    40,    22,
      41,    40,    13,     3,    13,     6,     3,    10,    40,     9,
       8,    11,    12,   104,     7,     5,   106,   106,    40,    38,
     111,   112,    96,    23,    24,    25,    26,    27,    28,    29,
      65,    31,    32,    53,    34,   126,    36,    33,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,     7,    -1,   138,   138,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,     7,    -1,    -1,
      41,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     7,    -1,    40,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     3,    -1,    -1,
      40,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,     0,    30,    48,     3,    53,     9,    40,    42,
      43,    49,    63,     3,    54,    55,    50,     3,     9,    11,
      12,    23,    24,    25,    26,    27,    28,    29,    31,    32,
      34,    36,    44,    60,    61,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    78,    79,
      80,    39,    10,    41,     3,    51,    52,    63,     9,    71,
      79,    71,    71,    71,    60,    62,    40,    71,    40,    64,
      44,    33,    40,     7,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    40,    22,     3,     4,    45,
      56,    57,    58,    59,    39,    54,    41,    39,    40,    71,
      76,    77,    10,    62,    35,    67,    37,    40,    62,    77,
      71,    13,    13,    71,    71,    71,    71,    71,    71,    71,
      71,    71,     6,    56,    52,    56,    41,    10,    71,    40,
      60,     8,    71,    71,     5,    40,    77,    40,    38,    56,
      60
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 75 "parser/grammer.y"
    {(yyval.node) = root = NULL;}
    break;

  case 3:
#line 76 "parser/grammer.y"
    {(yyval.node) = root = make_source((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));}
    break;

  case 4:
#line 79 "parser/grammer.y"
    {(yyval.node) = make_common_node("source_item", (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 5:
#line 80 "parser/grammer.y"
    {(yyval.node) = make_common_node("source_item", (yyvsp[(2) - (3)].node), NULL);}
    break;

  case 6:
#line 83 "parser/grammer.y"
    {(yyval.node) = make_common_node("body", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 7:
#line 84 "parser/grammer.y"
    {(yyval.node) = make_common_node("body", (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 8:
#line 87 "parser/grammer.y"
    { (yyval.node) = NULL; ;}
    break;

  case 9:
#line 88 "parser/grammer.y"
    {(yyval.node) = make_common_node("body_list_var", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));}
    break;

  case 10:
#line 94 "parser/grammer.y"
    {(yyval.node) = make_common_node("body_item", (yyvsp[(1) - (2)].node), NULL);}
    break;

  case 11:
#line 95 "parser/grammer.y"
    {(yyval.node) = make_common_node("body_item", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));}
    break;

  case 12:
#line 98 "parser/grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 13:
#line 99 "parser/grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 14:
#line 102 "parser/grammer.y"
    {(yyval.node) = make_function_signature((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), NULL);}
    break;

  case 15:
#line 103 "parser/grammer.y"
    {(yyval.node) = make_function_signature((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));}
    break;

  case 16:
#line 106 "parser/grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 17:
#line 107 "parser/grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 18:
#line 110 "parser/grammer.y"
    {(yyval.node) = make_common_node("list_item", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 19:
#line 111 "parser/grammer.y"
    {(yyval.node) = make_common_node("list_item", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 20:
#line 114 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 21:
#line 115 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 22:
#line 116 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 23:
#line 120 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 24:
#line 124 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 25:
#line 128 "parser/grammer.y"
    {(yyval.node) = make_common_node("array", (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));}
    break;

  case 26:
#line 131 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 27:
#line 132 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 28:
#line 133 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 29:
#line 134 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 30:
#line 135 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 31:
#line 136 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 32:
#line 139 "parser/grammer.y"
    {(yyval.node) = make_branch_node((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node), NULL);}
    break;

  case 33:
#line 140 "parser/grammer.y"
    {(yyval.node) = make_branch_node((yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));}
    break;

  case 34:
#line 143 "parser/grammer.y"
    {(yyval.node) = NULL;}
    break;

  case 35:
#line 144 "parser/grammer.y"
    {(yyval.node) = make_loop_node("list_statements", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));}
    break;

  case 36:
#line 147 "parser/grammer.y"
    {(yyval.node) = make_block(NULL);}
    break;

  case 37:
#line 148 "parser/grammer.y"
    {(yyval.node) = make_block((yyvsp[(2) - (4)].node));}
    break;

  case 38:
#line 151 "parser/grammer.y"
    {(yyval.node) = NULL;}
    break;

  case 39:
#line 152 "parser/grammer.y"
    {(yyval.node) = make_common_node("block_item", (yyvsp[(2) - (2)].node), (yyvsp[(1) - (2)].node));}
    break;

  case 40:
#line 156 "parser/grammer.y"
    {(yyval.node) = make_loop_node("while", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 41:
#line 159 "parser/grammer.y"
    {(yyval.node) = make_loop_node("do-while", (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));}
    break;

  case 42:
#line 160 "parser/grammer.y"
    {(yyval.node) = make_loop_node("do-until", (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));}
    break;

  case 43:
#line 162 "parser/grammer.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 44:
#line 164 "parser/grammer.y"
    {(yyval.node) = make_common_node("break", NULL, NULL);}
    break;

  case 45:
#line 167 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (2)].node);}
    break;

  case 46:
#line 168 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (2)].node);}
    break;

  case 47:
#line 171 "parser/grammer.y"
    {(yyval.node) = make_assigment((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 48:
#line 173 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 49:
#line 174 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 50:
#line 175 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 51:
#line 176 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 52:
#line 177 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 53:
#line 178 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 54:
#line 179 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 55:
#line 182 "parser/grammer.y"
    {(yyval.node) = make_expr_node("MINUS", (yyvsp[(2) - (2)].node), NULL);}
    break;

  case 56:
#line 183 "parser/grammer.y"
    {(yyval.node) = make_expr_node("NOT", (yyvsp[(2) - (2)].node), NULL);}
    break;

  case 57:
#line 186 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BIN_PLUS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 58:
#line 187 "parser/grammer.y"
    {(yyval.node) = make_expr_node("MINUS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 59:
#line 188 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BIN_MUL", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 60:
#line 189 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BIN_DIV", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 61:
#line 190 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BIN_MOD", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 62:
#line 191 "parser/grammer.y"
    {(yyval.node) = make_expr_node("EQUALITY", (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));}
    break;

  case 63:
#line 192 "parser/grammer.y"
    {(yyval.node) = make_expr_node("NOTEQUAL", (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));}
    break;

  case 64:
#line 193 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BIN_LESS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 65:
#line 194 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BIN_GREATER", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 66:
#line 195 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BIN_AND", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 67:
#line 196 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BIN_OR", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 68:
#line 199 "parser/grammer.y"
    {(yyval.node) = make_expr_node("BRACES", (yyvsp[(2) - (3)].node), NULL);}
    break;

  case 69:
#line 202 "parser/grammer.y"
    {(yyval.node) = make_common_node("call", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));}
    break;

  case 70:
#line 205 "parser/grammer.y"
    {(yyval.node) = NULL;}
    break;

  case 71:
#line 206 "parser/grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 72:
#line 209 "parser/grammer.y"
    {(yyval.node) = make_common_node("expr", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 73:
#line 210 "parser/grammer.y"
    {(yyval.node) = make_common_node("expr", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 74:
#line 213 "parser/grammer.y"
    {(yyval.node) = make_common_node("indexer", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));}
    break;

  case 75:
#line 216 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 76:
#line 219 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 77:
#line 220 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 78:
#line 221 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 79:
#line 222 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 80:
#line 223 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 81:
#line 224 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 82:
#line 225 "parser/grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;


/* Line 1267 of yacc.c.  */
#line 1972 "grammer.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 227 "parser/grammer.y"


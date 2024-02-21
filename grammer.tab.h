#include "abstract_syntax_tree/abstract_syntax_tree.h"
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "parser/grammer.y"
{
  struct ast_node* node;
}
/* Line 1529 of yacc.c.  */
#line 143 "grammer.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


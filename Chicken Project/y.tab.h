/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VARIABLE = 259,
     STRING = 260,
     WHILE = 261,
     FOR = 262,
     IF = 263,
     THEN = 264,
     PRINT = 265,
     ASSIGN = 266,
     EXIT = 267,
     RANDOM = 268,
     PI = 269,
     SCAN = 270,
     LOG = 271,
     EXP = 272,
     SQRT = 273,
     FLOOR = 274,
     CEIL = 275,
     ABS = 276,
     SIN = 277,
     ASIN = 278,
     COS = 279,
     ACOS = 280,
     TAN = 281,
     ATAN = 282,
     IFX = 283,
     ELSE = 284,
     OR = 285,
     AND = 286,
     NE = 287,
     LE = 288,
     GE = 289,
     NOT = 290,
     UMINUS = 291
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define VARIABLE 259
#define STRING 260
#define WHILE 261
#define FOR 262
#define IF 263
#define THEN 264
#define PRINT 265
#define ASSIGN 266
#define EXIT 267
#define RANDOM 268
#define PI 269
#define SCAN 270
#define LOG 271
#define EXP 272
#define SQRT 273
#define FLOOR 274
#define CEIL 275
#define ABS 276
#define SIN 277
#define ASIN 278
#define COS 279
#define ACOS 280
#define TAN 281
#define ATAN 282
#define IFX 283
#define ELSE 284
#define OR 285
#define AND 286
#define NE 287
#define LE 288
#define GE 289
#define NOT 290
#define UMINUS 291



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 27 "chicken.l.txt"

    double dValue;
    char *sValue;
    char *vName;
    nodeType *nPtr;


/* Line 2058 of yacc.c  */
#line 137 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_SINTACTICO_TAB_H_INCLUDED
# define YY_YY_SINTACTICO_TAB_H_INCLUDED
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
    NUMEROR = 258,
    NUMEROE = 259,
    CHAR_DATATYPE = 260,
    INT_DATATYPE = 261,
    STRING_DATATYPE = 262,
    FLOAT_DATATYPE = 263,
    IDENTIFICADOR = 264,
    CADENA = 265,
    CHAR = 266,
    OPERATION = 267,
    EQUALARITHMETIC_OPERATORS = 268,
    ARITHMETIC_OPERATOR = 269,
    PARA = 270,
    PARC = 271,
    COMA = 272,
    IGUAL = 273,
    MAYOR = 274,
    CORCHA = 275,
    CORCHC = 276,
    LLAVEA = 277,
    LLAVEC = 278,
    PUNTOCOMA = 279,
    NO = 280,
    DOSPUNTOS = 281,
    MENOR = 282,
    PIPE = 283,
    AMPERSAND = 284,
    OPERATOR = 285,
    INC_DEC = 286,
    OPERATOR_FLUJO_IN = 287,
    OPERATOR_FLUJO_OUT = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "sintactico.y" /* yacc.c:1909  */

  float real;
  int numero;
  char* texto;

#line 94 "sintactico.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */

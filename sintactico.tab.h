/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTACTICO_TAB_H_INCLUDED
# define YY_YY_SINTACTICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMEROR = 258,                 /* NUMEROR  */
    NUMEROE = 259,                 /* NUMEROE  */
    CHAR_DATATYPE = 260,           /* CHAR_DATATYPE  */
    INT_DATATYPE = 261,            /* INT_DATATYPE  */
    STRING_DATATYPE = 262,         /* STRING_DATATYPE  */
    FLOAT_DATATYPE = 263,          /* FLOAT_DATATYPE  */
    IDENTIFICADOR = 264,           /* IDENTIFICADOR  */
    CADENA = 265,                  /* CADENA  */
    CHAR = 266,                    /* CHAR  */
    OPERATION = 267,               /* OPERATION  */
    EQUALARITHMETIC_OPERATORS = 268, /* EQUALARITHMETIC_OPERATORS  */
    ARITHMETIC_OPERATOR = 269,     /* ARITHMETIC_OPERATOR  */
    PARA = 270,                    /* PARA  */
    PARC = 271,                    /* PARC  */
    COMA = 272,                    /* COMA  */
    IGUAL = 273,                   /* IGUAL  */
    MAYOR = 274,                   /* MAYOR  */
    CORCHA = 275,                  /* CORCHA  */
    CORCHC = 276,                  /* CORCHC  */
    LLAVEA = 277,                  /* LLAVEA  */
    LLAVEC = 278,                  /* LLAVEC  */
    PUNTOCOMA = 279,               /* PUNTOCOMA  */
    NO = 280,                      /* NO  */
    DOSPUNTOS = 281,               /* DOSPUNTOS  */
    MENOR = 282,                   /* MENOR  */
    PIPE = 283,                    /* PIPE  */
    AMPERSAND = 284,               /* AMPERSAND  */
    OPERATOR = 285,                /* OPERATOR  */
    INC_DEC = 286,                 /* INC_DEC  */
    OPERATOR_FLUJO_IN = 287,       /* OPERATOR_FLUJO_IN  */
    OPERATOR_FLUJO_OUT = 288       /* OPERATOR_FLUJO_OUT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "sintactico.y"

  float real;
  int numero;
  char* texto;

#line 103 "sintactico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */

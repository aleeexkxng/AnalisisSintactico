/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintactico.y"


  #include <stdio.h>
  #include <stdlib.h>
  #include <iostream>
  #include <math.h>
  #include <list>
  #include "string.h"
  #include <string>
  extern int yylex(void);
  extern char *yytext;
  extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);
  void printList();
  std::list<std::string> vInt;
  std::list<std::string> vChar;
  std::list<std::string> vString;
  std::list<std::string> vFloat;
  
  

#line 94 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUMEROR 258
#define NUMEROE 259
#define CHAR_DATATYPE 260
#define INT_DATATYPE 261
#define STRING_DATATYPE 262
#define FLOAT_DATATYPE 263
#define IDENTIFICADOR 264
#define CADENA 265
#define CHAR 266
#define OPERATION 267
#define EQUALARITHMETIC_OPERATORS 268
#define ARITHMETIC_OPERATOR 269
#define PARA 270
#define PARC 271
#define COMA 272
#define IGUAL 273
#define MAYOR 274
#define CORCHA 275
#define CORCHC 276
#define LLAVEA 277
#define LLAVEC 278
#define PUNTOCOMA 279
#define NO 280
#define DOSPUNTOS 281
#define MENOR 282
#define PIPE 283
#define AMPERSAND 284
#define OPERATOR 285
#define INC_DEC 286
#define OPERATOR_FLUJO_IN 287
#define OPERATOR_FLUJO_OUT 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "sintactico.y"

  float real;
  int numero;
  char* texto;

#line 219 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMEROR = 3,                    /* NUMEROR  */
  YYSYMBOL_NUMEROE = 4,                    /* NUMEROE  */
  YYSYMBOL_CHAR_DATATYPE = 5,              /* CHAR_DATATYPE  */
  YYSYMBOL_INT_DATATYPE = 6,               /* INT_DATATYPE  */
  YYSYMBOL_STRING_DATATYPE = 7,            /* STRING_DATATYPE  */
  YYSYMBOL_FLOAT_DATATYPE = 8,             /* FLOAT_DATATYPE  */
  YYSYMBOL_IDENTIFICADOR = 9,              /* IDENTIFICADOR  */
  YYSYMBOL_CADENA = 10,                    /* CADENA  */
  YYSYMBOL_CHAR = 11,                      /* CHAR  */
  YYSYMBOL_OPERATION = 12,                 /* OPERATION  */
  YYSYMBOL_EQUALARITHMETIC_OPERATORS = 13, /* EQUALARITHMETIC_OPERATORS  */
  YYSYMBOL_ARITHMETIC_OPERATOR = 14,       /* ARITHMETIC_OPERATOR  */
  YYSYMBOL_PARA = 15,                      /* PARA  */
  YYSYMBOL_PARC = 16,                      /* PARC  */
  YYSYMBOL_COMA = 17,                      /* COMA  */
  YYSYMBOL_IGUAL = 18,                     /* IGUAL  */
  YYSYMBOL_MAYOR = 19,                     /* MAYOR  */
  YYSYMBOL_CORCHA = 20,                    /* CORCHA  */
  YYSYMBOL_CORCHC = 21,                    /* CORCHC  */
  YYSYMBOL_LLAVEA = 22,                    /* LLAVEA  */
  YYSYMBOL_LLAVEC = 23,                    /* LLAVEC  */
  YYSYMBOL_PUNTOCOMA = 24,                 /* PUNTOCOMA  */
  YYSYMBOL_NO = 25,                        /* NO  */
  YYSYMBOL_DOSPUNTOS = 26,                 /* DOSPUNTOS  */
  YYSYMBOL_MENOR = 27,                     /* MENOR  */
  YYSYMBOL_PIPE = 28,                      /* PIPE  */
  YYSYMBOL_AMPERSAND = 29,                 /* AMPERSAND  */
  YYSYMBOL_OPERATOR = 30,                  /* OPERATOR  */
  YYSYMBOL_INC_DEC = 31,                   /* INC_DEC  */
  YYSYMBOL_OPERATOR_FLUJO_IN = 32,         /* OPERATOR_FLUJO_IN  */
  YYSYMBOL_OPERATOR_FLUJO_OUT = 33,        /* OPERATOR_FLUJO_OUT  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_lista_i = 35,                   /* lista_i  */
  YYSYMBOL_i = 36,                         /* i  */
  YYSYMBOL_cin_aux = 37,                   /* cin_aux  */
  YYSYMBOL_cout_aux = 38,                  /* cout_aux  */
  YYSYMBOL_switch_aux = 39,                /* switch_aux  */
  YYSYMBOL_switch = 40,                    /* switch  */
  YYSYMBOL_cin = 41,                       /* cin  */
  YYSYMBOL_cout = 42,                      /* cout  */
  YYSYMBOL_asignacion = 43,                /* asignacion  */
  YYSYMBOL_incremento_decremento = 44,     /* incremento_decremento  */
  YYSYMBOL_incremento_decremento_for = 45, /* incremento_decremento_for  */
  YYSYMBOL_comparacion = 46,               /* comparacion  */
  YYSYMBOL_ciclo_for = 47,                 /* ciclo_for  */
  YYSYMBOL_ciclo_while = 48,               /* ciclo_while  */
  YYSYMBOL_ciclo_dowhile = 49,             /* ciclo_dowhile  */
  YYSYMBOL_declaraciones = 50,             /* declaraciones  */
  YYSYMBOL_condicion_if = 51,              /* condicion_if  */
  YYSYMBOL_sino_else = 52,                 /* sino_else  */
  YYSYMBOL_funcion = 53                    /* funcion  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    89,    89,    90,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   108,   109,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     124,   125,   128,   131,   134,   137,   138,   139,   140,   141,
     142,   143,   144,   147,   150,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   167,   168,   169,
     170,   171,   172,   173,   176,   177,   180,   181,   184,   185,
     186,   187,   188,   191,   192,   193,   196,   197,   200,   201,
     202,   203,   204,   205
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMEROR", "NUMEROE",
  "CHAR_DATATYPE", "INT_DATATYPE", "STRING_DATATYPE", "FLOAT_DATATYPE",
  "IDENTIFICADOR", "CADENA", "CHAR", "OPERATION",
  "EQUALARITHMETIC_OPERATORS", "ARITHMETIC_OPERATOR", "PARA", "PARC",
  "COMA", "IGUAL", "MAYOR", "CORCHA", "CORCHC", "LLAVEA", "LLAVEC",
  "PUNTOCOMA", "NO", "DOSPUNTOS", "MENOR", "PIPE", "AMPERSAND", "OPERATOR",
  "INC_DEC", "OPERATOR_FLUJO_IN", "OPERATOR_FLUJO_OUT", "$accept",
  "lista_i", "i", "cin_aux", "cout_aux", "switch_aux", "switch", "cin",
  "cout", "asignacion", "incremento_decremento",
  "incremento_decremento_for", "comparacion", "ciclo_for", "ciclo_while",
  "ciclo_dowhile", "declaraciones", "condicion_if", "sino_else", "funcion", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   -21,     5,    -7,    63,  -111,  -111,  -111,  -111,    16,
    -111,    24,  -111,  -111,    35,    41,  -111,  -111,  -111,  -111,
    -111,    74,   116,    22,    25,    12,    53,    90,    43,    99,
     115,    71,   101,   102,  -111,  -111,  -111,  -111,  -111,  -111,
      69,    80,  -111,  -111,    26,   106,    -5,    17,    38,  -111,
    -111,  -111,  -111,  -111,  -111,    64,  -111,  -111,    96,   118,
      97,  -111,  -111,    98,  -111,   100,   103,   103,   103,   103,
     103,  -111,  -111,   105,    93,  -111,  -111,  -111,  -111,     0,
     107,    52,   120,   109,   112,     8,   113,   110,   108,  -111,
    -111,  -111,  -111,   124,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,   117,   122,   119,  -111,   114,   121,
     123,  -111,   125,    91,   130,    77,   126,    78,   127,   129,
     138,   138,    79,  -111,   132,  -111,   141,  -111,   131,    46,
     133,   128,   134,   137,  -111,   135,   142,    87,  -111,   144,
     145,  -111,   146,    94,  -111,  -111,   140,  -111,   143,   147,
     148,   150,   151,   149,   152,   153,  -111,   154,  -111,  -111,
    -111,   155,  -111,   156,   157,   159,   160,   161,  -111,  -111,
    -111,  -111,   162,  -111,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    77,     0,     3,    11,     9,    10,     0,
      12,     0,     5,     7,     0,     0,    15,    16,    14,    17,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     4,     6,     8,    13,
       0,     0,    40,    39,     0,     0,     0,     0,     0,    37,
      35,    36,    41,    42,    38,     0,    53,    54,     0,    76,
       0,    55,    56,     0,    43,    19,    27,    26,    25,    28,
      29,    33,    34,     0,     0,    69,    68,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      45,    50,    49,     0,    52,    51,    48,    47,    18,    24,
      23,    20,    21,    22,     0,     0,     0,    78,     0,     0,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,    81,    31,    83,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,    64,     0,
       0,    67,     0,     0,    30,    32,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,    66,     0,    79,    61,
      62,     0,    63,     0,     0,     0,     0,     0,    82,    58,
      59,    60,     0,    74,    75,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   163,   111,    44,    42,  -111,  -111,  -111,   -22,
    -111,  -110,   -23,  -111,  -111,  -111,  -111,  -111,  -111,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    32,    33,   110,     6,     7,     8,     9,
      10,   133,    11,    12,    13,    14,    15,    16,    17,    18
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,    47,    21,    19,    81,     1,    22,   136,    23,   108,
       2,    24,    25,     3,    20,    26,    56,    81,    27,    82,
      28,    57,   109,    83,    29,    30,    31,   153,    49,    50,
      58,    44,   117,    84,    51,    52,    53,    54,    45,    22,
      36,    85,    79,    55,    24,    25,    46,    61,    37,    49,
      50,    27,    62,    28,    86,    51,    52,    53,    54,    38,
     114,    63,   118,    34,     1,    39,    87,    88,    89,     2,
     112,    25,     3,    90,    66,    67,    59,    27,    73,    28,
      68,    69,    70,    75,    76,    74,   131,   131,    81,    40,
      77,    78,    41,   132,   135,   141,   131,   139,   140,   142,
      91,    94,    96,   152,    22,    92,    95,    97,    60,   129,
      99,   100,   101,   102,   103,   106,   157,   107,   158,    42,
      43,   104,   105,    64,    65,    71,    72,    93,    80,   113,
     111,   124,    30,   115,   116,   119,    31,   121,   120,   122,
     126,   123,   125,    55,   127,   128,   130,    81,   143,   134,
     108,   137,   138,   149,   145,   146,   148,   150,   151,   147,
     154,   155,   156,   159,     0,   165,   160,    35,   144,   161,
       0,   162,   163,   164,   166,   167,    98,   168,   169,   170,
     171,   172,     0,   173,   174,   175
};

static const yytype_int16 yycheck[] =
{
      23,    23,     9,    24,     9,     1,    13,   117,    15,     9,
       6,    18,    19,     9,     9,    22,     4,     9,    25,    24,
      27,     9,    22,    46,    31,    32,    33,   137,     3,     4,
      18,     9,    24,    16,     9,    10,    11,    12,    16,    13,
      24,    24,    16,    18,    18,    19,    24,     4,    24,     3,
       4,    25,     9,    27,    16,     9,    10,    11,    12,    24,
      82,    18,    85,     0,     1,    24,    28,    29,     4,     6,
      18,    19,     9,     9,     3,     4,    23,    25,     9,    27,
       9,    10,    11,     3,     4,    16,     9,     9,     9,    15,
      10,    11,    18,    16,    16,    16,     9,   120,   121,   122,
       4,     4,     4,    16,    13,     9,     9,     9,    18,    18,
      66,    67,    68,    69,    70,    22,    22,    24,    24,     3,
       4,    16,    17,    24,     9,    24,    24,     9,    22,     9,
      23,     9,    32,    24,    22,    22,    33,    29,    28,    15,
      26,    24,    23,    18,    23,    22,    16,     9,    16,    23,
       9,    24,    23,    16,    23,    22,    22,    22,    16,    31,
      16,    16,    16,    23,    -1,    16,    23,     4,   126,    22,
      -1,    23,    22,    22,    22,    22,    65,    23,    23,    23,
      23,    22,    -1,    23,    23,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,     9,    35,    36,    40,    41,    42,    43,
      44,    46,    47,    48,    49,    50,    51,    52,    53,    24,
       9,     9,    13,    15,    18,    19,    22,    25,    27,    31,
      32,    33,    37,    38,     0,    36,    24,    24,    24,    24,
      15,    18,     3,     4,     9,    16,    24,    43,    46,     3,
       4,     9,    10,    11,    12,    18,     4,     9,    18,    23,
      18,     4,     9,    18,    24,     9,     3,     4,     9,    10,
      11,    24,    24,     9,    16,     3,     4,    10,    11,    16,
      22,     9,    24,    46,    16,    24,    16,    28,    29,     4,
       9,     4,     9,     9,     4,     9,     4,     9,    37,    38,
      38,    38,    38,    38,    16,    17,    22,    24,     9,    22,
      39,    23,    18,     9,    43,    24,    22,    24,    46,    22,
      28,    29,    15,    24,     9,    23,    26,    23,    22,    18,
      16,     9,    16,    45,    23,    16,    45,    24,    23,    46,
      46,    16,    46,    16,    39,    23,    22,    31,    22,    16,
      22,    16,    16,    45,    16,    16,    16,    22,    24,    23,
      23,    22,    23,    22,    22,    16,    22,    22,    23,    23,
      23,    23,    22,    23,    23,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    35,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    37,    37,
      38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
      39,    39,    40,    41,    42,    43,    43,    43,    43,    43,
      43,    43,    43,    44,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    49,    49,    50,    50,
      50,    50,    50,    51,    51,    51,    52,    52,    53,    53,
      53,    53,    53,    53
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     3,     2,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       3,     2,     7,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     3,     3,     3,    10,     9,     9,
       9,     8,     8,     8,     6,     5,     7,     6,     4,     4,
       4,     4,     2,     6,     9,     9,     3,     1,     5,     8,
       6,     6,     9,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 32: /* switch: IDENTIFICADOR PARA IDENTIFICADOR PARC switch_aux LLAVEA LLAVEC  */
#line 128 "sintactico.y"
                                                                               {printf("switch correcto\n");}
#line 1370 "y.tab.c"
    break;

  case 33: /* cin: IDENTIFICADOR cin_aux PUNTOCOMA  */
#line 131 "sintactico.y"
                                                {printf("cin ejecutado correctamente\n");}
#line 1376 "y.tab.c"
    break;

  case 34: /* cout: IDENTIFICADOR cout_aux PUNTOCOMA  */
#line 134 "sintactico.y"
                                                 {printf("cout ejecutado correctamente\n");}
#line 1382 "y.tab.c"
    break;

  case 35: /* asignacion: IDENTIFICADOR IGUAL NUMEROE  */
#line 137 "sintactico.y"
                                                 {printf(" Valor %d asignado coreectamente \n",(yyvsp[0].numero));}
#line 1388 "y.tab.c"
    break;

  case 36: /* asignacion: IDENTIFICADOR IGUAL IDENTIFICADOR  */
#line 138 "sintactico.y"
                                                    {printf("Linea aceptada\n");}
#line 1394 "y.tab.c"
    break;

  case 37: /* asignacion: IDENTIFICADOR IGUAL NUMEROR  */
#line 139 "sintactico.y"
                                                              {printf(" Valor %1.0f asignado coreectamente\n",(yyvsp[0].real));}
#line 1400 "y.tab.c"
    break;

  case 38: /* asignacion: IDENTIFICADOR IGUAL OPERATION  */
#line 140 "sintactico.y"
                                                       {printf("Valor de operacion asiganado correctamente\n");}
#line 1406 "y.tab.c"
    break;

  case 39: /* asignacion: IDENTIFICADOR EQUALARITHMETIC_OPERATORS NUMEROE  */
#line 141 "sintactico.y"
                                                                         {printf("Valor de operacion asiganado correctamente\n");}
#line 1412 "y.tab.c"
    break;

  case 40: /* asignacion: IDENTIFICADOR EQUALARITHMETIC_OPERATORS NUMEROR  */
#line 142 "sintactico.y"
                                                                         {printf("Valor de operacion asiganado correctamente\n");}
#line 1418 "y.tab.c"
    break;

  case 41: /* asignacion: IDENTIFICADOR IGUAL CADENA  */
#line 143 "sintactico.y"
                                                    {printf("Valor %s asiganado correctamente\n", (yyvsp[0].texto));}
#line 1424 "y.tab.c"
    break;

  case 42: /* asignacion: IDENTIFICADOR IGUAL CHAR  */
#line 144 "sintactico.y"
                                                  {printf("Valor %s asiganado correctamente\n", (yyvsp[0].texto));}
#line 1430 "y.tab.c"
    break;

  case 43: /* incremento_decremento: IDENTIFICADOR INC_DEC PUNTOCOMA  */
#line 147 "sintactico.y"
                                                        {printf("Decremento/incremento exito\n");}
#line 1436 "y.tab.c"
    break;

  case 45: /* comparacion: IDENTIFICADOR IGUAL IGUAL IDENTIFICADOR  */
#line 153 "sintactico.y"
                                                        {printf("Comparacion Exitosa\n");}
#line 1442 "y.tab.c"
    break;

  case 46: /* comparacion: IDENTIFICADOR IGUAL IGUAL NUMEROE  */
#line 154 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1448 "y.tab.c"
    break;

  case 47: /* comparacion: IDENTIFICADOR MENOR IGUAL IDENTIFICADOR  */
#line 155 "sintactico.y"
                                                         {printf("Comparacion Exitosa\n");}
#line 1454 "y.tab.c"
    break;

  case 48: /* comparacion: IDENTIFICADOR MENOR IGUAL NUMEROE  */
#line 156 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1460 "y.tab.c"
    break;

  case 49: /* comparacion: IDENTIFICADOR MAYOR IGUAL IDENTIFICADOR  */
#line 157 "sintactico.y"
                                                         {printf("Comparacion Exitosa\n");}
#line 1466 "y.tab.c"
    break;

  case 50: /* comparacion: IDENTIFICADOR MAYOR IGUAL NUMEROE  */
#line 158 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1472 "y.tab.c"
    break;

  case 51: /* comparacion: IDENTIFICADOR NO IGUAL IDENTIFICADOR  */
#line 159 "sintactico.y"
                                                      {printf("Comparacion Exitosa\n");}
#line 1478 "y.tab.c"
    break;

  case 52: /* comparacion: IDENTIFICADOR NO IGUAL NUMEROE  */
#line 160 "sintactico.y"
                                                {printf("Comparacion Exitosa\n");}
#line 1484 "y.tab.c"
    break;

  case 53: /* comparacion: IDENTIFICADOR MAYOR NUMEROE  */
#line 161 "sintactico.y"
                                             {printf("Comparacion Exitosa\n");}
#line 1490 "y.tab.c"
    break;

  case 54: /* comparacion: IDENTIFICADOR MAYOR IDENTIFICADOR  */
#line 162 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1496 "y.tab.c"
    break;

  case 55: /* comparacion: IDENTIFICADOR MENOR NUMEROE  */
#line 163 "sintactico.y"
                                             {printf("Comparacion Exitosa\n");}
#line 1502 "y.tab.c"
    break;

  case 56: /* comparacion: IDENTIFICADOR MENOR IDENTIFICADOR  */
#line 164 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1508 "y.tab.c"
    break;

  case 57: /* ciclo_for: IDENTIFICADOR PARA asignacion PUNTOCOMA comparacion PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  */
#line 167 "sintactico.y"
                                                                                                                            {printf("Ciclo for aceptado\n");}
#line 1514 "y.tab.c"
    break;

  case 58: /* ciclo_for: IDENTIFICADOR PARA PUNTOCOMA comparacion PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  */
#line 168 "sintactico.y"
                                                                                                                  {printf("Ciclo for aceptado\n");}
#line 1520 "y.tab.c"
    break;

  case 59: /* ciclo_for: IDENTIFICADOR PARA asignacion PUNTOCOMA PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  */
#line 169 "sintactico.y"
                                                                                                                 {printf("Ciclo for aceptado\n");}
#line 1526 "y.tab.c"
    break;

  case 60: /* ciclo_for: IDENTIFICADOR PARA asignacion PUNTOCOMA comparacion PUNTOCOMA PARC LLAVEA LLAVEC  */
#line 170 "sintactico.y"
                                                                                                   {printf("Ciclo for aceptado\n");}
#line 1532 "y.tab.c"
    break;

  case 61: /* ciclo_for: IDENTIFICADOR PARA PUNTOCOMA PUNTOCOMA asignacion PARC LLAVEA LLAVEC  */
#line 171 "sintactico.y"
                                                                                       {printf("Ciclo for aceptado\n");}
#line 1538 "y.tab.c"
    break;

  case 62: /* ciclo_for: IDENTIFICADOR PARA PUNTOCOMA comparacion PUNTOCOMA PARC LLAVEA LLAVEC  */
#line 172 "sintactico.y"
                                                                                        {printf("Ciclo for aceptado\n");}
#line 1544 "y.tab.c"
    break;

  case 63: /* ciclo_for: IDENTIFICADOR PARA asignacion PUNTOCOMA PUNTOCOMA PARC LLAVEA LLAVEC  */
#line 173 "sintactico.y"
                                                                                       {printf("Ciclo for aceptado\n");}
#line 1550 "y.tab.c"
    break;

  case 64: /* ciclo_while: IDENTIFICADOR PARA comparacion PARC LLAVEA LLAVEC  */
#line 176 "sintactico.y"
                                                                  {printf("Instruccion Exitosa\n");}
#line 1556 "y.tab.c"
    break;

  case 65: /* ciclo_while: IDENTIFICADOR PARA PARC LLAVEA LLAVEC  */
#line 177 "sintactico.y"
                                                       {printf("Instruccion Exitosa\n");}
#line 1562 "y.tab.c"
    break;

  case 66: /* ciclo_dowhile: IDENTIFICADOR LLAVEA LLAVEC IDENTIFICADOR PARA comparacion PARC  */
#line 180 "sintactico.y"
                                                                                {printf("Ciclo Do-While Exitoso\n");}
#line 1568 "y.tab.c"
    break;

  case 67: /* ciclo_dowhile: IDENTIFICADOR LLAVEA LLAVEC IDENTIFICADOR PARA PARC  */
#line 181 "sintactico.y"
                                                                     {printf("Ciclo Do- While Exitoso\n");}
#line 1574 "y.tab.c"
    break;

  case 68: /* declaraciones: IDENTIFICADOR IDENTIFICADOR IGUAL NUMEROE  */
#line 184 "sintactico.y"
                                                          {printf("Declaración exitosa NUMERO entero\n");}
#line 1580 "y.tab.c"
    break;

  case 69: /* declaraciones: IDENTIFICADOR IDENTIFICADOR IGUAL NUMEROR  */
#line 185 "sintactico.y"
                                                           {printf("Declaración exitosa numero real\n");}
#line 1586 "y.tab.c"
    break;

  case 70: /* declaraciones: IDENTIFICADOR IDENTIFICADOR IGUAL CADENA  */
#line 186 "sintactico.y"
                                                          {printf("Declaración exitosa string\n");}
#line 1592 "y.tab.c"
    break;

  case 71: /* declaraciones: IDENTIFICADOR IDENTIFICADOR IGUAL CHAR  */
#line 187 "sintactico.y"
                                                        {printf("Declaración exitosa char\n");}
#line 1598 "y.tab.c"
    break;

  case 72: /* declaraciones: INT_DATATYPE IDENTIFICADOR  */
#line 188 "sintactico.y"
                                            {vInt.push_back((yyvsp[0].texto));}
#line 1604 "y.tab.c"
    break;

  case 73: /* condicion_if: IDENTIFICADOR PARA asignacion PARC LLAVEA LLAVEC  */
#line 191 "sintactico.y"
                                                                 {printf("Condicion if exitosa \n");}
#line 1610 "y.tab.c"
    break;

  case 74: /* condicion_if: IDENTIFICADOR PARA comparacion PIPE PIPE comparacion PARC LLAVEA LLAVEC  */
#line 192 "sintactico.y"
                                                                                         {printf("Condicion if exitosa \n");}
#line 1616 "y.tab.c"
    break;

  case 75: /* condicion_if: IDENTIFICADOR PARA comparacion AMPERSAND AMPERSAND comparacion PARC LLAVEA LLAVEC  */
#line 193 "sintactico.y"
                                                                                                   {printf("Condicion if exitosa \n");}
#line 1622 "y.tab.c"
    break;

  case 76: /* sino_else: IDENTIFICADOR LLAVEA LLAVEC  */
#line 196 "sintactico.y"
                                            {printf("Else exitoso \n");}
#line 1628 "y.tab.c"
    break;

  case 77: /* sino_else: IDENTIFICADOR  */
#line 197 "sintactico.y"
                                {printf("Else exitoso \n");}
#line 1634 "y.tab.c"
    break;

  case 78: /* funcion: IDENTIFICADOR IDENTIFICADOR PARA PARC PUNTOCOMA  */
#line 200 "sintactico.y"
                                                                {printf("Funcion exitosa \n");}
#line 1640 "y.tab.c"
    break;

  case 79: /* funcion: IDENTIFICADOR IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA  */
#line 201 "sintactico.y"
                                                                                                  {printf("Funcion exitosa \n");}
#line 1646 "y.tab.c"
    break;

  case 80: /* funcion: IDENTIFICADOR IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA  */
#line 202 "sintactico.y"
                                                                               {printf("Funcion exitosa \n");}
#line 1652 "y.tab.c"
    break;

  case 81: /* funcion: IDENTIFICADOR IDENTIFICADOR PARA PARC LLAVEA LLAVEC  */
#line 203 "sintactico.y"
                                                                     {printf("Funcion exitosa \n");}
#line 1658 "y.tab.c"
    break;

  case 82: /* funcion: IDENTIFICADOR IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 204 "sintactico.y"
                                                                                                      {printf("Funcion exitosa \n");}
#line 1664 "y.tab.c"
    break;

  case 83: /* funcion: IDENTIFICADOR PARA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 205 "sintactico.y"
                                                                     {printf("Funcion exitosa \n");}
#line 1670 "y.tab.c"
    break;


#line 1674 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 208 "sintactico.y"

/**********************
 * Codigo C Adicional *
 **********************/
void yyerror(char *s)
{
	printf("Error sintactico %s \n",s);
}
void printList(){
    std::list<std::string>::iterator it = vInt.begin();
    while(it!= vInt.end()){
        std::cout<<"\t"<< *it++<<std::endl;
    }
}

int main(int argc,char **argv)
{
	
	if (argc>1)
		yyin=fopen(argv[1],"rt");
	else
		//yyin=stdin;
		yyin=fopen("entrada.txt","rt");
        
		

	yyparse();
	printList();
	return 0;
}

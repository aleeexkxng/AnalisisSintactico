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
  #include <string.h>
  #include <utility>
  #include <sstream>
  #include <string>
  extern "C" int yylex(void);
  extern char *yytext;
  extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);
  void printWarnings();
  void setUsed(std::string);
  bool existVariable(std::string);
  std::string getDataType(std::string);
  std::list<bool> usedVariables;
  std::list<std::pair<std::string, std::string>> variables;
  std::pair<std::string, std::string> data;

#line 96 "sintactico.tab.c"

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

#include "sintactico.tab.h"
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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

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
static const yytype_int16 yyrline[] =
{
       0,    91,    91,    92,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   110,   111,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     126,   127,   130,   133,   136,   139,   148,   161,   170,   179,
     188,   197,   206,   217,   220,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   237,   238,   239,
     240,   241,   242,   243,   246,   247,   250,   251,   254,   266,
     278,   289,   300,   311,   321,   332,   344,   345,   346,   349,
     350,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376
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

#define YYPACT_NINF (-160)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      80,   -18,    11,    40,    44,    63,   -10,    57,  -160,  -160,
    -160,  -160,    -6,  -160,     7,  -160,  -160,    15,    45,  -160,
    -160,  -160,  -160,   107,   114,   120,   133,   121,   149,   122,
     153,    47,    -5,    26,    23,   108,   126,    38,   139,   155,
      87,   141,   142,  -160,  -160,  -160,  -160,  -160,  -160,    -2,
     156,   152,    83,   165,   154,    84,   161,   157,    85,   169,
     158,  -160,  -160,    27,   159,     1,     0,    32,  -160,  -160,
    -160,  -160,  -160,  -160,   104,  -160,  -160,   105,   166,   111,
    -160,  -160,   112,  -160,   145,   143,   143,   143,   143,   143,
    -160,  -160,    67,   119,  -160,   160,    90,   123,  -160,   162,
     101,   124,  -160,   163,   144,   127,  -160,   164,   170,   167,
      52,   171,   168,   172,     4,   173,   150,   174,  -160,  -160,
    -160,  -160,   176,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,   175,   178,   177,  -160,   179,   180,   184,
     182,  -160,   183,   185,   187,   188,  -160,   189,   186,   192,
     190,  -160,   191,   181,   193,  -160,   198,   106,   201,    86,
     195,    94,   196,   199,   210,   210,    95,  -160,   205,  -160,
    -160,  -160,   207,  -160,  -160,  -160,   208,  -160,  -160,  -160,
     209,  -160,  -160,   170,   203,    64,   206,   200,   211,   213,
    -160,   212,   214,    96,  -160,   216,   219,  -160,   220,   128,
     131,   132,   135,  -160,  -160,   204,  -160,   215,   217,   218,
     221,   222,   224,   223,   225,  -160,   226,  -160,   227,  -160,
     228,  -160,   229,  -160,  -160,  -160,   230,  -160,   231,   232,
     234,   235,   236,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
     237,  -160,  -160,  -160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    80,     0,     3,    11,
       9,    10,     0,    12,     0,     5,     7,     0,     0,    15,
      16,    14,    17,    75,     0,    72,     0,    74,     0,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     4,     6,     8,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    39,     0,     0,     0,     0,     0,    37,    35,
      36,    41,    42,    38,     0,    53,    54,     0,    79,     0,
      55,    56,     0,    43,    19,    27,    26,    25,    28,    29,
      33,    34,     0,     0,    71,     0,     0,     0,    68,     0,
       0,     0,    70,     0,     0,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    45,
      50,    49,     0,    52,    51,    48,    47,    18,    24,    23,
      20,    21,    22,     0,     0,     0,    99,     0,     0,     0,
       0,    81,     0,     0,     0,     0,    93,     0,     0,     0,
       0,    87,     0,     0,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,     0,   102,
     104,    83,     0,    84,    86,    95,     0,    96,    98,    89,
       0,    90,    92,    31,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    64,     0,     0,    67,     0,     0,
       0,     0,     0,    30,    32,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,    66,     0,   100,     0,    82,
       0,    94,     0,    88,    61,    62,     0,    63,     0,     0,
       0,     0,     0,   103,    85,    97,    91,    58,    59,    60,
       0,    77,    78,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,   239,    99,    41,     5,  -160,  -160,  -160,   -31,
    -160,  -159,   -32,  -160,  -160,  -160,  -160,  -160,  -160,  -160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     7,     8,    41,    42,   154,     9,    10,    11,    12,
      13,   189,    14,    15,    16,    17,    18,    19,    20,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      67,    66,   192,    31,    63,    32,    22,    92,    33,    34,
     110,    64,    35,   110,    93,    36,   113,    37,    45,    65,
      23,    38,    39,    40,   114,   111,    24,    75,   161,    68,
      69,    46,    76,   112,   212,    70,    71,    72,    73,    47,
      31,    77,    80,   108,    74,    33,    34,    81,   115,    25,
      61,    62,    36,    27,    37,    26,    82,    43,     1,    28,
     116,   117,     2,     3,     4,     5,     6,    68,    69,    48,
     156,    34,    29,    70,    71,    72,    73,    36,    30,    37,
     158,     1,   162,   133,   134,     2,     3,     4,     5,     6,
      85,    86,    96,   100,   104,   187,    87,    88,    89,    97,
     101,   105,   188,   187,   110,   187,   138,   139,   118,   120,
     191,   197,   211,   119,   121,   123,   125,   143,   144,    31,
     124,   126,    49,    51,   185,    50,   128,   129,   130,   131,
     132,    78,   195,   196,   198,    52,    55,    58,    53,    56,
      59,   135,    54,   136,    79,   140,   145,   141,   146,   150,
     216,   151,   217,   218,   220,   219,   221,   222,    57,   223,
     148,   149,    60,    83,    84,    90,    91,    94,    95,    98,
      99,   102,   106,   103,   107,   122,    40,    39,   164,   153,
     157,   109,   137,   127,   142,   147,   152,   168,   203,     0,
     155,   166,   159,   172,   160,   163,   176,     0,     0,   167,
     169,   180,   170,   165,   171,   173,   174,   183,     0,   175,
     179,   177,   178,   181,   182,   184,    74,   186,   190,   110,
     193,   199,   194,   200,   201,   202,   204,   224,   205,   208,
     210,   206,   213,   207,   209,   214,   215,     0,   225,   226,
     230,   227,     0,   228,   229,   231,    44,   232,     0,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243
};

static const yytype_int16 yycheck[] =
{
      32,    32,   161,    13,     9,    15,    24,     9,    18,    19,
       9,    16,    22,     9,    16,    25,    16,    27,    24,    24,
       9,    31,    32,    33,    24,    24,    15,     4,    24,     3,
       4,    24,     9,    65,   193,     9,    10,    11,    12,    24,
      13,    18,     4,    16,    18,    18,    19,     9,    16,     9,
       3,     4,    25,     9,    27,    15,    18,     0,     1,    15,
      28,    29,     5,     6,     7,     8,     9,     3,     4,    24,
      18,    19,     9,     9,    10,    11,    12,    25,    15,    27,
     111,     1,   114,    16,    17,     5,     6,     7,     8,     9,
       3,     4,     9,     9,     9,     9,     9,    10,    11,    16,
      16,    16,    16,     9,     9,     9,    16,    17,     4,     4,
      16,    16,    16,     9,     9,     4,     4,    16,    17,    13,
       9,     9,    15,     9,    18,    18,    85,    86,    87,    88,
      89,    23,   164,   165,   166,    15,    15,    15,    18,    18,
      18,    22,     9,    24,    18,    22,    22,    24,    24,    22,
      22,    24,    24,    22,    22,    24,    24,    22,     9,    24,
      16,    17,     9,    24,     9,    24,    24,    11,    16,     4,
      16,    10,     3,    16,    16,     9,    33,    32,    28,     9,
       9,    22,    22,    84,    22,    22,    22,     9,   183,    -1,
      23,    15,    24,     9,    22,    22,     9,    -1,    -1,    24,
      23,     9,    23,    29,    24,    23,    23,    26,    -1,    24,
      24,    23,    23,    23,    23,    22,    18,    16,    23,     9,
      24,    16,    23,    16,    16,    16,    23,    23,    22,    16,
      16,    31,    16,    22,    22,    16,    16,    -1,    23,    22,
      16,    23,    -1,    22,    22,    22,     7,    22,    -1,    23,
      23,    23,    23,    23,    23,    23,    22,    -1,    23,    23,
      23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,     6,     7,     8,     9,    35,    36,    40,
      41,    42,    43,    44,    46,    47,    48,    49,    50,    51,
      52,    53,    24,     9,    15,     9,    15,     9,    15,     9,
      15,    13,    15,    18,    19,    22,    25,    27,    31,    32,
      33,    37,    38,     0,    36,    24,    24,    24,    24,    15,
      18,     9,    15,    18,     9,    15,    18,     9,    15,    18,
       9,     3,     4,     9,    16,    24,    43,    46,     3,     4,
       9,    10,    11,    12,    18,     4,     9,    18,    23,    18,
       4,     9,    18,    24,     9,     3,     4,     9,    10,    11,
      24,    24,     9,    16,    11,    16,     9,    16,     4,    16,
       9,    16,    10,    16,     9,    16,     3,    16,    16,    22,
       9,    24,    46,    16,    24,    16,    28,    29,     4,     9,
       4,     9,     9,     4,     9,     4,     9,    37,    38,    38,
      38,    38,    38,    16,    17,    22,    24,    22,    16,    17,
      22,    24,    22,    16,    17,    22,    24,    22,    16,    17,
      22,    24,    22,     9,    39,    23,    18,     9,    43,    24,
      22,    24,    46,    22,    28,    29,    15,    24,     9,    23,
      23,    24,     9,    23,    23,    24,     9,    23,    23,    24,
       9,    23,    23,    26,    22,    18,    16,     9,    16,    45,
      23,    16,    45,    24,    23,    46,    46,    16,    46,    16,
      16,    16,    16,    39,    23,    22,    31,    22,    16,    22,
      16,    16,    45,    16,    16,    16,    22,    24,    22,    24,
      22,    24,    22,    24,    23,    23,    22,    23,    22,    22,
      16,    22,    22,    23,    23,    23,    23,    23,    23,    23,
      22,    23,    23,    23
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
      50,    50,    50,    50,    50,    50,    51,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53
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
       4,     4,     2,     2,     2,     2,     6,     9,     9,     3,
       1,     5,     8,     6,     6,     9,     6,     5,     8,     6,
       6,     9,     6,     5,     8,     6,     6,     9,     6,     5,
       8,     6,     6,     9,     6
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
#line 130 "sintactico.y"
                                                                               {printf("switch correcto\n");}
#line 1300 "sintactico.tab.c"
    break;

  case 33: /* cin: IDENTIFICADOR cin_aux PUNTOCOMA  */
#line 133 "sintactico.y"
                                                {printf("cin ejecutado correctamente\n");}
#line 1306 "sintactico.tab.c"
    break;

  case 34: /* cout: IDENTIFICADOR cout_aux PUNTOCOMA  */
#line 136 "sintactico.y"
                                                 {printf("cout ejecutado correctamente\n");}
#line 1312 "sintactico.tab.c"
    break;

  case 35: /* asignacion: IDENTIFICADOR IGUAL NUMEROE  */
#line 139 "sintactico.y"
                                                {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
						 if (getDataType(aux) == "int") {
                            printf("Asignacion correcta\n");setUsed(aux);
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto\n");setUsed(aux);
                            }
						}
#line 1326 "sintactico.tab.c"
    break;

  case 36: /* asignacion: IDENTIFICADOR IGUAL IDENTIFICADOR  */
#line 148 "sintactico.y"
                                                    {char* buff=(yyvsp[-2].texto);int i; std::string aux(""),aux2("");
						 for(i =0; buff[i]!='=';++i) {aux+=buff[i];}
                        i++;
                        for(; buff[i]!='\0';++i) {aux2+=buff[i];}
						 if (getDataType(aux) == getDataType(aux2)) {
                            printf("Asignacion correcta\n");setUsed(aux);setUsed(aux2);
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto\n");setUsed(aux);setUsed(aux2);
                            }
                
                
                }
#line 1344 "sintactico.tab.c"
    break;

  case 37: /* asignacion: IDENTIFICADOR IGUAL NUMEROR  */
#line 161 "sintactico.y"
                                                              {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux) == "float") {
                                printf("Asignacion correcta\n");setUsed(aux);
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto\n");setUsed(aux);
                            }
						}
#line 1358 "sintactico.tab.c"
    break;

  case 38: /* asignacion: IDENTIFICADOR IGUAL OPERATION  */
#line 170 "sintactico.y"
                                                       {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux) == "float"|| getDataType(aux)=="int") {
                                printf("Asignacion correcta\n");setUsed(aux);
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto\n");setUsed(aux);
                            }
						}
#line 1372 "sintactico.tab.c"
    break;

  case 39: /* asignacion: IDENTIFICADOR EQUALARITHMETIC_OPERATORS NUMEROE  */
#line 179 "sintactico.y"
                                                                         {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='+';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="int") {
                                printf("Asignacion correcta\n");setUsed(aux);
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto\n");setUsed(aux);
                            }
						}
#line 1386 "sintactico.tab.c"
    break;

  case 40: /* asignacion: IDENTIFICADOR EQUALARITHMETIC_OPERATORS NUMEROR  */
#line 188 "sintactico.y"
                                                                         {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='+';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="float") {
                                printf("Asignacion correcta\n");setUsed(aux);
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto\n");setUsed(aux);
                            }
						}
#line 1400 "sintactico.tab.c"
    break;

  case 41: /* asignacion: IDENTIFICADOR IGUAL CADENA  */
#line 197 "sintactico.y"
                                                   {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="string") {
                                printf("Asignacion correcta\n");setUsed(aux);
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto\n");setUsed(aux);
                            }
						}
#line 1414 "sintactico.tab.c"
    break;

  case 42: /* asignacion: IDENTIFICADOR IGUAL CHAR  */
#line 206 "sintactico.y"
                                                  {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="char") {
                                printf("Asignacion correcta\n");setUsed(aux);
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto\n");setUsed(aux);
                            }
						}
#line 1428 "sintactico.tab.c"
    break;

  case 43: /* incremento_decremento: IDENTIFICADOR INC_DEC PUNTOCOMA  */
#line 217 "sintactico.y"
                                                        {printf("Decremento/incremento exito\n");}
#line 1434 "sintactico.tab.c"
    break;

  case 45: /* comparacion: IDENTIFICADOR IGUAL IGUAL IDENTIFICADOR  */
#line 223 "sintactico.y"
                                                        {printf("Comparacion Exitosa\n");}
#line 1440 "sintactico.tab.c"
    break;

  case 46: /* comparacion: IDENTIFICADOR IGUAL IGUAL NUMEROE  */
#line 224 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1446 "sintactico.tab.c"
    break;

  case 47: /* comparacion: IDENTIFICADOR MENOR IGUAL IDENTIFICADOR  */
#line 225 "sintactico.y"
                                                         {printf("Comparacion Exitosa\n");}
#line 1452 "sintactico.tab.c"
    break;

  case 48: /* comparacion: IDENTIFICADOR MENOR IGUAL NUMEROE  */
#line 226 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1458 "sintactico.tab.c"
    break;

  case 49: /* comparacion: IDENTIFICADOR MAYOR IGUAL IDENTIFICADOR  */
#line 227 "sintactico.y"
                                                         {printf("Comparacion Exitosa\n");}
#line 1464 "sintactico.tab.c"
    break;

  case 50: /* comparacion: IDENTIFICADOR MAYOR IGUAL NUMEROE  */
#line 228 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1470 "sintactico.tab.c"
    break;

  case 51: /* comparacion: IDENTIFICADOR NO IGUAL IDENTIFICADOR  */
#line 229 "sintactico.y"
                                                      {printf("Comparacion Exitosa\n");}
#line 1476 "sintactico.tab.c"
    break;

  case 52: /* comparacion: IDENTIFICADOR NO IGUAL NUMEROE  */
#line 230 "sintactico.y"
                                                {printf("Comparacion Exitosa\n");}
#line 1482 "sintactico.tab.c"
    break;

  case 53: /* comparacion: IDENTIFICADOR MAYOR NUMEROE  */
#line 231 "sintactico.y"
                                             {printf("Comparacion Exitosa\n");}
#line 1488 "sintactico.tab.c"
    break;

  case 54: /* comparacion: IDENTIFICADOR MAYOR IDENTIFICADOR  */
#line 232 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1494 "sintactico.tab.c"
    break;

  case 55: /* comparacion: IDENTIFICADOR MENOR NUMEROE  */
#line 233 "sintactico.y"
                                             {printf("Comparacion Exitosa\n");}
#line 1500 "sintactico.tab.c"
    break;

  case 56: /* comparacion: IDENTIFICADOR MENOR IDENTIFICADOR  */
#line 234 "sintactico.y"
                                                   {printf("Comparacion Exitosa\n");}
#line 1506 "sintactico.tab.c"
    break;

  case 57: /* ciclo_for: IDENTIFICADOR PARA asignacion PUNTOCOMA comparacion PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  */
#line 237 "sintactico.y"
                                                                                                                            {printf("Ciclo for aceptado\n");}
#line 1512 "sintactico.tab.c"
    break;

  case 58: /* ciclo_for: IDENTIFICADOR PARA PUNTOCOMA comparacion PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  */
#line 238 "sintactico.y"
                                                                                                                  {printf("Ciclo for aceptado\n");}
#line 1518 "sintactico.tab.c"
    break;

  case 59: /* ciclo_for: IDENTIFICADOR PARA asignacion PUNTOCOMA PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  */
#line 239 "sintactico.y"
                                                                                                                 {printf("Ciclo for aceptado\n");}
#line 1524 "sintactico.tab.c"
    break;

  case 60: /* ciclo_for: IDENTIFICADOR PARA asignacion PUNTOCOMA comparacion PUNTOCOMA PARC LLAVEA LLAVEC  */
#line 240 "sintactico.y"
                                                                                                   {printf("Ciclo for aceptado\n");}
#line 1530 "sintactico.tab.c"
    break;

  case 61: /* ciclo_for: IDENTIFICADOR PARA PUNTOCOMA PUNTOCOMA asignacion PARC LLAVEA LLAVEC  */
#line 241 "sintactico.y"
                                                                                       {printf("Ciclo for aceptado\n");}
#line 1536 "sintactico.tab.c"
    break;

  case 62: /* ciclo_for: IDENTIFICADOR PARA PUNTOCOMA comparacion PUNTOCOMA PARC LLAVEA LLAVEC  */
#line 242 "sintactico.y"
                                                                                        {printf("Ciclo for aceptado\n");}
#line 1542 "sintactico.tab.c"
    break;

  case 63: /* ciclo_for: IDENTIFICADOR PARA asignacion PUNTOCOMA PUNTOCOMA PARC LLAVEA LLAVEC  */
#line 243 "sintactico.y"
                                                                                       {printf("Ciclo for aceptado\n");}
#line 1548 "sintactico.tab.c"
    break;

  case 64: /* ciclo_while: IDENTIFICADOR PARA comparacion PARC LLAVEA LLAVEC  */
#line 246 "sintactico.y"
                                                                  {printf("Instruccion Exitosa\n");}
#line 1554 "sintactico.tab.c"
    break;

  case 65: /* ciclo_while: IDENTIFICADOR PARA PARC LLAVEA LLAVEC  */
#line 247 "sintactico.y"
                                                       {printf("Instruccion Exitosa\n");}
#line 1560 "sintactico.tab.c"
    break;

  case 66: /* ciclo_dowhile: IDENTIFICADOR LLAVEA LLAVEC IDENTIFICADOR PARA comparacion PARC  */
#line 250 "sintactico.y"
                                                                                {printf("Ciclo Do-While Exitoso\n");}
#line 1566 "sintactico.tab.c"
    break;

  case 67: /* ciclo_dowhile: IDENTIFICADOR LLAVEA LLAVEC IDENTIFICADOR PARA PARC  */
#line 251 "sintactico.y"
                                                                     {printf("Ciclo Do- While Exitoso\n");}
#line 1572 "sintactico.tab.c"
    break;

  case 68: /* declaraciones: INT_DATATYPE IDENTIFICADOR IGUAL NUMEROE  */
#line 254 "sintactico.y"
                                                         {char* buff=(yyvsp[-2].texto); std::string aux("");
                                                        for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                                                        if (existVariable(aux)) {
                                                            printf("Error semantico, variable ya declarada\n");			
                                                            } 
                                                        else {
                                                            printf("variable declarada con exito!, int\n");
                                                            data.first=aux; data.second="int";
                                                            variables.push_back(data);
                                                            usedVariables.push_back(false);
                                                            }
                                                        }
#line 1589 "sintactico.tab.c"
    break;

  case 69: /* declaraciones: FLOAT_DATATYPE IDENTIFICADOR IGUAL NUMEROR  */
#line 266 "sintactico.y"
                                                            {char* buff=(yyvsp[-2].texto); std::string aux("");
                                                        for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                                                        if (existVariable(aux)) {
                                                            printf("Error semantico, variable ya declarada\n");			
                                                            } 
                                                        else {
                                                            printf("variable declarada con exito!, float\n");
                                                            data.first=aux; data.second="float";
                                                            variables.push_back(data);
       							    usedVariables.push_back(false);	
                                                            }
                                                    }
#line 1606 "sintactico.tab.c"
    break;

  case 70: /* declaraciones: STRING_DATATYPE IDENTIFICADOR IGUAL CADENA  */
#line 278 "sintactico.y"
                                                            {char* buff=(yyvsp[-2].texto); std::string aux("");
                                                        for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                                                        if (existVariable(aux)) {
                                                            printf("Error semantico, variable ya declarada\n");			
                                                            } 
                                                        else {
                                                            printf("variable declarada con exito!, string\n");
                                                            data.first=aux; data.second="string";;
                                                            variables.push_back(data);usedVariables.push_back(false);
                                                            }
                                                    }
#line 1622 "sintactico.tab.c"
    break;

  case 71: /* declaraciones: CHAR_DATATYPE IDENTIFICADOR IGUAL CHAR  */
#line 289 "sintactico.y"
                                                        {char* buff=(yyvsp[-2].texto); std::string aux("");
                                                        for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                                                        if (existVariable(aux)) {
                                                            printf("Error semantico, variable ya declarada\n");			
                                                            } 
                                                        else {
                                                            printf("variable declarada con exito!, char\n");
                                                            data.first=aux; data.second="char";
                                                            variables.push_back(data);usedVariables.push_back(false);
                                                            }
                                                }
#line 1638 "sintactico.tab.c"
    break;

  case 72: /* declaraciones: INT_DATATYPE IDENTIFICADOR  */
#line 300 "sintactico.y"
                                            { char* buff=(yyvsp[0].texto); std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, int\n");
                                        data.first=aux; data.second="int";
                                        variables.push_back(data);usedVariables.push_back(false);
                                        } 
                                    }
#line 1654 "sintactico.tab.c"
    break;

  case 73: /* declaraciones: FLOAT_DATATYPE IDENTIFICADOR  */
#line 311 "sintactico.y"
                                              {char* buff=(yyvsp[0].texto); std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, float\n");
                                        data.first=aux; data.second="float";
                                        variables.push_back(data);usedVariables.push_back(false);
                                        }  }
#line 1669 "sintactico.tab.c"
    break;

  case 74: /* declaraciones: STRING_DATATYPE IDENTIFICADOR  */
#line 321 "sintactico.y"
                                               {
                                        char* buff=(yyvsp[0].texto); std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, string\n");
                                        data.first=aux; data.second="string";
                                        variables.push_back(data);usedVariables.push_back(false);
                                        } }
#line 1685 "sintactico.tab.c"
    break;

  case 75: /* declaraciones: CHAR_DATATYPE IDENTIFICADOR  */
#line 332 "sintactico.y"
                                             {char* buff=(yyvsp[0].texto); std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, char\n");
                                        data.first=aux; data.second="char";
                                        variables.push_back(data);usedVariables.push_back(false);
                                        }  }
#line 1700 "sintactico.tab.c"
    break;

  case 76: /* condicion_if: IDENTIFICADOR PARA asignacion PARC LLAVEA LLAVEC  */
#line 344 "sintactico.y"
                                                                 {printf("Condicion if exitosa \n");}
#line 1706 "sintactico.tab.c"
    break;

  case 77: /* condicion_if: IDENTIFICADOR PARA comparacion PIPE PIPE comparacion PARC LLAVEA LLAVEC  */
#line 345 "sintactico.y"
                                                                                         {printf("Condicion if exitosa \n");}
#line 1712 "sintactico.tab.c"
    break;

  case 78: /* condicion_if: IDENTIFICADOR PARA comparacion AMPERSAND AMPERSAND comparacion PARC LLAVEA LLAVEC  */
#line 346 "sintactico.y"
                                                                                                   {printf("Condicion if exitosa \n");}
#line 1718 "sintactico.tab.c"
    break;

  case 79: /* sino_else: IDENTIFICADOR LLAVEA LLAVEC  */
#line 349 "sintactico.y"
                                            {printf("Else exitoso \n");}
#line 1724 "sintactico.tab.c"
    break;

  case 80: /* sino_else: IDENTIFICADOR  */
#line 350 "sintactico.y"
                                {printf("Else exitoso \n");}
#line 1730 "sintactico.tab.c"
    break;

  case 81: /* funcion: INT_DATATYPE IDENTIFICADOR PARA PARC PUNTOCOMA  */
#line 353 "sintactico.y"
                                                               {printf("Funcion exitosa \n");}
#line 1736 "sintactico.tab.c"
    break;

  case 82: /* funcion: INT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA  */
#line 354 "sintactico.y"
                                                                                                 {printf("Funcion exitosa \n");}
#line 1742 "sintactico.tab.c"
    break;

  case 83: /* funcion: INT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA  */
#line 355 "sintactico.y"
                                                                              {printf("Funcion exitosa \n");}
#line 1748 "sintactico.tab.c"
    break;

  case 84: /* funcion: INT_DATATYPE IDENTIFICADOR PARA PARC LLAVEA LLAVEC  */
#line 356 "sintactico.y"
                                                                    {printf("Funcion exitosa \n");}
#line 1754 "sintactico.tab.c"
    break;

  case 85: /* funcion: INT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 357 "sintactico.y"
                                                                                                     {printf("Funcion exitosa \n");}
#line 1760 "sintactico.tab.c"
    break;

  case 86: /* funcion: INT_DATATYPE PARA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 358 "sintactico.y"
                                                                    {printf("Funcion exitosa \n");}
#line 1766 "sintactico.tab.c"
    break;

  case 87: /* funcion: FLOAT_DATATYPE IDENTIFICADOR PARA PARC PUNTOCOMA  */
#line 359 "sintactico.y"
                                                                  {printf("Funcion exitosa \n");}
#line 1772 "sintactico.tab.c"
    break;

  case 88: /* funcion: FLOAT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA  */
#line 360 "sintactico.y"
                                                                                                   {printf("Funcion exitosa \n");}
#line 1778 "sintactico.tab.c"
    break;

  case 89: /* funcion: FLOAT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA  */
#line 361 "sintactico.y"
                                                                                {printf("Funcion exitosa \n");}
#line 1784 "sintactico.tab.c"
    break;

  case 90: /* funcion: FLOAT_DATATYPE IDENTIFICADOR PARA PARC LLAVEA LLAVEC  */
#line 362 "sintactico.y"
                                                                      {printf("Funcion exitosa \n");}
#line 1790 "sintactico.tab.c"
    break;

  case 91: /* funcion: FLOAT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 363 "sintactico.y"
                                                                                                       {printf("Funcion exitosa \n");}
#line 1796 "sintactico.tab.c"
    break;

  case 92: /* funcion: FLOAT_DATATYPE PARA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 364 "sintactico.y"
                                                                      {printf("Funcion exitosa \n");}
#line 1802 "sintactico.tab.c"
    break;

  case 93: /* funcion: STRING_DATATYPE IDENTIFICADOR PARA PARC PUNTOCOMA  */
#line 365 "sintactico.y"
                                                                   {printf("Funcion exitosa \n");}
#line 1808 "sintactico.tab.c"
    break;

  case 94: /* funcion: STRING_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA  */
#line 366 "sintactico.y"
                                                                                                    {printf("Funcion exitosa \n");}
#line 1814 "sintactico.tab.c"
    break;

  case 95: /* funcion: STRING_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA  */
#line 367 "sintactico.y"
                                                                                 {printf("Funcion exitosa \n");}
#line 1820 "sintactico.tab.c"
    break;

  case 96: /* funcion: STRING_DATATYPE IDENTIFICADOR PARA PARC LLAVEA LLAVEC  */
#line 368 "sintactico.y"
                                                                       {printf("Funcion exitosa \n");}
#line 1826 "sintactico.tab.c"
    break;

  case 97: /* funcion: STRING_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 369 "sintactico.y"
                                                                                                        {printf("Funcion exitosa \n");}
#line 1832 "sintactico.tab.c"
    break;

  case 98: /* funcion: STRING_DATATYPE PARA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 370 "sintactico.y"
                                                                       {printf("Funcion exitosa \n");}
#line 1838 "sintactico.tab.c"
    break;

  case 99: /* funcion: CHAR_DATATYPE IDENTIFICADOR PARA PARC PUNTOCOMA  */
#line 371 "sintactico.y"
                                                                 {printf("Funcion exitosa \n");}
#line 1844 "sintactico.tab.c"
    break;

  case 100: /* funcion: CHAR_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA  */
#line 372 "sintactico.y"
                                                                                                  {printf("Funcion exitosa \n");}
#line 1850 "sintactico.tab.c"
    break;

  case 101: /* funcion: CHAR_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA  */
#line 373 "sintactico.y"
                                                                               {printf("Funcion exitosa \n");}
#line 1856 "sintactico.tab.c"
    break;

  case 102: /* funcion: CHAR_DATATYPE IDENTIFICADOR PARA PARC LLAVEA LLAVEC  */
#line 374 "sintactico.y"
                                                                     {printf("Funcion exitosa \n");}
#line 1862 "sintactico.tab.c"
    break;

  case 103: /* funcion: CHAR_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 375 "sintactico.y"
                                                                                                      {printf("Funcion exitosa \n");}
#line 1868 "sintactico.tab.c"
    break;

  case 104: /* funcion: CHAR_DATATYPE PARA IDENTIFICADOR PARC LLAVEA LLAVEC  */
#line 376 "sintactico.y"
                                                                     {printf("Funcion exitosa \n");}
#line 1874 "sintactico.tab.c"
    break;


#line 1878 "sintactico.tab.c"

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

#line 379 "sintactico.y"

/**********************
 * Codigo C Adicional *
 **********************/
void yyerror(char *s)
{
	printf("Error sintactico %s \n",s);
}
void printWarnings() {
	std::list<bool>::iterator itBool = usedVariables.begin();
	std::list<std::pair<std::string, std::string>>::iterator it = variables.begin();
	while (it!=variables.end()) {
		if (*itBool==false) {
			std::cout << "Unused variable -> " << it->first << std::endl;	
		}
		it++;itBool++;
	}
}
void setUsed(std::string e){
	std::list<bool>::iterator itBool = usedVariables.begin();
	std::list<std::pair<std::string, std::string>>::iterator it = variables.begin();
	while (it!=variables.end()) {
		if (it->first == e) {
			*itBool=true;	
		}
		it++;itBool++;
	}
}
bool existVariable(std::string e) {
	std::list<std::pair<std::string, std::string>>::iterator it = variables.begin();
	while (it!=variables.end()) {
		if (it->first == e) {
			return true;		
		}
		it++;
	}
	return false;
}
std::string getDataType(std::string nVariable){
    std::list<std::pair<std::string, std::string>>::iterator it = variables.begin();
	while (it!=variables.end()) {
		if (it->first == nVariable) {
			return it->second;		
		}
		it++;
	}
	return "no encontrado";
}
int main(int argc,char **argv)
{
	
	if (argc>1)
		yyin=fopen(argv[1],"rt");
	else
		//yyin=stdin;
		yyin=fopen("entrada.txt","rt");
        
		

	yyparse();
	printWarnings();
	return 0;
}

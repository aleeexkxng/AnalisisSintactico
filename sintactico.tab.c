/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintactico.y" /* yacc.c:339  */

    
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

  bool existVariable(std::string);
  std::string getDataType(std::string);

  std::list<std::pair<std::string, std::string>> variables;
  std::pair<std::string, std::string> data;

#line 90 "sintactico.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sintactico.tab.h".  */
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
#line 27 "sintactico.y" /* yacc.c:355  */

  float real;
  int numero;
  char* texto;

#line 170 "sintactico.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "sintactico.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    91,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   109,   110,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     125,   126,   129,   132,   135,   138,   147,   161,   170,   179,
     188,   197,   206,   217,   220,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   237,   238,   239,
     240,   241,   242,   243,   246,   247,   250,   251,   254,   265,
     276,   287,   298,   309,   319,   330,   342,   343,   344,   347,
     348,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMEROR", "NUMEROE", "CHAR_DATATYPE",
  "INT_DATATYPE", "STRING_DATATYPE", "FLOAT_DATATYPE", "IDENTIFICADOR",
  "CADENA", "CHAR", "OPERATION", "EQUALARITHMETIC_OPERATORS",
  "ARITHMETIC_OPERATOR", "PARA", "PARC", "COMA", "IGUAL", "MAYOR",
  "CORCHA", "CORCHC", "LLAVEA", "LLAVEC", "PUNTOCOMA", "NO", "DOSPUNTOS",
  "MENOR", "PIPE", "AMPERSAND", "OPERATOR", "INC_DEC", "OPERATOR_FLUJO_IN",
  "OPERATOR_FLUJO_OUT", "$accept", "lista_i", "i", "cin_aux", "cout_aux",
  "switch_aux", "switch", "cin", "cout", "asignacion",
  "incremento_decremento", "incremento_decremento_for", "comparacion",
  "ciclo_for", "ciclo_while", "ciclo_dowhile", "declaraciones",
  "condicion_if", "sino_else", "funcion", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
# endif

#define YYPACT_NINF -160

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
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
static const yytype_uint8 yydefact[] =
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
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    41,    42,   154,     9,    10,    11,    12,
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
static const yytype_uint8 yystos[] =
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
static const yytype_uint8 yyr1[] =
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
static const yytype_uint8 yyr2[] =
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 32:
#line 129 "sintactico.y" /* yacc.c:1646  */
    {printf("switch correcto\n");}
#line 1423 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "sintactico.y" /* yacc.c:1646  */
    {printf("cin ejecutado correctamente\n");}
#line 1429 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "sintactico.y" /* yacc.c:1646  */
    {printf("cout ejecutado correctamente\n");}
#line 1435 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
						 if (getDataType(aux) == "int") {
                            printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
#line 1449 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 147 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto);int i; std::string aux(""),aux2("");
						 for(i =0; buff[i]!='=';++i) {aux+=buff[i];}
                        i++;
                        for(; buff[i]!='\0';++i) {aux2+=buff[i];}
                        std::cout<<aux2<<std::endl;
						 if (getDataType(aux) == getDataType(aux2)) {
                            printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
                
                
                }
#line 1468 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 161 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux) == "float") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
#line 1482 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 170 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux) == "float"|| getDataType(aux)=="int") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
#line 1496 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 179 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='+';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="int") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
#line 1510 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 188 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='+';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="float") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
#line 1524 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 197 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="string") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
#line 1538 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 206 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="char") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
#line 1552 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 217 "sintactico.y" /* yacc.c:1646  */
    {printf("Decremento/incremento exito\n");}
#line 1558 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 223 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1564 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 224 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1570 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 225 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1576 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 226 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1582 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 227 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1588 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 228 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1594 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 229 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1600 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 230 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1606 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 231 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1612 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 232 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1618 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 233 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1624 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 234 "sintactico.y" /* yacc.c:1646  */
    {printf("Comparacion Exitosa\n");}
#line 1630 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 237 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo for aceptado\n");}
#line 1636 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 238 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo for aceptado\n");}
#line 1642 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 239 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo for aceptado\n");}
#line 1648 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 240 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo for aceptado\n");}
#line 1654 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 241 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo for aceptado\n");}
#line 1660 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 242 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo for aceptado\n");}
#line 1666 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 243 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo for aceptado\n");}
#line 1672 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 246 "sintactico.y" /* yacc.c:1646  */
    {printf("Instruccion Exitosa\n");}
#line 1678 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 247 "sintactico.y" /* yacc.c:1646  */
    {printf("Instruccion Exitosa\n");}
#line 1684 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 250 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo Do-While Exitoso\n");}
#line 1690 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 251 "sintactico.y" /* yacc.c:1646  */
    {printf("Ciclo Do- While Exitoso\n");}
#line 1696 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 254 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
                                                        for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                                                        if (existVariable(aux)) {
                                                            printf("Error semantico, variable ya declarada\n");			
                                                            } 
                                                        else {
                                                            printf("variable declarada con exito!, int\n");
                                                            data.first=aux; data.second="int";
                                                            variables.push_back(data);
                                                            }
                                                        }
#line 1712 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 265 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
                                                        for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                                                        if (existVariable(aux)) {
                                                            printf("Error semantico, variable ya declarada\n");			
                                                            } 
                                                        else {
                                                            printf("variable declarada con exito!, float\n");
                                                            data.first=aux; data.second="float";
                                                            variables.push_back(data);
                                                            }
                                                    }
#line 1728 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 276 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
                                                        for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                                                        if (existVariable(aux)) {
                                                            printf("Error semantico, variable ya declarada\n");			
                                                            } 
                                                        else {
                                                            printf("variable declarada con exito!, string\n");
                                                            data.first=aux; data.second="string";;
                                                            variables.push_back(data);
                                                            }
                                                    }
#line 1744 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 287 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[-2].texto); std::string aux("");
                                                        for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                                                        if (existVariable(aux)) {
                                                            printf("Error semantico, variable ya declarada\n");			
                                                            } 
                                                        else {
                                                            printf("variable declarada con exito!, char\n");
                                                            data.first=aux; data.second="char";
                                                            variables.push_back(data);
                                                            }
                                                }
#line 1760 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 298 "sintactico.y" /* yacc.c:1646  */
    { char* buff=(yyvsp[0].texto); std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, int\n");
                                        data.first=aux; data.second="int";
                                        variables.push_back(data);
                                        } 
                                    }
#line 1776 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 309 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[0].texto); std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, float\n");
                                        data.first=aux; data.second="float";
                                        variables.push_back(data);
                                        }  }
#line 1791 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 319 "sintactico.y" /* yacc.c:1646  */
    {
                                        char* buff=(yyvsp[0].texto); std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, string\n");
                                        data.first=aux; data.second="string";
                                        variables.push_back(data);
                                        } }
#line 1807 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 330 "sintactico.y" /* yacc.c:1646  */
    {char* buff=(yyvsp[0].texto); std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, char\n");
                                        data.first=aux; data.second="char";
                                        variables.push_back(data);
                                        }  }
#line 1822 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 342 "sintactico.y" /* yacc.c:1646  */
    {printf("Condicion if exitosa \n");}
#line 1828 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 343 "sintactico.y" /* yacc.c:1646  */
    {printf("Condicion if exitosa \n");}
#line 1834 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 344 "sintactico.y" /* yacc.c:1646  */
    {printf("Condicion if exitosa \n");}
#line 1840 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 347 "sintactico.y" /* yacc.c:1646  */
    {printf("Else exitoso \n");}
#line 1846 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 348 "sintactico.y" /* yacc.c:1646  */
    {printf("Else exitoso \n");}
#line 1852 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 351 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1858 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 352 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1864 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 353 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1870 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 354 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1876 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 355 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1882 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 356 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1888 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 357 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1894 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 358 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1900 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 359 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1906 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 360 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1912 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 361 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1918 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 362 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1924 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 363 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1930 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 364 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1936 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 365 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1942 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 366 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1948 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 367 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1954 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 368 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1960 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 369 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1966 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 370 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1972 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 371 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1978 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 372 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1984 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 373 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1990 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 374 "sintactico.y" /* yacc.c:1646  */
    {printf("Funcion exitosa \n");}
#line 1996 "sintactico.tab.c" /* yacc.c:1646  */
    break;


#line 2000 "sintactico.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 377 "sintactico.y" /* yacc.c:1906  */

/**********************
 * Codigo C Adicional *
 **********************/
void yyerror(char *s)
{
	printf("Error sintactico %s \n",s);
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
	return 0;
}

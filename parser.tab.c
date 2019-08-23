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
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <string>
#include <iostream>
extern "C" {	
	void yyerror (char *);
}
extern int yylex(void);
extern int yylineno;

Table_Scope current = global;
ostream & os = cout;
list<Symbol_Table_Entry *>* global_table;
list<Symbol_Table_Entry *>* local_table;
list<Symbol_Table_Entry *>* formal_table;
string current_proc = "";
list<Procedure *> * procedures = new list<Procedure*>();

#line 85 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER_NUMBER = 258,
    BBNUM = 259,
    INTEGER = 260,
    DOUBLE_NUMBER = 261,
    NAME = 262,
    RETURN = 263,
    FLOAT = 264,
    ASSIGN = 265,
    VOID = 266,
    UMINUS = 267,
    WHILE = 268,
    IF = 269,
    ELSE = 270,
    DO = 271,
    GREATER_THAN = 272,
    GREATER_THAN_EQUAL = 273,
    LESS_THAN = 274,
    LESS_THAN_EQUAL = 275,
    EQUAL = 276,
    NOT_EQUAL = 277,
    AND = 278,
    OR = 279,
    NOT = 280,
    PRINT = 281,
    IFST = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 20 "parser.y" /* yacc.c:355  */
union YYSTYPE
{
#line 21 "parser.y" /* yacc.c:355  */

	int integer_value;
	double double_value;
	std::string * string_value;
	list<Ast *> * ast_list;
	Ast * ast;
	Symbol_Table * symbol_table;
	Symbol_Table_Entry * symbol_entry;
	Basic_Block * basic_block;
	Procedure * procedure;
	map<string, Procedure *>* procedure_map;
	Program * program;
	Data_Type * data_type;
	vector<string> * vec_string;
	list<Symbol_Table_Entry*> * list_sym;
	Sequence_Ast * seq_ast;
	Selection_Statement_Ast * sel_ast;
	Return_Ast * ret_ast;
	Call_Ast * call_ast;

#line 174 "parser.tab.c" /* yacc.c:355  */
};
#line 20 "parser.y" /* yacc.c:355  */
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   263

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

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
      34,    35,    31,    29,    37,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,    36,
       2,     2,     2,    27,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    79,    89,   103,   115,   120,   127,   181,
     187,   193,   194,   196,   199,   204,   205,   211,   221,   222,
     229,   233,   236,   240,   263,   278,   281,   284,   287,   290,
     293,   298,   301,   306,   309,   314,   326,   337,   349,   361,
     373,   385,   399,   402,   405,   408,   411,   417,   425,   431,
     434,   439,   440,   445,   451,   455,   459,   464,   470,   475,
     480,   512,   515,   518,   529,   541,   544,   547,   550,   553,
     567,   581,   595,   609
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER_NUMBER", "BBNUM", "INTEGER",
  "DOUBLE_NUMBER", "NAME", "RETURN", "FLOAT", "ASSIGN", "VOID", "UMINUS",
  "WHILE", "IF", "ELSE", "DO", "GREATER_THAN", "GREATER_THAN_EQUAL",
  "LESS_THAN", "LESS_THAN_EQUAL", "EQUAL", "NOT_EQUAL", "AND", "OR", "NOT",
  "PRINT", "'?'", "':'", "'+'", "'-'", "'*'", "'/'", "IFST", "'('", "')'",
  "';'", "','", "'{'", "'}'", "$accept", "Prog", "Global", "Proclist",
  "Proc_start", "func_decl", "type_list", "func_ops", "func_ops_h", "Proc",
  "ProcBody", "print_stmt", "return_stmt", "func_call", "sequence",
  "selection_stmt", "iteration_stmt", "conditional_expr", "rel_expr",
  "logical_expr", "D", "actual_params", "actual_params_h", "single_decl",
  "T", "NAME1", "L", "Variable", "Constant", "AssignExp", "E", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    63,    58,    43,
      45,    42,    47,   282,    40,    41,    59,    44,   123,   125
};
# endif

#define YYPACT_NINF -52

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-52)))

#define YYTABLE_NINF -50

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -52,     8,    53,   -52,   -52,   -52,   -52,    53,   -15,   -52,
     -52,   -52,   -24,     9,     4,   -52,     9,   -52,   -52,   -52,
     -52,    45,    11,     2,    53,    53,     9,   -52,     9,    51,
      78,    58,   -52,     9,   -52,   -52,    25,    54,    61,   120,
       9,   -52,   -52,   -52,   -52,    65,   -52,   -52,   -52,    69,
      97,   -52,   -52,    72,   -10,   -52,   -52,   -52,   117,   117,
     117,   -52,   -52,   -52,    57,   -52,   -52,   -52,   156,   117,
     117,    99,    79,    92,   -52,    84,   117,    53,   -52,    53,
     -52,   231,   -52,     6,   196,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   -52,    16,
      22,    87,   -52,   -52,    90,   117,    86,   176,   -52,     9,
     -52,   -52,   -52,   -52,   -52,   215,   231,   231,   231,   231,
     231,   231,    21,    21,   -52,   -52,   120,   120,   117,   -52,
     135,   -52,   -52,   117,   -52,   124,   114,   -52,   231,   120,
      93,   -52,   -52
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,    54,    55,    56,     2,     0,     5,
       6,     4,     0,     0,     0,     7,     0,    10,     3,    48,
      57,    53,     0,     0,    18,    13,     0,    47,     0,     0,
       0,     0,    15,    11,    58,    59,     0,     0,     0,     0,
       0,    18,    17,    28,    30,     0,    19,    26,    27,    60,
       0,    25,     8,    14,     0,    53,    61,    62,     0,     0,
       0,    22,    67,    42,     0,    60,    66,    65,     0,     0,
       0,     0,     0,     0,    29,    51,     0,     0,     9,     0,
      46,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    20,    24,     0,     0,     0,     0,    16,     0,
      12,    43,    68,    44,    45,     0,    36,    37,    38,    39,
      40,    41,    69,    70,    72,    71,     0,     0,     0,    23,
      50,    64,    63,     0,    33,    32,     0,    52,    35,     0,
       0,    31,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   122,   -52,    -2,   -52,   -52,   -52,   -52,   125,
      94,   -52,   -52,    67,   -37,   -52,   -52,   -52,   -52,   -51,
     -52,   -52,   -52,   -21,    -1,   -13,   -52,   -29,   -52,   -52,
     -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     7,     8,     9,    54,    31,    53,    10,
      30,    43,    44,    45,    46,    47,    48,    62,    63,    64,
      11,   104,   105,    12,    13,    65,    22,    66,    67,    51,
      81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    50,    71,    23,    32,    14,    16,    80,     3,    83,
      50,    72,    19,    34,    68,    35,    20,    49,    99,   100,
      55,    17,    29,    18,    33,    78,    49,    79,    56,    85,
      86,    57,    20,    87,   113,   114,    25,    82,    84,    85,
      86,   111,    18,    87,    50,    85,    86,    27,    28,    87,
      58,   126,    96,    97,   107,    59,   108,   127,     4,    60,
      49,    61,     5,    49,     6,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   109,   136,   110,    25,
      85,    86,    26,   130,    87,    20,    36,    17,    69,   134,
     135,    37,    38,    52,    39,    70,    55,    50,    50,    20,
      36,    74,   141,    75,    40,    37,    38,    76,    39,    77,
      50,   138,   101,    49,    49,   102,    41,    42,    40,   -49,
      56,   128,   131,    57,    20,   129,    49,    20,    36,   142,
      41,   103,    15,    37,    38,    73,    39,    85,    86,   139,
      24,    87,    58,   106,     0,     0,    40,    59,     0,   140,
       0,    60,    88,    89,    90,    91,    92,    93,    41,     0,
       0,     0,     0,     0,    94,    95,    96,    97,     0,     0,
       0,     0,   137,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,     0,
       0,     0,    98,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,     0,
       0,     0,   132,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,     0,
       0,   112,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,   133,    94,    95,    96,    97,    88,    89,
      90,    91,    92,    93,     0,     0,     0,     0,     0,     0,
      94,    95,    96,    97
};

static const yytype_int16 yycheck[] =
{
      13,    30,    39,    16,    25,     7,     7,    58,     0,    60,
      39,    40,    36,    26,    36,    28,     7,    30,    69,    70,
      33,    36,    24,    38,    25,    35,    39,    37,     3,    23,
      24,     6,     7,    27,    85,    86,    34,    59,    60,    23,
      24,    35,    38,    27,    73,    23,    24,    36,    37,    27,
      25,    35,    31,    32,    76,    30,    77,    35,     5,    34,
      73,    36,     9,    76,    11,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    77,   128,    79,    34,
      23,    24,    37,   105,    27,     7,     8,    36,    34,   126,
     127,    13,    14,    35,    16,    34,   109,   126,   127,     7,
       8,    36,   139,    34,    26,    13,    14,    10,    16,    37,
     139,   133,    13,   126,   127,    36,    38,    39,    26,    35,
       3,    34,    36,     6,     7,    35,   139,     7,     8,    36,
      38,    39,     7,    13,    14,    41,    16,    23,    24,    15,
      18,    27,    25,    76,    -1,    -1,    26,    30,    -1,    35,
      -1,    34,    17,    18,    19,    20,    21,    22,    38,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    37,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    -1,
      -1,    35,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,     5,     9,    11,    43,    44,    45,
      49,    60,    63,    64,    44,    49,    64,    36,    38,    36,
       7,    65,    66,    65,    42,    34,    37,    36,    37,    44,
      50,    47,    63,    64,    65,    65,     8,    13,    14,    16,
      26,    38,    39,    51,    52,    53,    54,    55,    56,    65,
      67,    69,    35,    48,    46,    65,     3,     6,    25,    30,
      34,    36,    57,    58,    59,    65,    67,    68,    70,    34,
      34,    54,    67,    50,    36,    34,    10,    37,    35,    37,
      59,    70,    70,    59,    70,    23,    24,    27,    17,    18,
      19,    20,    21,    22,    29,    30,    31,    32,    36,    59,
      59,    13,    36,    39,    61,    62,    53,    70,    63,    64,
      64,    35,    35,    59,    59,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    35,    35,    34,    35,
      70,    36,    36,    28,    54,    54,    59,    37,    70,    15,
      35,    54,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    42,    43,    43,    44,    44,
      45,    46,    46,    47,    47,    48,    48,    49,    50,    50,
      51,    52,    52,    53,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    56,    56,    57,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    64,    64,    64,    65,    66,    66,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     1,     2,     5,     6,
       2,     0,     3,     0,     2,     0,     3,     5,     0,     2,
       3,     3,     2,     4,     3,     1,     1,     1,     1,     2,
       1,     7,     5,     5,     7,     5,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     2,     3,     2,     0,
       2,     0,     3,     2,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     4,     4,     1,     1,     1,     3,     3,
       3,     3,     3,     2
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
        case 2:
#line 72 "parser.y" /* yacc.c:1646  */
    {
		(yyval.program) = new Program();
		(yyvsp[-1].symbol_table)->set_table_scope(global);
		(yyval.program)->set_global_table(*(yyvsp[-1].symbol_table));
		(yyval.program)->set_procedure_map(*(yyvsp[0].procedure_map));
		program_object = *(yyval.program);
	}
#line 1398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.symbol_table) = new Symbol_Table();
		if(current == global){
			global_table = new list<Symbol_Table_Entry *>();
			(yyval.symbol_table)->set_table_scope(global);
		}
		else {
			local_table = new list<Symbol_Table_Entry *>();	
			(yyval.symbol_table)->set_table_scope(local);
		}
       }
#line 1413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 89 "parser.y" /* yacc.c:1646  */
    {
		(yyval.symbol_table) = (yyvsp[-1].symbol_table);
		for(list<Symbol_Table_Entry*>::iterator it = (yyvsp[0].list_sym )->begin(); it != (yyvsp[0].list_sym )->end() ; ++it){
			(*it)->set_symbol_scope((yyvsp[-1].symbol_table)->get_table_scope());
			(yyval.symbol_table)->push_symbol(*it);
			if (current == global){
				global_table->push_back(*it);
			}
			else {
				local_table->push_back(*it);
			}
		}
		//cout<<"D"<<endl;
	}
#line 1432 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "parser.y" /* yacc.c:1646  */
    {
		if(current == local){
			char numstr[100];
			sprintf(numstr,"cs316: Error : Error in line %d Procedures cannot be declared inside other procedures ",yylineno);
			yyerror(numstr);
			exit(0);			
		}
		(yyval.symbol_table) = (yyvsp[-1].symbol_table);
		//cout<<"func_decl"<<endl;
	}
#line 1447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "parser.y" /* yacc.c:1646  */
    {
		string name = (yyvsp[0].procedure)->get_proc_name();
		(yyval.procedure_map) = new map<string, Procedure* >();
		(*(yyval.procedure_map))[name] = (yyvsp[0].procedure);
	}
#line 1457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 120 "parser.y" /* yacc.c:1646  */
    {
		(yyval.procedure_map) = (yyvsp[-1].procedure_map);
		string name = (yyvsp[0].procedure)->get_proc_name();
		(*(yyval.procedure_map))[name] = (yyvsp[0].procedure);
	}
#line 1467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "parser.y" /* yacc.c:1646  */
    {
		//cout<<"proc "<<*$2<<endl;
		int found = 0;
		for(list<Procedure*>::iterator it = procedures->begin(); it != procedures->end() ; ++it){
			string var_name = (*it)->get_proc_name();
			if(var_name.compare(*(yyvsp[-3].string_value)) == 0) { found = 1; (yyval.procedure) = *it;}
		}
		//cout<<"found "<<found<<endl;
		if(found == 0){
			(yyval.procedure) = new Procedure(*(yyvsp[-4].data_type),*(yyvsp[-3].string_value),yylineno);
			
			//cout<<"not declared before "<<(*$2)<<endl;
			formal_table = new list<Symbol_Table_Entry*>();
			Symbol_Table * sym_tab = new Symbol_Table();
			for(list<Symbol_Table_Entry*>::iterator it = (yyvsp[-1].list_sym )->begin(); it != (yyvsp[-1].list_sym )->end() ; ++it){
				(*it)->set_symbol_scope(formal);
				sym_tab->push_symbol(*it);
				formal_table->push_back(*it);
			}
			(yyval.procedure)->set_formal_param_list(*sym_tab);
			(yyval.procedure)->set_return_type(*(yyvsp[-4].data_type));

			procedures->push_back((yyval.procedure));
		}
		if(found == 1){
			if((yyval.procedure)->is_proc_defined()){
				char numstr[100];
				sprintf(numstr,"cs316: Error : Error in line : %d Procedure with this name is already defined ",yylineno);
				yyerror(numstr);
				exit(0);
			}
			if((yyval.procedure)->get_return_type() != *(yyvsp[-4].data_type)){
				char numstr[100];
				sprintf(numstr,"cs316: Error : Error in line : %d return type in declaration and definition not matching",yylineno);
				yyerror(numstr);
				exit(0);
			}
			//cout<<"declared before"<<endl;
			formal_table = new list<Symbol_Table_Entry*>();
			Symbol_Table * sym_tab = new Symbol_Table();
			for(list<Symbol_Table_Entry*>::iterator it = (yyvsp[-1].list_sym )->begin(); it != (yyvsp[-1].list_sym )->end() ; ++it){
				//cout<<"sym "<<(*it)->get_variable_name()<<endl;
				(*it)->set_symbol_scope(formal);
				sym_tab->push_symbol(*it);
				formal_table->push_back(*it);
			}
			(yyval.procedure)->set_formal_param_list(*sym_tab);
			(yyval.procedure)->set_return_type(*(yyvsp[-4].data_type));

		}
		current = local;
		current_proc = *(yyvsp[-3].string_value);
		//cout<<"proc_end"<<endl;
	}
#line 1526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 181 "parser.y" /* yacc.c:1646  */
    {
		(yyval.procedure) = new Procedure(*(yyvsp[-5].data_type),*(yyvsp[-4].string_value),yylineno);
		procedures->push_back((yyval.procedure));
	}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 187 "parser.y" /* yacc.c:1646  */
    {
		(yyval.procedure) = (yyvsp[-1].procedure);
		current = global;
		current_proc = "";
	}
#line 1545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 193 "parser.y" /* yacc.c:1646  */
    {}
#line 1551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 194 "parser.y" /* yacc.c:1646  */
    {}
#line 1557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 196 "parser.y" /* yacc.c:1646  */
    {
		(yyval.list_sym ) = new list<Symbol_Table_Entry*>();
	}
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 199 "parser.y" /* yacc.c:1646  */
    {
		(yyval.list_sym ) = (yyvsp[0].list_sym );
		(yyval.list_sym )->push_front((yyvsp[-1].symbol_entry));	
	}
#line 1574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.list_sym ) = new list<Symbol_Table_Entry*>();}
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 205 "parser.y" /* yacc.c:1646  */
    {
		(yyval.list_sym ) = (yyvsp[-2].list_sym );
		(yyval.list_sym )->push_back((yyvsp[0].symbol_entry));
	}
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 211 "parser.y" /* yacc.c:1646  */
    {
		string proc_name = (yyvsp[-4].procedure)->get_proc_name();

		(yyval.procedure) = (yyvsp[-4].procedure);
		(yyval.procedure)->set_ast_list(*(yyvsp[-1].ast_list));
		(yyvsp[-2].symbol_table)->set_table_scope(local);
		(yyval.procedure)->set_local_list(*(yyvsp[-2].symbol_table));
		(yyval.procedure)->set_proc_is_defined();
	}
#line 1603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.ast_list) = new list<Ast*>();}
#line 1609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 222 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast_list) = (yyvsp[-1].ast_list);
		(yyval.ast_list)->push_back((yyvsp[0].ast));
		//cout<<"procbody"<<endl;
	}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 229 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast)=new Print_Ast((yyvsp[-1].ast), yylineno);
	}
#line 1627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 233 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Return_Ast((yyvsp[-1].ast), current_proc , yylineno);
	}
#line 1635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 236 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Return_Ast(NULL, current_proc, yylineno);	
	}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 240 "parser.y" /* yacc.c:1646  */
    {
		Call_Ast* temp = new Call_Ast(*(yyvsp[-3].string_value),yylineno);
		// Check if func is defined and get return type
		Data_Type ret_type; 
		int found = 0;

		for(list<Procedure*>::iterator it = procedures->begin(); it != procedures->end() ; ++it){
			string var_name = (*it)->get_proc_name();
			if(var_name.compare(*(yyvsp[-3].string_value)) == 0) { found = 1; ret_type = (*it)->get_return_type();}
		}
		if(found == 0){
			char numstr[100];
			sprintf(numstr,"cs316: Error : semantic error in line %d : Procedure is not defined ", yylineno);
			yyerror(numstr);
			exit(0);
		}

		temp->set_actual_param_list(*(yyvsp[-1].ast_list));
		temp->set_data_type(ret_type);
		(yyval.ast) = temp;
	}
#line 1669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 263 "parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-1].ast_list)->empty()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Block of statements cannot be empty ", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			Sequence_Ast* temp = new Sequence_Ast(yylineno);//check this!!!!!!
			for (list<Ast*>::iterator it = (yyvsp[-1].ast_list)->begin(); it != (yyvsp[-1].ast_list)->end() ; ++it){
				temp->ast_push_back(*it);
			}
			(yyval.ast) = temp;
		}
	}
#line 1689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 278 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 281 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].sel_ast);
	}
#line 1705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 284 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 1713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 287 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 290 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[-1].ast);
	}
#line 1729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 293 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);	
	}
#line 1737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 298 "parser.y" /* yacc.c:1646  */
    {
		(yyval.sel_ast) = new Selection_Statement_Ast((yyvsp[-4].ast),(yyvsp[-2].ast),(yyvsp[0].ast),yylineno);
	}
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 301 "parser.y" /* yacc.c:1646  */
    {
		(yyval.sel_ast) = new Selection_Statement_Ast((yyvsp[-2].ast),(yyvsp[0].ast),NULL,yylineno);
	}
#line 1753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 306 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Iteration_Statement_Ast((yyvsp[-2].ast), (yyvsp[0].ast), yylineno, false);
	}
#line 1761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 309 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Iteration_Statement_Ast((yyvsp[-2].ast), (yyvsp[-5].ast), yylineno, true);
	}
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 314 "parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-2].ast)->get_data_type() != (yyvsp[0].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d :  Conditional statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		(yyval.ast) = new Conditional_Expression_Ast((yyvsp[-4].ast),(yyvsp[-2].ast),(yyvsp[0].ast),yylineno);	
		(yyval.ast)->set_data_type((yyvsp[-2].ast)->get_data_type());
	}
#line 1784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 326 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].ast)->get_data_type() != (yyvsp[0].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			(yyval.ast) = new Relational_Expr_Ast((yyvsp[-2].ast),greater_than,(yyvsp[0].ast),yylineno);
		}
	}
#line 1800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 337 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].ast)->get_data_type() != (yyvsp[0].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			(yyval.ast) = new Relational_Expr_Ast((yyvsp[-2].ast),greater_equalto,(yyvsp[0].ast),yylineno);
		}
		
	}
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 349 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].ast)->get_data_type() != (yyvsp[0].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			(yyval.ast) = new Relational_Expr_Ast((yyvsp[-2].ast),less_than,(yyvsp[0].ast),yylineno);
		}
		
	}
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 361 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].ast)->get_data_type() != (yyvsp[0].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			(yyval.ast) = new Relational_Expr_Ast((yyvsp[-2].ast),less_equalto,(yyvsp[0].ast),yylineno);
		}
		
	}
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 373 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].ast)->get_data_type() != (yyvsp[0].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			(yyval.ast) = new Relational_Expr_Ast((yyvsp[-2].ast),equalto,(yyvsp[0].ast),yylineno);
		}
		
	}
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 385 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].ast)->get_data_type() != (yyvsp[0].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			(yyval.ast) = new Relational_Expr_Ast((yyvsp[-2].ast),not_equalto,(yyvsp[0].ast),yylineno);
		}
		
	}
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 399 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 402 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[-1].ast);
	}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 405 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Logical_Expr_Ast((yyvsp[-2].ast),_logical_and,(yyvsp[0].ast),yylineno);
	}
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 408 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Logical_Expr_Ast((yyvsp[-2].ast),_logical_or,(yyvsp[0].ast),yylineno);
	}
#line 1917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 411 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Logical_Expr_Ast(NULL,_logical_not,(yyvsp[0].ast),yylineno);
	}
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 417 "parser.y" /* yacc.c:1646  */
    {
		(yyval.list_sym ) = new list<Symbol_Table_Entry*>();
		for(int i = 0; i < (yyvsp[-1].vec_string)->size(); i++){
			Symbol_Table_Entry * entry = new Symbol_Table_Entry((*(yyvsp[-1].vec_string))[i],*(yyvsp[-2].data_type),yylineno);
			entry->set_data_type(*(yyvsp[-2].data_type));
			(yyval.list_sym )->push_back(entry);
		}
	}
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 425 "parser.y" /* yacc.c:1646  */
    {
		(yyval.list_sym ) = new list<Symbol_Table_Entry*>();
		(yyval.list_sym )->push_back((yyvsp[-1].symbol_entry));
	}
#line 1947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 431 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast_list) = new list<Ast*>();
	}
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 434 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast_list) = (yyvsp[-1].ast_list);
		(yyval.ast_list)->push_back((yyvsp[0].ast));	
	}
#line 1964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 439 "parser.y" /* yacc.c:1646  */
    {(yyval.ast_list) = new list<Ast*>();}
#line 1970 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 440 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast_list) = (yyvsp[-2].ast_list);
		(yyval.ast_list)->push_back((yyvsp[-1].ast));
	}
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 445 "parser.y" /* yacc.c:1646  */
    {
		(yyval.symbol_entry) = new Symbol_Table_Entry(*(yyvsp[0].string_value),*(yyvsp[-1].data_type),yylineno);
		(yyval.symbol_entry)->set_data_type(*(yyvsp[-1].data_type));
	}
#line 1988 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 451 "parser.y" /* yacc.c:1646  */
    {
		(yyval.data_type) = new Data_Type;
		*(yyval.data_type) = int_data_type;
	}
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 455 "parser.y" /* yacc.c:1646  */
    {
		(yyval.data_type) = new Data_Type;
		*(yyval.data_type) = double_data_type;
	}
#line 2006 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 459 "parser.y" /* yacc.c:1646  */
    {
		(yyval.data_type) = new Data_Type;		
		*(yyval.data_type) = void_data_type;
	}
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 464 "parser.y" /* yacc.c:1646  */
    {
		string * name_str = (yyvsp[0].string_value);
		if ((*name_str).compare("main") != 0) (*name_str).append("_");
		(yyval.string_value) = name_str;
	}
#line 2025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 470 "parser.y" /* yacc.c:1646  */
    {	
		(yyval.vec_string) = new vector<string>();
		(yyval.vec_string)->push_back(*(yyvsp[-2].string_value));
		(yyval.vec_string)->push_back(*(yyvsp[0].string_value));
	}
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 475 "parser.y" /* yacc.c:1646  */
    {
		(yyval.vec_string) = (yyvsp[-2].vec_string);
		(yyval.vec_string)->push_back(*(yyvsp[0].string_value)); 
	}
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 480 "parser.y" /* yacc.c:1646  */
    {		
		
		Symbol_Table_Entry * entry;
		int found = 0; 
		for(list<Symbol_Table_Entry*>::iterator it = local_table->begin(); it != local_table->end() ; ++it){
			string var_name = (*it)->get_variable_name();
			if(var_name.compare(*(yyvsp[0].string_value)) == 0) { found = 1; entry = *it;}	
		}
		if (found == 0){
			for(list<Symbol_Table_Entry*>::iterator it = formal_table->begin(); it != formal_table->end() ; ++it){
				string var_name = (*it)->get_variable_name();
				if(var_name.compare(*(yyvsp[0].string_value)) == 0) { found = 1; entry = *it;}	
			}
		}
		if (found == 0){
			for(list<Symbol_Table_Entry*>::iterator it = global_table->begin(); it != global_table->end() ; ++it){
				string var_name = (*it)->get_variable_name();
				if(var_name.compare(*(yyvsp[0].string_value)) == 0) { found = 1; entry = *it;}	
			}
		}
		
		if(found == 1) {
			(yyval.ast) = new Name_Ast(*(yyvsp[0].string_value),*entry,yylineno);
			(yyval.ast)->set_data_type(entry->get_data_type());
		}
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Variable has not been declared", yylineno);
			yyerror(numstr);
			exit(0);
		}
	}
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 512 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Number_Ast<int>((yyvsp[0].integer_value),int_data_type,yylineno);
	}
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 515 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Number_Ast<double>((yyvsp[0].double_value),double_data_type,yylineno);	
	}
#line 2097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 518 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].ast)->get_data_type() != (yyvsp[-1].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Assignment type mismatch", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			(yyval.ast) = new Assignment_Ast((yyvsp[-3].ast),(yyvsp[-1].ast),yylineno);
		}
	}
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 529 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].ast)->get_data_type() != (yyvsp[-1].ast)->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Assignment type mismatch", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			(yyval.ast) = new Assignment_Ast((yyvsp[-3].ast),(yyvsp[-1].ast),yylineno);
		}
	}
#line 2129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 541 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 544 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 2145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 547 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast)=(yyvsp[0].ast);
    	}
#line 2153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 550 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[-1].ast);
	}
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 553 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Plus_Ast((yyvsp[-2].ast),(yyvsp[0].ast),yylineno);
		Data_Type dt1 = (yyvsp[-2].ast)->get_data_type();
		Data_Type dt2 = (yyvsp[0].ast)->get_data_type();
		if(dt1 == dt2){
			(yyval.ast)->set_data_type(dt1);	
		}
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Arithmetic type mismatch", yylineno);
			yyerror(numstr);
			exit(0);		
		}
	}
#line 2180 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 567 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Minus_Ast((yyvsp[-2].ast),(yyvsp[0].ast),yylineno);
		Data_Type dt1 = (yyvsp[-2].ast)->get_data_type();
		Data_Type dt2 = (yyvsp[0].ast)->get_data_type();
		if(dt1 == dt2){
			(yyval.ast)->set_data_type(dt1);	
		}
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Arithmetic type mismatch", yylineno);
			yyerror(numstr);
			exit(0);		
		}
	}
#line 2199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 581 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Divide_Ast((yyvsp[-2].ast),(yyvsp[0].ast),yylineno);
		Data_Type dt1 = (yyvsp[-2].ast)->get_data_type();
		Data_Type dt2 = (yyvsp[0].ast)->get_data_type();
		if(dt1 == dt2){
			(yyval.ast)->set_data_type(dt1);	
		}	
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error: syntax error in line %d : Arithmetic type mismatch", yylineno);
			yyerror(numstr);
			exit(0);	
		}	
	}
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 595 "parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new Mult_Ast((yyvsp[-2].ast),(yyvsp[0].ast),yylineno);
		Data_Type dt1 = (yyvsp[-2].ast)->get_data_type();
		Data_Type dt2 = (yyvsp[0].ast)->get_data_type();
		if(dt1 == dt2){
			(yyval.ast)->set_data_type(dt1);	
		}
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Arithmetic type mismatch", yylineno);
			yyerror(numstr);
			exit(0);
		}
	}
#line 2237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 609 "parser.y" /* yacc.c:1646  */
    {
		Data_Type dt = (yyvsp[0].ast)->get_data_type();
		(yyval.ast) = new UMinus_Ast((yyvsp[0].ast),NULL,yylineno);
		(yyval.ast)->set_data_type(dt);
	}
#line 2247 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2251 "parser.tab.c" /* yacc.c:1646  */
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

// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "analizador-bison.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "analizador-bison.tab.hh"

// User implementation prologue.

#line 51 "analizador-bison.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 22 "analizador-bison.yy" // lalr1.cc:413

#include "analizar.h"
#include <iostream>

#line 58 "analizador-bison.tab.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 6 "analizador-bison.yy" // lalr1.cc:479
namespace yy {
#line 144 "analizador-bison.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parseador::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parseador::parseador (parser_lexico& analizar_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      analizar (analizar_yyarg)
  {}

  parseador::~parseador ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  parseador::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parseador::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parseador::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parseador::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parseador::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parseador::symbol_number_type
  parseador::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parseador::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parseador::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 4: // "num"
        value.move< float > (that.value);
        break;

      case 3: // "id"
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parseador::stack_symbol_type&
  parseador::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 4: // "num"
        value.copy< float > (that.value);
        break;

      case 3: // "id"
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parseador::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parseador::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
            case 3: // "id"

#line 69 "analizador-bison.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 327 "analizador-bison.tab.cc" // lalr1.cc:636
        break;

      case 4: // "num"

#line 69 "analizador-bison.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< float > (); }
#line 334 "analizador-bison.tab.cc" // lalr1.cc:636
        break;


      default:
        break;
    }
    yyo << ')';
  }
#endif

  inline
  void
  parseador::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parseador::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parseador::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parseador::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parseador::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parseador::debug_level_type
  parseador::debug_level () const
  {
    return yydebug_;
  }

  void
  parseador::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parseador::state_type
  parseador::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parseador::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parseador::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parseador::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (analizar));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 4: // "num"
        yylhs.value.build< float > ();
        break;

      case 3: // "id"
        yylhs.value.build< std::string > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 73 "analizador-bison.yy" // lalr1.cc:859
    {std::cout<<"Código aceptado.\n";return 0;}
#line 562 "analizador-bison.tab.cc" // lalr1.cc:859
    break;


#line 566 "analizador-bison.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parseador::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parseador::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parseador::yypact_ninf_ = -112;

  const signed char parseador::yytable_ninf_ = -57;

  const short int
  parseador::yypact_[] =
  {
      27,    18,    70,     6,  -112,    -3,    72,  -112,  -112,    90,
      91,    92,    93,    87,    12,    88,    78,    82,  -112,  -112,
    -112,  -112,    89,  -112,  -112,  -112,  -112,     6,    99,  -112,
    -112,  -112,  -112,  -112,    19,    14,   100,    94,    74,    90,
      84,    97,    68,    86,   105,    51,    98,    60,  -112,   101,
      25,    90,  -112,  -112,  -112,    -5,  -112,  -112,  -112,   106,
     108,   103,    19,   102,   104,    44,  -112,    50,    75,  -112,
     107,  -112,  -112,  -112,    49,   109,  -112,  -112,    19,  -112,
      96,     6,   110,  -112,  -112,  -112,  -112,  -112,  -112,   112,
    -112,    74,   111,    14,  -112,  -112,  -112,  -112,  -112,  -112,
      53,    44,    44,  -112,    44,    44,   113,  -112,  -112,  -112,
    -112,    74,   114,   116,    90,     6,   115,   117,   102,  -112,
     118,   123,    79,  -112,    75,    75,  -112,  -112,    48,  -112,
    -112,     6,   119,   120,  -112,  -112,   121,   125,  -112,   126,
      79,   122,     6,   127,   133,   121,   124,    81,    85,   128,
    -112,   130,  -112,  -112,   137,   138,   139,   131,  -112,  -112,
       6,  -112,  -112,   132,     6,   134,     6,   136,  -112,   140,
    -112,  -112
  };

  const unsigned char
  parseador::yydefact_[] =
  {
       0,     0,     0,     4,     1,    59,     0,    51,    52,     6,
       0,     0,     0,     0,    28,     0,     0,     0,    37,    40,
      41,    43,     0,    46,    48,    44,    47,     4,     0,    62,
      38,    39,    42,    36,    66,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,    25,    20,     0,
       0,     6,     2,    45,     3,    59,    61,    69,    70,     0,
       0,     0,    66,    83,    82,     0,    58,     0,    76,    79,
       0,    60,     8,     9,     0,     0,     5,     7,    66,    63,
       0,    50,     0,    17,    18,    21,    22,    24,    23,    28,
      19,     0,     0,     0,    68,    67,    16,    65,    83,    82,
       0,     0,     0,    71,     0,     0,     0,    73,    72,    74,
      75,     0,     0,     0,     6,    50,     0,     0,     0,    27,
       0,     0,    55,    84,    77,    78,    81,    80,     0,    57,
      10,    50,     0,     0,    49,    30,    35,     0,    26,    82,
      54,     0,    50,     0,     0,    35,     0,     0,    13,     0,
      64,     0,    34,    15,     0,     0,     0,     0,    11,    14,
      50,    32,    33,     0,    50,     0,    50,     0,    29,     0,
      12,    31
  };

  const short int
  parseador::yypgoto_[] =
  {
    -112,  -112,    95,   -38,  -112,     8,    32,  -112,  -112,  -112,
    -112,   -14,  -112,  -112,  -112,  -112,    35,  -112,  -112,  -112,
    -112,   -16,     2,  -111,   -28,  -112,  -112,   129,   135,  -112,
    -112,   -59,  -112,  -112,  -112,   -63,   -12,   -13
  };

  const short int
  parseador::yydefgoto_[] =
  {
      -1,     2,    17,    40,    18,    74,    75,    19,   158,    20,
      21,    22,    48,    23,    89,    24,    49,   145,    25,    26,
     156,   146,   115,   116,    28,   129,    37,    29,    30,    31,
      32,    61,    62,    33,   111,    67,    68,    69
  };

  const short int
  parseador::yytable_[] =
  {
      47,    76,   100,    97,   134,    27,    60,    34,    93,     5,
      35,     6,    36,    92,    36,    45,    46,    63,    64,   113,
     141,    66,    57,    58,    65,     7,     8,     9,    55,    27,
     122,   149,    10,    11,    60,     3,    12,    13,     7,     8,
      14,    15,    16,     1,     7,     8,    59,    98,    99,   165,
      60,    98,   139,   167,    65,   169,   101,   102,    65,   101,
     102,    34,   103,    83,   123,   140,    85,    86,    87,    88,
       4,   107,   108,   109,   110,    47,   133,    72,    73,    66,
      79,    80,    38,   104,   105,   101,   102,   154,   155,   124,
     125,   126,   127,    39,    41,    42,    43,    44,    50,    51,
      52,    53,    55,    81,    70,    77,    71,    78,    82,    94,
      84,    95,    34,    90,    96,   118,   -56,   114,   157,   130,
     112,   117,    54,   120,   119,   106,   128,   132,   147,   152,
     137,   131,   121,   135,   136,   138,   142,   151,   -53,   150,
     148,   143,   153,   161,     0,   162,   159,   160,   164,   166,
     163,     0,   168,   144,   170,     0,     0,    56,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91
  };

  const short int
  parseador::yycheck_[] =
  {
      14,    39,    65,    62,   115,     3,    34,    10,    13,     3,
      13,     5,    17,    51,    17,     3,     4,     3,     4,    78,
     131,    35,     3,     4,    10,    19,    20,    21,     3,    27,
      93,   142,    26,    27,    62,    17,    30,    31,    19,    20,
      34,    35,    36,    16,    19,    20,    27,     3,     4,   160,
      78,     3,     4,   164,    10,   166,     6,     7,    10,     6,
       7,    10,    12,    12,    11,   128,     6,     7,     8,     9,
       0,    22,    23,    24,    25,    89,   114,     3,     4,    93,
      12,    13,    10,     8,     9,     6,     7,     6,     7,   101,
     102,   104,   105,     3,     3,     3,     3,    10,    10,    21,
      18,    12,     3,    17,     4,    21,    12,    10,     3,     3,
      12,     3,    10,    12,    11,     3,    12,    21,    33,   111,
      11,    11,    27,    91,    89,    18,    13,    11,     3,   145,
      12,    17,    21,    18,    17,    12,    17,     4,    12,    12,
      18,    21,    18,     6,    -1,     7,    18,    17,    17,    17,
      11,    -1,    18,    32,    18,    -1,    -1,    28,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50
  };

  const unsigned char
  parseador::yystos_[] =
  {
       0,    16,    38,    17,     0,     3,     5,    19,    20,    21,
      26,    27,    30,    31,    34,    35,    36,    39,    41,    44,
      46,    47,    48,    50,    52,    55,    56,    59,    61,    64,
      65,    66,    67,    70,    10,    13,    17,    63,    10,     3,
      40,     3,     3,     3,    10,     3,     4,    48,    49,    53,
      10,    21,    18,    12,    39,     3,    64,     3,     4,    27,
      61,    68,    69,     3,     4,    10,    48,    72,    73,    74,
       4,    12,     3,     4,    42,    43,    40,    21,    10,    12,
      13,    17,     3,    12,    12,     6,     7,     8,     9,    51,
      12,    65,    40,    13,     3,     3,    11,    68,     3,     4,
      72,     6,     7,    12,     8,     9,    18,    22,    23,    24,
      25,    71,    11,    68,    21,    59,    60,    11,     3,    53,
      43,    21,    72,    11,    73,    73,    74,    74,    13,    62,
      42,    17,    11,    40,    60,    18,    17,    12,    12,     4,
      72,    60,    17,    21,    32,    54,    58,     3,    18,    60,
      12,     4,    58,    18,     6,     7,    57,    33,    45,    18,
      17,     6,     7,    11,    17,    60,    17,    60,    18,    60,
      18,    18
  };

  const unsigned char
  parseador::yyr1_[] =
  {
       0,    37,    38,    39,    39,    40,    40,    41,    42,    42,
      43,    44,    45,    45,    46,    47,    48,    49,    49,    49,
      50,    51,    51,    51,    51,    51,    52,    53,    53,    54,
      55,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    63,    63,    63,
      64,    65,    65,    66,    67,    68,    68,    69,    69,    69,
      69,    70,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    74,    74,    74
  };

  const unsigned char
  parseador::yyr2_[] =
  {
       0,     2,     4,     2,     0,     2,     0,     3,     1,     1,
       3,     8,     4,     0,     8,     7,     4,     2,     2,     2,
       2,     1,     1,     1,     1,     0,     5,     3,     0,     5,
       5,    11,     2,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       0,     1,     1,     2,     2,     2,     2,     4,     2,     0,
       3,     2,     1,     3,     7,     2,     0,     2,     2,     1,
       1,     4,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     1,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parseador::yytname_[] =
  {
  "\"eof\"", "error", "$undefined", "\"id\"", "\"num\"", "\"IF\"",
  "\"+\"", "\"-\"", "\"/\"", "\"*\"", "\"(\"", "\")\"", "\";\"", "\"=\"",
  "\"{\"", "\"}\"", "\"MAIN\"", "\"[\"", "\"]\"", "\"INT\"", "\"FLOAT\"",
  "\"//\"", "\">=\"", "\">\"", "\"<\"", "\"<=\"", "\"FUNCION\"", "\"STR\"",
  "\"BOOL\"", "\"WHILE\"", "\"CLASS\"", "\"SWITCH\"", "\"CASE\"",
  "\"ELSE\"", "\"RETORNAR\"", "\"FOR\"", "\"MOSTRAR\"", "$accept", "I",
  "RESERVADAS", "STRING", "COMENTARIO", "COMP1", "COMP", "IFCOND",
  "ELSEAR", "FUNCION1", "SHIFT", "FUNCIONLLAMADA", "RETORNAR2",
  "RETORNAR1", "POSIBLESSIMBOLOS", "MOST", "REPETIRFUNCIONLLAMADA",
  "CASEAR", "CLASE", "FOR1", "MENTOS", "OPCIONESCASE", "INSTRUCCIONES",
  "REPETIRINSTRUCCIONES", "TIPOSDENUMEROS", "ASIGNACIONNUMERO4",
  "ASIGNACIONNUMERO3", "ASIGNACIONNUMERO2", "ASIGNACIONNUMERO",
  "ASIGNACIONSTRING", "ASIGNACIONCOMPLETASTRING", "ASIGPARAMETRO",
  "PARAPARAMETRO", "OPERACIONENTERA", "RELACIONALES", "OPERACION",
  "OPERACION2", "OPERACION3", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned char
  parseador::yyrline_[] =
  {
       0,    73,    73,    75,    76,    79,    80,    82,    84,    85,
      87,    89,    91,    92,    94,    96,    98,   100,   101,   102,
     104,   106,   107,   108,   109,   110,   112,   114,   115,   117,
     119,   121,   123,   124,   127,   128,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   144,
     145,   147,   147,   149,   150,   152,   153,   154,   155,   156,
     159,   161,   162,   164,   166,   168,   169,   171,   172,   173,
     174,   176,   178,   179,   180,   181,   185,   185,   185,   186,
     186,   186,   187,   187,   187
  };

  // Print the state stack on the debug stream.
  void
  parseador::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parseador::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 6 "analizador-bison.yy" // lalr1.cc:1167
} // yy
#line 1059 "analizador-bison.tab.cc" // lalr1.cc:1167
#line 188 "analizador-bison.yy" // lalr1.cc:1168

void yy::parseador::error(const location_type& lugar, const std::string& lexema)
{
  std::cout << "//" << lexema <<" en linea " << line_num <<" //\n";
}

/* Reverse polish notation calculator.  */
%{
  #include <iostream>
  #include <string>
  #include "helper_files/part2_helpers.c"
  
  using namespace std;

  int yylex (void);
  void yyerror (char const *);
%}

%define api.value.type {double}
%token NUM
%token NUM
%token NUM
%token NUM
%token NUM
%token NUM
%token NUM
%token NUM
%token NUM
%token NUM
%right '='
%left '+' '-'
%left '*' '/'

%%
/* Grammar */



%%


%{

  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include "string.h"
  extern int yylex(void);
  extern char *yytext;
  extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);
%}


%union
{
  float real;
  int numero;
  char* texto;
}


%start lista_i;


%token <real> NUMEROR
%token <numero> NUMEROE
%token <texto> IDENTIFICADOR
%token PARA
%token PARC
%token COMA
%token IGUAL
%token MAYOR
%token CORCHA
%token CORCHC
%token PUNTOCOMA


%type <texto>asignacion

%%


lista_i : 	lista_i i;
			| i
			;
i:			asignacion PUNTOCOMA
			|error PUNTOCOMA
			;

asignacion:	    IDENTIFICADOR IGUAL NUMEROE  {printf(" Valor %d asignado coreectamente \n",$3);};
				|IDENTIFICADOR IGUAL NUMEROR  {printf(" Valor %1.0f asignado coreectamente\n",$3);}
			;	
			

%%
/**********************
 * Codigo C Adicional *
 **********************/
void yyerror(char *s)
{
	printf("Error sintactico %s \n",s);
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

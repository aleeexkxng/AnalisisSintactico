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
%token LLAVEA
%token LLAVEC
%token PUNTOCOMA
%token NO
%token MENOR


%type <texto>asignacion
%type <texto>ciclo_for
%type <texto>ciclo_while
%type <texto>ciclo_dowhile
%type <texto>comparacion


%%


lista_i : 	lista_i i;
			| i
			;
i:			asignacion PUNTOCOMA
            |ciclo_for 
            |comparacion PUNTOCOMA
            |ciclo_while
            |ciclo_dowhile PUNTOCOMA
			|error PUNTOCOMA
			;
			

asignacion:	    IDENTIFICADOR IGUAL NUMEROE  {printf(" Valor %d asignado coreectamente \n",$3);}
                |IDENTIFICADOR  IGUAL IDENTIFICADOR {printf("Linea aceptada\n");}
				|IDENTIFICADOR IGUAL NUMEROR  {printf(" Valor %1.0f asignado coreectamente\n",$3);}
				|asignacion COMA
			;
			
comparacion:    IDENTIFICADOR IGUAL IGUAL IDENTIFICADOR {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR IGUAL IGUAL NUMEROE {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR MENOR IGUAL IDENTIFICADOR {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR MENOR IGUAL NUMEROE {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR MAYOR IGUAL IDENTIFICADOR {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR MAYOR IGUAL NUMEROE {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR NO IGUAL IDENTIFICADOR {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR NO IGUAL NUMEROE {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR MAYOR NUMEROE {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR MAYOR IDENTIFICADOR {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR MENOR NUMEROE {printf("Comparacion Exitosa\n");}
                |IDENTIFICADOR MENOR IDENTIFICADOR {printf("Comparacion Exitosa\n");}
                ;
                
ciclo_for:      IDENTIFICADOR PARA asignacion PUNTOCOMA comparacion PUNTOCOMA asignacion PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA PUNTOCOMA comparacion PUNTOCOMA asignacion PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA asignacion PUNTOCOMA PUNTOCOMA asignacion PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA asignacion PUNTOCOMA comparacion PUNTOCOMA PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA PUNTOCOMA PUNTOCOMA asignacion PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA PUNTOCOMA comparacion PUNTOCOMA PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA asignacion PUNTOCOMA PUNTOCOMA PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                ;
                
ciclo_while:    IDENTIFICADOR PARA comparacion PARC LLAVEA LLAVEC {printf("Ciclo While Exitoso\n");}
                |IDENTIFICADOR PARA PARC LLAVEA LLAVEC {printf("Ciclo While Exitoso\n");}
                ;
    
ciclo_dowhile:  IDENTIFICADOR LLAVEA LLAVEC IDENTIFICADOR PARA comparacion PARC {printf("Ciclo Do-While Exitoso\n");}
                |IDENTIFICADOR LLAVEA LLAVEC IDENTIFICADOR PARA PARC {printf("Ciclo Do- While Exitoso\n");}
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

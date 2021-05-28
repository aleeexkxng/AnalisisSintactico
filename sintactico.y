%{

  #include <stdio.h>
  #include <stdlib.h>
  #include <iostream>
  #include <math.h>
  #include <list>
  #include "string.h"
  #include <utility>
  #include <string>
  extern "C" int yylex(void);
  extern char *yytext;
  extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);

  bool existVariable(std::string);

  std::list<std::pair<std::string, std::string>> variables;
  std::pair<std::string, std::string> data;
%}


%union
{
  float real;
  int numero;
  char* texto;
}


%start lista_i;


%token <real>NUMEROR
%token <numero>NUMEROE
%token <texto>CHAR_DATATYPE
%token <texto>INT_DATATYPE
%token <texto>STRING_DATATYPE
%token <texto>FLOAT_DATATYPE
%token <texto>IDENTIFICADOR
%token <texto>CADENA
%token <texto>CHAR
%token <texto>OPERATION
%token <texto>EQUALARITHMETIC_OPERATORS
%token <texto>ARITHMETIC_OPERATOR
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
%token DOSPUNTOS
%token MENOR
%token PIPE
%token AMPERSAND
%token <texto>OPERATOR
%token <texto>INC_DEC
%token <texto>OPERATOR_FLUJO_IN
%token <texto>OPERATOR_FLUJO_OUT

%type <texto>asignacion
%type <texto>ciclo_for
%type <texto>ciclo_while
%type <texto>ciclo_dowhile
%type <texto>comparacion
%type <texto>cin
%type <texto>cin_aux
%type <texto>cout
%type <texto>cout_aux
%type <texto>switch
%type <texto>switch_aux

%type <texto>incremento_decremento
%type <texto>incremento_decremento_for
%type <texto>funcion
%type <texto>condicion_if
%type <texto>sino_else

%%


lista_i : 	lista_i i;
			| i
			;
i:	    asignacion PUNTOCOMA
            |ciclo_for 
            |comparacion PUNTOCOMA
            |ciclo_while
            |ciclo_dowhile PUNTOCOMA
            |cin
            |cout
            |switch
            |incremento_decremento
            |declaraciones PUNTOCOMA
            |funcion
            |condicion_if
            |sino_else
			|error PUNTOCOMA
			;

cin_aux:	OPERATOR_FLUJO_IN IDENTIFICADOR cin_aux
		| OPERATOR_FLUJO_IN IDENTIFICADOR
		;

cout_aux:	OPERATOR_FLUJO_OUT IDENTIFICADOR cout_aux
		|OPERATOR_FLUJO_OUT CADENA cout_aux
		|OPERATOR_FLUJO_OUT CHAR cout_aux
		|OPERATOR_FLUJO_OUT NUMEROE cout_aux
		|OPERATOR_FLUJO_OUT NUMEROR cout_aux
		|OPERATOR_FLUJO_OUT IDENTIFICADOR
		|OPERATOR_FLUJO_OUT NUMEROE
		|OPERATOR_FLUJO_OUT NUMEROR
		|OPERATOR_FLUJO_OUT CADENA
		|OPERATOR_FLUJO_OUT CHAR
		;

switch_aux:	IDENTIFICADOR DOSPUNTOS switch_aux
		|IDENTIFICADOR DOSPUNTOS
		;

switch:		IDENTIFICADOR PARA IDENTIFICADOR PARC switch_aux LLAVEA LLAVEC {printf("switch correcto\n");}
		;

cin: 		IDENTIFICADOR cin_aux PUNTOCOMA {printf("cin ejecutado correctamente\n");}
		;

cout: 		IDENTIFICADOR cout_aux PUNTOCOMA {printf("cout ejecutado correctamente\n");}
		;

asignacion:	    IDENTIFICADOR IGUAL NUMEROE  {printf(" Valor %d asignado coreectamente \n",$3);}
                |IDENTIFICADOR  IGUAL IDENTIFICADOR {printf("Linea aceptada\n");}
				|IDENTIFICADOR IGUAL NUMEROR  {printf(" Valor %1.0f asignado coreectamente\n",$3);}
			|IDENTIFICADOR IGUAL OPERATION {printf("Valor de operacion asiganado correctamente\n");}
			|IDENTIFICADOR EQUALARITHMETIC_OPERATORS NUMEROE {printf("Valor de operacion asiganado correctamente\n");}
			|IDENTIFICADOR EQUALARITHMETIC_OPERATORS NUMEROR {printf("Valor de operacion asiganado correctamente\n");}
			|IDENTIFICADOR IGUAL CADENA {printf("Valor %s asiganado correctamente\n", $3);}
			|IDENTIFICADOR IGUAL CHAR {printf("Valor %s asiganado correctamente\n", $3);}
			;

incremento_decremento:	IDENTIFICADOR INC_DEC PUNTOCOMA {printf("Decremento/incremento exito\n");}
			;

incremento_decremento_for: IDENTIFICADOR INC_DEC
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
                
ciclo_for:      IDENTIFICADOR PARA asignacion PUNTOCOMA comparacion PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA PUNTOCOMA comparacion PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA asignacion PUNTOCOMA PUNTOCOMA incremento_decremento_for PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA asignacion PUNTOCOMA comparacion PUNTOCOMA PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA PUNTOCOMA PUNTOCOMA asignacion PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA PUNTOCOMA comparacion PUNTOCOMA PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                |IDENTIFICADOR PARA asignacion PUNTOCOMA PUNTOCOMA PARC LLAVEA LLAVEC  {printf("Ciclo for aceptado\n");}
                ;
                
ciclo_while:    IDENTIFICADOR PARA comparacion PARC LLAVEA LLAVEC {printf("Instruccion Exitosa\n");}
                |IDENTIFICADOR PARA PARC LLAVEA LLAVEC {printf("Instruccion Exitosa\n");}
                ;
    
ciclo_dowhile:  IDENTIFICADOR LLAVEA LLAVEC IDENTIFICADOR PARA comparacion PARC {printf("Ciclo Do-While Exitoso\n");}
                |IDENTIFICADOR LLAVEA LLAVEC IDENTIFICADOR PARA PARC {printf("Ciclo Do- While Exitoso\n");}
                ;
                
declaraciones:  INT_DATATYPE IDENTIFICADOR IGUAL NUMEROE {printf("Declaración exitosa NUMERO entero\n");}
		|FLOAT_DATATYPE IDENTIFICADOR IGUAL NUMEROR {printf("Declaración exitosa numero real\n");}
		|STRING_DATATYPE IDENTIFICADOR IGUAL CADENA {printf("Declaración exitosa string\n");}
		|CHAR_DATATYPE IDENTIFICADOR IGUAL CHAR {printf("Declaración exitosa char\n");}
		|INT_DATATYPE IDENTIFICADOR {if (existVariable($2)) {
							printf("Error semantico, variable ya declarada\n");						
						} else {
							printf("variable declarada con exito!, int\n");
							data.first=$2; data.second="int";
							variables.push_back(data);
						} }
		|FLOAT_DATATYPE IDENTIFICADOR {}
		|STRING_DATATYPE IDENTIFICADOR {}
		|CHAR_DATATYPE IDENTIFICADOR {}
	;
	
condicion_if:   IDENTIFICADOR PARA asignacion PARC LLAVEA LLAVEC {printf("Condicion if exitosa \n");}
                |IDENTIFICADOR PARA comparacion PIPE PIPE comparacion PARC LLAVEA LLAVEC {printf("Condicion if exitosa \n");}
                |IDENTIFICADOR PARA comparacion AMPERSAND AMPERSAND comparacion PARC LLAVEA LLAVEC {printf("Condicion if exitosa \n");}
                ;
                
sino_else:      IDENTIFICADOR LLAVEA LLAVEC {printf("Else exitoso \n");}
                |IDENTIFICADOR  {printf("Else exitoso \n");}
                ;
                
funcion:        INT_DATATYPE IDENTIFICADOR PARA PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |INT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |INT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |INT_DATATYPE IDENTIFICADOR PARA PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                |INT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                |INT_DATATYPE PARA IDENTIFICADOR PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
		|FLOAT_DATATYPE IDENTIFICADOR PARA PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |FLOAT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |FLOAT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |FLOAT_DATATYPE IDENTIFICADOR PARA PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                |FLOAT_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                |FLOAT_DATATYPE PARA IDENTIFICADOR PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
		|STRING_DATATYPE IDENTIFICADOR PARA PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |STRING_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |STRING_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |STRING_DATATYPE IDENTIFICADOR PARA PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                |STRING_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                |STRING_DATATYPE PARA IDENTIFICADOR PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
		|CHAR_DATATYPE IDENTIFICADOR PARA PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |CHAR_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |CHAR_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR PARC PUNTOCOMA {printf("Funcion exitosa \n");}
                |CHAR_DATATYPE IDENTIFICADOR PARA PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                |CHAR_DATATYPE IDENTIFICADOR PARA IDENTIFICADOR COMA IDENTIFICADOR PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                |CHAR_DATATYPE PARA IDENTIFICADOR PARC LLAVEA LLAVEC {printf("Funcion exitosa \n");}
                ;

%%
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

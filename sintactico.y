%{
    
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
%token <texto>PARA
%token <texto>PARC
%token <texto>COMA
%token <caracter>IGUAL
%token <texto>MAYOR
%token <texto>CORCHA
%token <texto>CORCHC
%token <texto>LLAVEA
%token <texto>LLAVEC
%token <texto>PUNTOCOMA
%token <texto>NO
%token <texto>DOSPUNTOS
%token <texto>MENOR
%token <texto>PIPE
%token <texto>AMPERSAND
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

asignacion:	    IDENTIFICADOR IGUAL NUMEROE {char* buff=$1; std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
						 if (getDataType(aux) == "int") {
                            printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
                |IDENTIFICADOR  IGUAL IDENTIFICADOR {char* buff=$1;int i; std::string aux(""),aux2("");
						 for(i =0; buff[i]!='=';++i) {aux+=buff[i];}
                        i++;
                        for(; buff[i]!='\0';++i) {aux2+=buff[i];}
						 if (getDataType(aux) == getDataType(aux2)) {
                            printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
                
                
                }
				|IDENTIFICADOR IGUAL NUMEROR  {char* buff=$1; std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux) == "float") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
			|IDENTIFICADOR IGUAL OPERATION {char* buff=$1; std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux) == "float"|| getDataType(aux)=="int") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
			|IDENTIFICADOR EQUALARITHMETIC_OPERATORS NUMEROE {char* buff=$1; std::string aux("");
						 for(int i(0); buff[i]!='+';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="int") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
			|IDENTIFICADOR EQUALARITHMETIC_OPERATORS NUMEROR {char* buff=$1; std::string aux("");
						 for(int i(0); buff[i]!='+';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="float") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
			|IDENTIFICADOR IGUAL CADENA{char* buff=$1; std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="string") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
			|IDENTIFICADOR IGUAL CHAR {char* buff=$1; std::string aux("");
						 for(int i(0); buff[i]!='=';++i) {aux+=buff[i];}
                            if (getDataType(aux)=="char") {
                                printf("Asignacion correcta");
                            } 
						 else {
                            printf("Error, variable no declarada o tipo de dato incorrecto");
                            }
						}
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
                
declaraciones:  INT_DATATYPE IDENTIFICADOR IGUAL NUMEROE {char* buff=$2; std::string aux("");
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
		|FLOAT_DATATYPE IDENTIFICADOR IGUAL NUMEROR {char* buff=$2; std::string aux("");
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
		|STRING_DATATYPE IDENTIFICADOR IGUAL CADENA {char* buff=$2; std::string aux("");
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
		|CHAR_DATATYPE IDENTIFICADOR IGUAL CHAR {char* buff=$2; std::string aux("");
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
		|INT_DATATYPE IDENTIFICADOR { char* buff=$2; std::string aux("");
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
		|FLOAT_DATATYPE IDENTIFICADOR {char* buff=$2; std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, float\n");
                                        data.first=aux; data.second="float";
                                        variables.push_back(data);
                                        }  }
		|STRING_DATATYPE IDENTIFICADOR {
                                        char* buff=$2; std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, string\n");
                                        data.first=aux; data.second="string";
                                        variables.push_back(data);
                                        } }
		|CHAR_DATATYPE IDENTIFICADOR {char* buff=$2; std::string aux("");
                                        for(int i(0); buff[i]!=';';++i) {aux+=buff[i];}
                                        if (existVariable(aux)) {
                                        printf("Error semantico, variable ya declarada\n");			
                                        } 
                                      else {
                                        printf("variable declarada con exito!, char\n");
                                        data.first=aux; data.second="char";
                                        variables.push_back(data);
                                        }  }
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

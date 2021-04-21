%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "sintactico.tab.h"	
	
	int linea=0;
%}

LETRA [a-zA-ZñÑ]
DIGITO [0-9]
NUMEROE {DIGITO}+
NUMEROR {DIGITO}+"."{DIGITO}+
IDENTIFICADOR   {LETRA}+({LETRA}|{DIGITO}|"_")*



%%

{IDENTIFICADOR} {yylval.texto=yytext; return (IDENTIFICADOR);}
{NUMEROE} {yylval.numero=atoi(yytext); return(NUMEROE);}
{NUMEROR} {yylval.real=atof(yytext); return(NUMEROR);}
"(" 	{return(PARA);}
")" 	{return(PARC);}
"," 	{return(COMA);}
"=" 	{return(IGUAL);}
">" 	{return(MAYOR);}
"[" 	{return(CORCHA);}
"]" 	{return(CORCHC);}
";" 	{return(PUNTOCOMA);}
"\n" 	{linea++;}
[\t\r\f] {}
" "		{}
 
.	{printf("Error lexico en linea %d",linea);}
%%





%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "sintactico.tab.h"	
	
	int linea=0;
%}

LETRA [a-zA-ZñÑ]
DIGITO [0-9]
NUMEROE ("-"{DIGITO}+|{DIGITO}+)
NUMEROR {DIGITO}+"."{DIGITO}+
IDENTIFICADOR   {LETRA}+({LETRA}|{DIGITO}|"_")*
CHAR "'"(.)"'"
CADENA "\""(.)*"\""

OPERATOR_FLUJO_IN ">>"
OPERATOR_FLUJO_OUT "<<"

INC_DEC "++"|"--"

%%

{IDENTIFICADOR} {yylval.texto=yytext; return (IDENTIFICADOR);}
{NUMEROE} {yylval.numero=atoi(yytext); return(NUMEROE);}
{NUMEROR} {yylval.real=atof(yytext); return(NUMEROR);}
{INC_DEC} {yylval.texto=yytext; return(INC_DEC);}
{OPERATOR_FLUJO_IN} {yylval.texto=yytext; return (OPERATOR_FLUJO_IN);}
{OPERATOR_FLUJO_OUT} {yylval.texto=yytext; return (OPERATOR_FLUJO_OUT);}
{CADENA} {yylval.texto=yytext; return (CADENA);}
{CHAR} {yylval.texto=yytext; return (CHAR);}

"+" 	{return(MAS);}
"-" 	{return(MENOS);}
"*" 	{return(POR);}
"/" 	{return(ENTRE);}
"%" 	{return(MODULO);}
"(" 	{return(PARA);}
")" 	{return(PARC);}
"," 	{return(COMA);}
"=" 	{return(IGUAL);}
"!" 	{return(NO);}
"<" 	{return(MENOR);}
">" 	{return(MAYOR);}
"[" 	{return(CORCHA);}
"]" 	{return(CORCHC);}
"{" 	{return(LLAVEA);}
"}" 	{return(LLAVEC);}
";" 	{return(PUNTOCOMA);}
":"	{return(DOSPUNTOS);}
"\n" 	{linea++;}
[\t\r\f\n] {}
" "		{}
 
.	{printf("Error lexico en linea %d",linea);}
%%





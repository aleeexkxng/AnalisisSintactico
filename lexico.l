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

NUMBER ({NUMEROE}|{NUMEROR}|{IDENTIFICADOR})

EQUALARITHMETIC_OPERATORS ("+="|"-="|"*="|"/=")
ARITHMETIC_OPERATOR ("%"|"+"|"-"|"*"|"/")

A {NUMBER}{ARITHMETIC_OPERATOR}
B {ARITHMETIC_OPERATOR}{NUMBER}

OPERATION_0 {NUMBER}({ARITHMETIC_OPERATOR}{NUMBER})+
OPERATION_A "("{OPERATION_0}")"
OPERATION_B ("("|{A})*{OPERATION_A}({B}|")")*
OPERATION_C "("{OPERATION_B}")"

OPERATION ({NUMBER}|({OPERATION_0}|{OPERATION_A}|{OPERATION_B}|{OPERATION_C}))({ARITHMETIC_OPERATOR}({OPERATION_0}|{OPERATION_A}|{OPERATION_B}|{OPERATION_C}|{NUMBER}))*


%%

{IDENTIFICADOR} {yylval.texto=yytext; return (IDENTIFICADOR);}
{NUMEROE} {yylval.numero=atoi(yytext); return(NUMEROE);}
{NUMEROR} {yylval.real=atof(yytext); return(NUMEROR);}
{INC_DEC} {yylval.texto=yytext; return(INC_DEC);}
{OPERATOR_FLUJO_IN} {yylval.texto=yytext; return (OPERATOR_FLUJO_IN);}
{OPERATOR_FLUJO_OUT} {yylval.texto=yytext; return (OPERATOR_FLUJO_OUT);}
{CADENA} {yylval.texto=yytext; return (CADENA);}
{CHAR} {yylval.texto=yytext; return (CHAR);}
{EQUALARITHMETIC_OPERATORS} {yylval.texto=yytext; return (EQUALARITHMETIC_OPERATORS);}
{ARITHMETIC_OPERATOR} {yylval.texto=yytext; return (ARITHMETIC_OPERATOR);}
{OPERATION} {yylval.texto=yytext; return (OPERATION);}


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





#!/bin/bash
bison -d sintactico.y
flex lexico.l
g++ lex.yy.c sintactico.tab.c -o analizador -lfl -lm


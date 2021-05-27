#!/bin/bash
flex lexico.l
bison -d sintactico.y
g++ lex.yy.c sintactico.tab.c -o analizador -lfl -lm


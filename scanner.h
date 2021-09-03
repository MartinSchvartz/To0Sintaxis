#include <stdio.h>
#include <ctype.h>
#include <string.h>
//
// Created by martin on 8/10/2021.
//
enum TokenType{FIN_DE_TEXTO,SEPARADOR,CADENA};
char lexemaCorrespondiente[100];
#ifndef TP1PRO_SCANNER_H
#define TP1PRO_SCANNER_H
int get_token();
#endif //TP1PRO_SCANNER_H

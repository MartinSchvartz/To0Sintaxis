#include <stdio.h>
#include <ctype.h>
//
// Created by martin on 8/10/2021.
//
enum token {
    FDT = EOF,
    SEP =',',
};
#ifndef TP1PRO_SCANNER_H
#define TP1PRO_SCANNER_H
void get_token(int);
#endif //TP1PRO_SCANNER_H

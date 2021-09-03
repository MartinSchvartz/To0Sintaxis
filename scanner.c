//
// Created by martin on 8/10/2021.
//
#include "scanner.h"
int get_token(){
    int caracter_a_leer;
    int miToken;
    for (int j = 0; j < 100; ++j) {
        lexemaCorrespondiente[j] = '\0';
    }
    miToken = getchar();
    if (miToken == ','){
        miToken =  SEPARADOR;
        lexemaCorrespondiente[0] = ',';
        return miToken;
    }else if (miToken == EOF){
        miToken = FIN_DE_TEXTO;
        return miToken;
    } else if(!isspace(miToken)){
        ungetc(miToken, stdin);
        caracter_a_leer = getchar();
        int i = 0;
        while (caracter_a_leer != ',' && !isspace(caracter_a_leer) && caracter_a_leer != EOF){
            lexemaCorrespondiente[i] = (char)caracter_a_leer;
            caracter_a_leer = getchar();
            i++;
        }
        ungetc(caracter_a_leer,stdin);
        miToken = CADENA;
        return miToken;
    } else{
        return miToken;
    }
}

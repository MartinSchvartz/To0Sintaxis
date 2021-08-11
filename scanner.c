//
// Created by martin on 8/10/2021.
//

#include <stdio.h>
#include <ctype.h>
#include "scanner.h"
void get_token(int caracter){

    while(caracter != FDT){
        caracter = getchar();
        if(caracter == SEP) {
                printf("\nSeparador: %c", (char) caracter);
        }else {

            if (isspace(caracter) == 0)
                printf("\nCadena: ");
            while (caracter != SEP && caracter != FDT && isspace(caracter) == 0) {

                printf("%c", (char) caracter);
                caracter = getchar();
            }
            if (caracter == SEP) {
                printf("\nSeparador: %c", (char) caracter);
            }
        }
        }
    printf("\nFin de Texto:");
}

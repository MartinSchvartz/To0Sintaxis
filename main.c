
#include "scanner.h"
int main(void) {
    int token;
    token = get_token();
    while (token != FDT){
            if(token == SEP) {
                printf("\nSeparador: %c", (char) token);
            }else {

                if (isspace(token) == 0)
                    printf("\nCadena: ");
                while (token != SEP && token != FDT && isspace(token) == 0) {

                    printf("%c", (char) token);
                    token = get_token();
                }
                if (token == SEP) {
                    printf("\nSeparador: %c", (char) token);
                }
            }

        token = get_token();
    }
    printf("\nFin de texto: ");

    return 0;
}


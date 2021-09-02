#include "scanner.h"

int main(void) {
    int token;
    token = get_token();
    while (token != FIN_DE_TEXTO){
        if(token == SEPARADOR) {
                printf("\nSeparador: %c", (char) token);
            }else {
                if (!isspace(token))
                    printf("\nCadena: ");
                while (token != SEPARADOR && token != FIN_DE_TEXTO && !isspace(token)) {

                    printf("%c", (char) token);
                    token = get_token();
                }
                if (token == SEPARADOR) {
                    printf("\nSeparador: %c", (char) token);
                }
            }

        token = get_token();
    }
    printf("\nFin de texto: ");

    return 0;
}

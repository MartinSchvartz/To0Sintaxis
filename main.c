#include "scanner.h"
char lexemaCorrespondiente[100];
int main(void) {
    int token;
    char lexema[100] = {'\0'};
    token = get_token();
    while (token != FIN_DE_TEXTO){
        switch (token) {
            case SEPARADOR:
                printf("\nSeparador: %s", lexemaCorrespondiente);
                break;
            case CADENA:
                printf("\nCadena: %s", lexemaCorrespondiente);
                break;
        }
        token = get_token();
    }
    printf("\nFin de texto: ");
    return 0;
}

#include <stdio.h>

int main () {

    int valores[12];
    int crescente = 1;
    int decrescente = 1;

    for (int i = 0; i < 12; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 11; i++) {
        if (valores[i] < valores[i+1]) {
            decrescente = 0;
        }
        if (valores[i] > valores[i+1]) {
            crescente = 0;
        }
    }

    printf("\nStatus: ");
    if (crescente == 1 && decrescente == 0) {
        printf("Ordem Crescente\n");
    } else if (decrescente == 1 && crescente == 0) {
        printf("Ordem Decrescente\n");
    } else if (crescente == 1 && decrescente == 1) {
        printf("Constante (Numeros iguais)\n");
    } else {
        printf("Desordenada\n");
    }

    return 0;
}
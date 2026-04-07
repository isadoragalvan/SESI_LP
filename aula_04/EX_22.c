#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Erro! Voce digitou %d, que nao e um numero positivo.\n", num);
        }

    } while (num <= 0);
    printf("Parabens! O numero %d e valido.\n", num);

    return 0;
}
#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int conta = 0;
    float media;

    do {
        printf("Digite uma idade:");
        scanf("%d", &idade);

        if (idade != 0) {
            soma = soma + idade;
            conta++;
        }

    } while (idade != 0);
    if(conta > 0) {
        media = (float)soma / conta;
        printf("\nVoce digitou %d idades.", conta);
        printf("\nA media das idades e: %.2f\n", media);
    return 0;
}
}
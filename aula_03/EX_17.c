#include <stdio.h>

int main(){
    int num;
    int conta = 0;

    printf("Digite um numero:");
    scanf("%d", &num);

    while (num >= 0) {
        conta++;

        printf("Digite outro numero:");
        scanf("%d", &num);
        }

    printf("\nVoce digitou %d numeros positivos.\n", conta);

    return 0;
}
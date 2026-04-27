#include <stdio.h>

int main()
{
    int num[10];
    int numero;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%i", &num[i]);
    }
    printf("Os numeros pares digitados foram:\n");

    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            printf("%i ", num[i]);
        }
    }

    return 0;
}
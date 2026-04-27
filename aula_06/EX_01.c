#include <stdio.h>

int main()
{
    int num[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%i", &num[i]);
    }

    printf("Os numeros digitados foram:\n");

    for (int i = 0; i < 5; i++) {
        printf("%i ", num[i]);
    }

    return 0;
}
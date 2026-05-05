#include <stdio.h>

int main()
{
    int matriz[3][3];
    int soma = 0;

    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            printf("Digite valor Linha: %i, Coluna: %i: ", l+1, c+1);
            scanf("%i", &matriz[l][c]);
        }
    }

    for (int l = 0; l < 3; l++) {
        soma = 0;
        for (int c = 0; c < 3; c++) {
            soma += matriz[l][c];
        }
        printf("Soma da linha %d: %d\n", l + 1, soma);
    }

    return 0;
}
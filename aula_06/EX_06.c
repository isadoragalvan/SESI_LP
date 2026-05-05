#include <stdio.h>

int main()
{
	int matriz[4][4];
	int maior=0;
	int menor=999999999999999;

	for(int l = 0; l < 4; l++) {
		for(int c = 0; c < 4; c++) {
			printf("Digite valor Linha: %i, Coluna: %i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	if(matriz[l][c]>maior) {
		maior = matriz[l][c];
	}
	if(matriz[l][c]<menor) {
		menor=matriz[l][c];
	}

	printf("O maior e o menor valor respectivamente são: %i, %i", maior, menor);
	return 0;
}
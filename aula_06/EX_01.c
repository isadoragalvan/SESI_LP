#include <stdio.h>

int main()
{
	int matriz[3][3];

	matriz[0][0] = 4;
	matriz[0][1] = 5;
	matriz[0][2] = 5;

	matriz[1][0] = 9;
	matriz[1][1] = 7;
	matriz[1][2] = 9;

	matriz[2][0] = 8;
	matriz[2][1] = 7;
	matriz[2][2] = 3;




	for(int l=0; l < 3; l++) {
		for(int c=0 ; c< 3; c++) {
			printf("Digite valor Linha: %i, Coluna: %i: ",l+1,c+1);
			scanf("%i", &matriz[l][c]);
		}

	}

	for(int l=0; l < 3; l++) {
		for(int c=0 ; c< 3; c++) {
			printf(" | %i |", matriz[l][c]);
		}
		printf("\n");
	}


	return 0;
}
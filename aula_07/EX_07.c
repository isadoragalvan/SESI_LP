#include <stdio.h>

int main()
{
	int matriz[5][5];
	int soma=0;

 	for(int l=0; l < 5; l++) {
 		for(int c=0 ; c<5; c++) {
 			printf("Digite valor Linha: %i, Coluna: %i: ",l+1,c+1);
 			scanf("%i", &matriz[l][c]);
 		}

 	}

	for(int l=0; l <5; l++) {
		for(int c=0 ; c<5; c++) {
			printf("  %i ", matriz[l][c]);
		}
		printf("\n");
	}
	
	printf("\nA diagonal secundária é:\n");
	for(int l=0; l < 5; l++) {
		for(int c=0; c < 5; c++) {
 			if(l + c == 4) {
printf(" %i ", matriz[l][c]);
soma = soma + matriz[l][c];
 			} else{
 				printf("   ");
 			}
		}
		printf("\n");
	}



	return 0;
}
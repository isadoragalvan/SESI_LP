#include <stdio.h>

int main() {

	int num[6];
	int maior = 0;

	for (int i = 0; i < 6; i++) {
		printf("Digite um número:");
		scanf("%i", &num[i]);
		
		if(num[i]> maior){
		    maior = num[i];
		}
	}
	
	printf("O maior número é:%d\n", maior);
	return 0;
}
#include <stdio.h>

int main() {

	int num[10];
	float media;
	int soma=0;
	int maior;

	for (int i = 0; i < 10; i++) {
		printf("Digite um número:");
		scanf("%i", &num[i]);
		soma = soma+num[i];
	}
	
	media=soma/10;
	
	printf("A média dos números é: %.2f\n", media);
	printf("Os números maiores que a média são\n");
	
	for (int i = 0; i<10; i++) {
		maior=num[i] > media;
		if(maior){
		    printf("%i\n", num[i]);
		}
	}
	
	return 0;
}
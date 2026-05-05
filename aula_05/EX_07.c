#include <stdio.h>

int main() {

	int num[10];
	float media;
	int soma=0;

	for (int i = 0; i < 10; i++) {
		printf("Digite um número:");
		scanf("%i", &num[i]);
		soma = soma+num[i];
}
		media=soma/10;
			printf("A média dos números é: %.2f\n", media);
	return 0;
}
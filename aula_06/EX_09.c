#include <stdio.h>

int main() {
	int num[10];


	for (int i = 0; i < 10; i++) {
		printf("Digite um número positivo ou negativo:");
		scanf("%i", &num[i]);

		if(num[i] < 0) {
			num[i]=0;
		}
	}



	printf("Numeros após a substituição:\n");

	for (int i=0; i<10; i++) {
		printf("%i\n", num[i]);
	}

	return 0;
}
#include <stdio.h>

int main() {

	int num[10];

	for (int i = 0; i < 10; i++) {
		printf("Digite um número:");
		scanf("%i", &num[i]);
	}
	printf("Os números positivos são:\n");
	for (int i=0; i<10; i++){
		if(num[i] >= 0) {
		    printf("%i\n", num[i]);
		}
	}
	return 0;
}
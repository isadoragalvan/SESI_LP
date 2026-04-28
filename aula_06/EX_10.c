#include <stdio.h>

int main()
{
	int num[10];
	int ordem;

	for (int i=0; i<10; i=i+1) {
		printf("Digite um número:");
		scanf("%i", &num[i]);
	}
	for (int i=0; i<10; i=i+1) {
		for (int j = 0; j < 9 - i; j++) {
			if (num[j]>num[j+1]) {
				int ordem=num[j];
				num[j]=num[j+1];
				num[j+1]=ordem;
			}
		}
	}
	printf("Os números em ordem crescente são:\n");
	for (int i=0; i<10; i++) {
		printf("%i, ", num[i]);
	}

	return 0;
}

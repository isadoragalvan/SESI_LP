#include <stdio.h>

int main() {

	int num[6];
	int menor = 1000;

	for (int i = 0; i < 6; i++) {
		printf("Digite um número:");
		scanf("%i", &num[i]);
		
		if(num[i] < menor){
		    menor = num[i];
		}
	}
	
	printf("O menor número é:%d\n", menor);
	return 0;
}
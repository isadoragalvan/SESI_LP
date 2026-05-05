#include <stdio.h>
/*9) Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero*/
//INÍCIO
int main()
{
	//DEFININDO VARIÁVEIS
	int num;

	//PEDINDO OS DADOS
	printf("Digite um número inteiro: ");
	scanf("%i", &num);

	//POSITIVO, NEGATIVO OU ZERO?

	if (num>0) {
		printf("\nÉ positivo");
	} else if(num<0) {
		printf("\nÉ negativo");
	} else if(num=0) {
		printf("\nÉ zero");
	}


	return 0;
}
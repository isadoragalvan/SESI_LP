#include <stdio.h>
/*14) Classificação de Nota com Conceito
Leia uma nota de 0 a 10 e classifique:
A (>= 9)
B (7 – 8.9)
C (5 – 6.9)
D (< 5)*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEIS
	float nota;

	//PEDINDO OS DADOS
	printf("Digite sua nota de 0 a 10: ");
	scanf("%f", &nota);

	//CALCULANDO E MOSTRANDO RESULTADO
	if(nota>=9) {
		printf("\nSua nota é: A");
	} else if(nota<8.9) {
		printf("\nSua nota é: B");
	} else if(nota<6.9) {
		printf("\nSua nota é: C");
	} else if(nota<5) {
		printf("\nSua nota é: D");
	}

	return 0;
}
#include <stdio.h>
/*18) Verificação de Ano de Eleição
Leia um ano e informe se é ano de eleição (múltiplo de 4).
*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEL
	int ano;

	//PEDINDO DADOS
	printf("Digite o ano: ");
	scanf("%i", &ano);

	//DADOS E DEFININDO A ELEIÇÃO
	if(ano%2!=0) {
		printf("\nO ano é impar, ou seja, não é ano de eleição.");
	} else if(ano%4==0) {
		printf("\nEleições municipais, vote com sabedoria. ");
	} else if(ano%4==2) {
		printf("\nEleições gerais, vote com sabedoria.");
	}
	return 0;
}
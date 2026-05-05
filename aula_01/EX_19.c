#include <stdio.h>
/*19) Cálculo de Frete
Leia o peso de uma encomenda:
Até 5kg → R$10
5 a 20kg → R$20
Acima de 20kg → R$50*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEL
	float peso;

	//PEDINDO DADOS
	printf("Digite o peso: ");
	scanf("%f", &peso);

	//DEFININDO O VALOR A PARTIR DO PESO
	if(peso<5) {
		printf("\nO valor é de R$ 10,00.");
	} else if(peso<20) {
		printf("\nO valor é de R$ 20,00.");
	} else if(peso>20) {
		printf("\nO valor é de R$ 50,00.");
	}
	return 0;
}
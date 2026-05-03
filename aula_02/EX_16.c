#include <stdio.h>
/*16) Cálculo de Conta de Energia
Leia o consumo em kWh:
Até 100 → R$0,50/kWh
101 a 200 → R$0,75/kWh
Acima de 200 → R$1,00/kWh
Calcule o valor total.*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEL
	int consumo;
	float valor;

	//PEDINDO DADOS
	printf("Digite o seu consumo: ");
	scanf("%i", &consumo);

	//DADOS E DEFININDO A CONTA
	if(consumo<100) {
		printf("\nSão R$0,50/kWh. ");
		valor=consumo*0.50;
		printf("\nO valor final é de: R$%.2f", valor);
	} else if(consumo<200) {
		printf("\nSão R$0,75/kWh. ");
		valor=consumo*0.75;
		printf("\nO valor final é de: R$%.2f", valor);
	} else {
		printf("\nSão R$1,00/kWh. ");
		valor=consumo*1.00;
		printf("\nO valor final é de: R$%.2f", valor);
	}

	return 0;
}
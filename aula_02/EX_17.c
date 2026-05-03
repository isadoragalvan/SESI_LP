#include <stdio.h>
/*17) Classificação de Temperatura
Leia uma temperatura:
Frio (< 15°C)
Agradável (15–25°C)
Quente (> 25°C)*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEL
	float temp;

	//PEDINDO DADOS
	printf("Digite a temperatura: ");
	scanf("%f", &temp);

	//DADOS E DEFININDO O QUE É
	if(temp<15) {
		printf("\nA temperatura está fria.");
	} else if(temp<25) {
		printf("\nA temperatura está agradável. ");
	} else if(temp>25) {
		printf("\nA temperatura está quente.");
	}
	return 0;
}
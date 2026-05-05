#include <stdio.h>
/*20) Sistema de Multa de Trânsito
Leia a velocidade de um carro:
Até 60 km/h → sem multa
61–80 → multa leve
81–100 → multa grave
Acima de 100 → multa gravíssima*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEL
	float vel;

	//PEDINDO DADOS
	printf("Digite a velocidade: ");
	scanf("%f", &vel);

	//DEFININDO A GRAVIDADE DA MULTA
	if(vel<60) {
		printf("\nVocê não tem multa.");
	} else if(vel<80) {
		printf("\nSua multa é leve");
	} else if(vel<100) {
		printf("\nSua multa é grave.");
	} else if (vel>100){
	    printf("\nSua multa é gravíssima.");
	}
	return 0;
}
#include <stdio.h>
/*10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30)*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEIS
	float peso=0;
	float altura=0;
	float IMC=0;

	//PEDINDO O PESO
	printf("Digite seu peso (exemplo: 62.200) : ");
	scanf("%f", &peso);
	
	//PEDINDO A ALTURA
	printf("Digite sua altura (exemplo: 1.70) : ");
	scanf("%f", &altura);

	//CALCULANDO O IMC
	IMC=peso/(altura*altura);
	
	//MOSTRAR O IMC
	printf("Seu IMC é de: %f, e você está:", IMC);
	
	//FALA QUAL O IMC
	if (IMC<18.5) {
		printf("\nAbaixo do peso");
	} else if(IMC<24.9) {
		printf("\nNormal");
	} else if(IMC<29.9) {
		printf("\nSobrepeso");
	}else if(IMC>=30){
	    printf("\nObesidade");
	}


	return 0;
}
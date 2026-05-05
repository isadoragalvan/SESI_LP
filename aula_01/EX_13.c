#include <stdio.h>
/*13) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEIS
	float n1;
	float n2;
	char C;
	float resultado;

	//PEDINDO OS DADOS
	printf("Digite um número: ");
	scanf("%f", &n1);
	
	printf("\nDigite outro número: ");
	scanf("%f", &n2);
	
	//PEDINDO A OPERAÇÃO
	printf("\nDigite a operação escolhida: ");
	scanf(" %c", &C);
	
	//CALCULANDO E MOSTRANDO RESULTADO
	if(C=='+'){
	    resultado=n1+n2;
	    printf("\nO resultado da operação é: %.1f", resultado);
	}else if(C=='-'){
	    resultado=n1-n2;
	    printf("\nO resultado da operação é: %.1f", resultado);
	}else if(C=='*'){
	    resultado=n1*n2;
	    printf("\nO resultado da operação é: %.1f", resultado);
	}else if(C=='/'){
	    resultado=n1/n2;
	    printf("\nO resultado da operação é: %.1f", resultado);
	}
	
	return 0;
}
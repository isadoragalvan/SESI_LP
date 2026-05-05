#include <stdio.h>
/*11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEIS
	int n1;
	int n2;

	//PEDINDO OS DADOS
	printf("Digite um número inteiro diferente de 0: ");
	scanf("%i", &n1);
	
	printf("Digite outro número inteiro diferente de 0: ");
	scanf("%i", &n2);

	//DESCOBRINDO SE SÃO MÚLTIPLOS
	if(n1%n2==0){
	    printf("\nEsses números são múltiplos");
	}else{
	  printf("\nEsses números não são múltiplos"); 
	}

	return 0;
}
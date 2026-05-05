#include <stdio.h>
/*12) Cálculo de Salário com Bônus
Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.*/

//INÍCIO
int main()
{
	//DEFININDO VARIÁVEIS
	float pagamento=0;
	float salario_final=0;

	//PEDINDO OS DADOS
	printf("Digite o seu salário: ");
	scanf("%f", &pagamento);
	
	//CALCULANDO O BÔNUS
	if(pagamento>3000){
	    printf("\nSeu bônus é de 5%");
	    salario_final=pagamento+(pagamento*0.05);
	}else{
	  printf("\nSeu bônus é de 10%"); 
	  salario_final=pagamento+(pagamento*0.10);
	}
	
	//MOSTRANDO
	printf("Seu salário final é de: %.2f", salario_final);
	
	return 0;
}
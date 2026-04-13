#include <stdio.h>

int main()
{
    float salario[3];
    float soma = 0;
    
    printf("digite seu primeiro salário:");
    scanf("%f", &salario[0]);
    
    printf("digite seu segundo salário:");
    scanf("%f", &salario[1]);
    
    printf("digite seu terceiro salário:");
    scanf("%f", &salario[2]);
    
    soma = salario[0] + salario[1] + salario[2];
    
    printf("\nA soma de todos os salários: %.2f", soma);
}
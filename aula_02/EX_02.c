#include <stdio.h>
/*
2) Leia um número inteiro e informe se ele é par ou ímpar.
*/
//INICIO DO CODIGO
int main() {
    
    //DEFININDO VARIAVEL
    int numero;
    
    //PEDE UM NUMERO
    printf("Digite um número:");
    scanf("%i", &numero);
    
    //DECLARA SE E PAR OU IMPAR
    if(numero%2==0){
        printf("É par");
    }else if(numero/2>0){
        printf("É ímpar");
    }
}
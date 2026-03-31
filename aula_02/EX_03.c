#include <stdio.h>
/*3) Maior entre dois números

Leia dois números inteiros e informe qual é o maior ou se são iguais.
*/

//INICIO
int main () {
    //DEFININDO VARIAVEIS
    int n1,n2;
    
    //PEDINDO INFORMACOES
    printf("Digite um número:");
    scanf("%i", &n1);
    
    //PEDE OTRA INFORMACAO
    printf("Digite outro número:");
    scanf("%i", &n2);
    
    //DECLARANDO (qual é maior ou igual a qual)
    if(n1>n2){
        printf("%i é maior que %i", n1, n2);
    }else if(n1<n2){
        printf("%i é maior que %i", n2, n1);
    }else if(n1==n2){
        printf("%i e %i são iguas", n1, n2);
    }
}
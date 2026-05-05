#include <stdio.h>
/*6) Ano Bissexto
Leia um ano e informe se ele é bissexto ou não.*/

//INÍCIO
int main (){
    //DEFININDO VARIÁVEL
    int ano, a1, a2;
    printf("Que ano deseja calcular?\n");
    scanf("%i", &ano);
    
    //CÁLCULO E RESULTADO
    if(ano%400==0){
    printf("Ano é bissexto");
    }else if(ano%4==0){
    printf("Ano é bissexto");
    }else if(ano%4>0){
        printf("Não é bissexto");
    }else if(ano%400>0){
        printf("Ano não é bissexto");
    }
}
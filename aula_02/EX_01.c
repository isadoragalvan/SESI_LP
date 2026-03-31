#include <stdio.h>
/*
1) Classificação de Idade
Leia a idade de uma pessoa e informe:
Criança (0–12)
Adolescente (13–17)
Adulto (18–59)
Idoso (60+)
*/

//INÍCIO DO CÓDIGO
int main (){
    
    //DECLARANDO A VARIÁVEL
    int idade;
    //PEDE IDADE
    printf("Informe sua idade:");
    scanf("%i", &idade);
    
    //DECLARA O QUE É (se é criança, adolescente, adulto ou idoso)
    if(idade<=12){
        printf("Você é criança");
    }else if(idade<=17){
        printf("Você é adolescente");
    }else if(idade<=59){
        printf("Você é adulto");
    }else if(idade>=60){
        printf("Você é idoso");
    }
}
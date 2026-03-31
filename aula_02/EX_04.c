#include <stdio.h>
/*4) Verificação de Aprovação
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
Recuperação (nota entre 5 e 6.9)
Reprovado (nota < 5)*/

//INÍCIO
int main () {
    //DEFININDO VARIÁVEL
    float nota;
    
    //PEDE A NOTA
    printf("informe sua nota:");
    scanf("%f", &nota);
    
    //INFORMA A SITUAÇÃO
    if(nota<5){
        printf("Reprovado");
    }else if(nota<6.9){
        printf("Recuperação");
    }else if(nota >= 7){
        printf("Aprovado");
    }
    
}
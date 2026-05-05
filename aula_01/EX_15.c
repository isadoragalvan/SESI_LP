#include <stdio.h>
/*15) Verificação de Maioridade para Votação
Leia a idade e informe:
Não pode votar (< 16)
Voto opcional (16–17 ou > 70)
Voto obrigatório (18–70)*/

//INÍCIO
int main()
{
   int idade; //DEFININDO VARIÁVEL
    
    //PEDINDO DADOS
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    //DADOS E DEFININDO O VOTO
    if(idade<16){
        printf("\nVocê não pode votar. ");
    }else if(idade=16 || idade==17 || idade>70){
  printf("\nSeu voto é opcional. ");  
    }else {
    printf("\nSeu voto é obrigatório. ");
    }

    return 0;
}
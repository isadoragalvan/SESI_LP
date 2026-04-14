#include <stdio.h>
//INÍCIO
int main()
{
    //DEFININDO VARIÁVEL
    float notas[10]/*GUARDANDO DEZ ESPAÇOS PARA NOTAS, mesma coisa que criar nota1, ..., nota10*/, media;
    float soma = 0;//DEFINIR SOMA COMO 0 SE NÃO O LIXO DA MEMÓRIA VEM JUNTO
    int conta = 0;//DEFINIR COMO 0 PARA O LIXO NÃO VIR JUNTO
    
    for (int i=0; i<10; i++) {//LAÇO DE REPETIÇÃO
    printf("Digite a nota do aluno %d: "/*PEDE NOTA DO ALUNO*/, i + 1/*i=0, então vai começar em 0,
    para não ficar confuso usamos isso para dizer que começa um número a mais que i, ou seja, 1*/);
    scanf("%f", &notas[i]);//armazena
        soma+=notas[i];//soma as notas
    }
    media=soma/10;//faz a conta que é: média é a soma de todos dividido por 10(tanto de notas)

    printf("Media da turma: %.2f\n", media);// fala a média da turma

    printf("Notas acima da media: ");//fala as notas acima da média
    for (int i=0; i<10; i++) {//laço de repetição
        if (notas[i]>=7) {//se nota tal maior ou igual a sete está acima da média
            printf("%.1f ", notas[i]);//mostrar essa nota
            conta++;//adiciona a conta
        }
    }

    printf("\nTotal de alunos acima da media: %d\n", conta);/*mostra quantas notas estão acima da média
    (estão salvas em conta)*/

    return 0;
}//fim do código
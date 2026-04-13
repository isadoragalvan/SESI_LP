#include <stdio.h>

int main()
{
    float notas[10], media;
    float soma = 0;
    int conta = 0;
    
    for (int i=0; i<10; i++) {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);
        soma+=notas[i];
    }
    media=soma/10;

    printf("Media da turma: %.2f\n", media);

    printf("Notas acima da media: ");
    for (int i=0; i<10; i++) {
        if (notas[i]>media) {
            printf("%.1f ", notas[i]);
            conta++;
        }
    }

    printf("\nTotal de alunos acima da media: %d\n", conta);

    return 0;
}
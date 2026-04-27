#include <stdio.h>

int main(){
  
    int num[8];
    int soma=0;
  
    for (int i = 0; i < 8; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%i", &num[i]);
        soma=soma+num[i];
    }
    printf("O resultado da soma é:%d\n", soma);
    return 0;
}
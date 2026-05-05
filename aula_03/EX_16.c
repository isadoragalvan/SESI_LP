#include <stdio.h>

int main(){
    int num, soma=0;
    do{
        printf("Digite um número:");
        scanf("%d", &num);
        soma=soma+num;
    }while(num != 0);
    printf("Soma de todos os números digitados é: %d\n", soma);
    return 0;
}
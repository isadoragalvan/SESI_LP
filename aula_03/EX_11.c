#include <stdio.h>

int main(){
    int num, n2, fatorial;
    printf("Digite um número:\n");
    scanf("%i", &num);
    n2=num;
    fatorial=1;
    do{
        printf("%d\n", num);
        fatorial=fatorial*num;
        num--;
    }while(num>0);
    printf("O fatorial de %d e: %d\n", n2, fatorial);
    return 0;
}
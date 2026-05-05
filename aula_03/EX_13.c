#include <stdio.h>

int main(){
    int soma;
    soma=0;
    for (int i=1; i<=100; i=i+2 ){
       
        soma=soma+i;
    } 
    printf("A soma dos números impares é %d", soma);
    return 0;
}
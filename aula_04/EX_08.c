#include <stdio.h>

int main(){
    int num;
    printf("Digite um número e descubra sua tabuada:\n");
    scanf("%i", &num);
    for(int i=1; i<11; i++){
        int resultado=num*i;
        printf("%d*%d = %d\n", num, i, resultado);
    }
}
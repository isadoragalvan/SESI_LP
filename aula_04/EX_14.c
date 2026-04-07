#include <stdio.h>

int main(){
    int n1;
    printf("Digite um número:");
    scanf("%i", &n1);
    do{
        printf("%i\n", n1);
        n1--;
    } while (n1>=0);
    return 0;
}
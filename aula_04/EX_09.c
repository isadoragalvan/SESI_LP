#include <stdio.h>

int main(){
    int num, num2=0;
    printf("Digite um número:\n");
    scanf("%i", &num);
    do{
        printf("%d\n", num2);
        num2++;
        
    }while(num2!=num+1);
    return 0;
}
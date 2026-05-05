#include <stdio.h>

int main() {
    int mais, num;
    mais=0;
    do{
        printf("Digite um número:");
        scanf("%i", &num);
        
        if(num!=999){
            
        }if(num>mais) {
            mais=num;
        }
        
    }while(num !=999);
    printf("O maior número que você digitou é %i", mais);
    return 0;
}
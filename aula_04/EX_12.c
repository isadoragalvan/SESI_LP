#include <stdio.h>

int main(){
    int conta;
    conta=1;
    for (int i=2; i<50; i=i+2 ){
       
        conta++;
    } 
    printf("Tem %d números pares", conta);
    return 0;
}
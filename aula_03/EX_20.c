#include <stdio.h>

int main() {
    int senha=5312;
    int tentativa;
    do{
       printf("Digite a senha:"); 
        scanf("%i", &tentativa);
        if (tentativa != senha) {
            printf("Senha incorreta! Tente novamente\n");
        }
    }while(tentativa!=senha);
    printf("Senha certa.");
    return 0;
}
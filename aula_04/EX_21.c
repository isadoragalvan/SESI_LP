#include <stdio.h>

int main(){
    int op=0;
    
    do{
        printf("1: Dizer Olá\n");
        printf("2: Dizer Tudo Bem?\n");
        printf("3: Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("\nOla!\n");
            break;
            case 2:
                printf("\nTudo bem?\n");
                break;
            case 3:
                printf("\nTchau!\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
                break;
        }
        
    }while(op != 3);
    result 0;
}
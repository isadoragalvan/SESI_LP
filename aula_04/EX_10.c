#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite um número:\n");
    scanf("%i", &n1);
    
    printf("Digite outro número:\n");
    scanf("%i", &n2);
    
      for(int i=n1+1; i<=n2; i++){
      printf("%d\n", i);
    }
    return 0;
}
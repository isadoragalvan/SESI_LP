#include <stdio.h>
/*7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno*/

//INÍCIO
int main (){
    //DEFININDO VARIÁVEL
    int v1, v2, v3;
    
    //PEDINDO DADOS
    printf("Fale o primeiro valor:");
    scanf("%i", &v1);
    
     printf("Fale o segundo valor:");
    scanf("%i", &v2);
    
     printf("Fale o terceiro valor:");
    scanf("%i", &v3);
    
    //VENDO SE É UM TRIÂNGULO E FALANDO QUAL É
    if (v1 + v2 <= v3 || v1 + v3 <= v2 || v2 + v3 <= v1) {
    printf("Não é um triângulo");
    }else if(v1==v2 && v1==v3 && v2==v3){
        printf("Equilátero");
    }else if(v1==v2 || v2==v3 || v3==v1){
        printf("Isósceles");
    }else if(v1!=v2 && v2!=v3 & v3!=v1){
        printf("Escaleno");
    }
}
#include <stdio.h>
/*
5) Cálculo de Desconto
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.*/

//INÍCIO
int main () {
    //DEFININDO VARIÁVEIS
    float valor, desconto, total;
     
    //PEDE O VALOR DA COMPRA
    printf("Valor da compra: ");
    scanf("%f", &valor);
     
    //DEFINE O DESCONTO
    if(valor > 100) {
        desconto = 10; // 10%
    } else {
        desconto = 5; // 5%
    }

    //CALCULA O VALOR FINAL
    total = valor - (valor * desconto / 100);
    
    //MOSTRA O RESULTADO
    printf("Seu desconto é de %.0f%%\n", desconto);
    printf("Seu total é de R$ %.2f\n", total);
}
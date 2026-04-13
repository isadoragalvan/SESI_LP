#include <stdio.h>

int main() {
    float saques[10], total = 0, maior_saque;
    int acima_500 = 0;

    for (int i = 0; i < 10; i++) {
        printf("Informe o valor do saque %d: R$ ", i + 1);
        scanf("%f", &saques[i]);
        
        total += saques[i];
        
        if (i == 0 || saques[i] > maior_saque) {
            maior_saque = saques[i];
        }

        if (saques[i] > 500) {
            acima_500++;
        }
    }

    printf("\n--- Relatorio do Caixa Eletronico ---\n");
    printf("Total sacado no dia: R$ %.2f\n", total);
    printf("Maior saque realizado: R$ %.2f\n", maior_saque);
    printf("Quantidade de saques acima de R$ 500: %d\n", acima_500);

    return 0;
}
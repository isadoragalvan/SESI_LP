#include <stdio.h>

int main() {
    float temp[7], soma = 0, media;
    int dia_quente = 0, dia_frio = 0, acima_media = 0;

    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    media = soma / 7;

    for (int i = 0; i < 7; i++) {
        if (temp[i] > temp[dia_quente]) {
            dia_quente = i;
        }
        if (temp[i] < temp[dia_frio]) {
            dia_frio = i;
        }
        if (temp[i] > media) {
            acima_media++;
        }
    }

    printf("\n--- Relatorio Semanal ---\n");
    printf("Media das temperaturas: %.1f C\n", media);
    printf("Dia mais quente: Dia %d (%.1f C)\n", dia_quente + 1, temp[dia_quente]);
    printf("Dia mais frio: Dia %d (%.1f C)\n", dia_frio + 1, temp[dia_frio]);
    printf("Dias acima da media: %d\n", acima_media);

    return 0;
}
#include <stdio.h>

int main() {
    int numeros[10];
    int pares[10], impares[10];
    int qp = 0;
    int qi = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[qp] = numeros[i];
            qp++;
        } else {
            impares[qi] = numeros[i];
            qi++;
        }
    }

    printf("\n--- Grupo dos Pares (%d numeros) ---\n", qp);
    for (int i = 0; i < qp; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\n--- Grupo dos Impares (%d numeros) ---\n", qi);
    for (int i = 0; i < qi; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}
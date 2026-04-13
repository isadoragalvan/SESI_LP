#include <stdio.h>

int main () {
    int numeros[10]= {2, 5, 2, 8, 2, 2, 9, 2, 2, 1};
    int dominante = -1;
    int encontrou = 0;

    for (int i = 0; i < 10; i++) {
        int contador = 0;
        int candidato = numeros[i];

        for (int j = 0; j < 10; j++) {
            if (numeros[j] == candidato) {
                contador++;
            }
        }

        if (contador > 5) {
            dominante = candidato;
            encontrou = 1;
            break;
        }
    }

    if (encontrou) {
        printf("O valor dominante e: %d\n", dominante);
    } else {
        printf("Nao existe um valor dominante.\n");
    }

    return 0;
}
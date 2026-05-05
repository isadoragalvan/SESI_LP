    #include <stdio.h>

int main() {
    int idade[15];
    int jovens=0, adultos=0, idosos=0;
    
    for (int i=0; i<15; i++) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade[i]);

        if (idade[i] <= 17) {
            jovens++;
        } else if (idade[i] <= 59) {
            adultos++;
        } else {
            idosos++;
        }
    }

    printf("\n--- Resultado da Pesquisa ---\n");
    printf("Jovens: %d\n", jovens);
    printf("Adultos: %d\n", adultos);
    printf("Idosos: %d\n", idosos);

    printf("\nGrupo com maior quantidade: ");
    if (jovens > adultos && jovens > idosos) {
        printf("Jovens\n");
    } else if (adultos > jovens && adultos > idosos) {
        printf("Adultos\n");
    } else if (idosos < jovens && idosos < adultos ) {
        printf("Idosos\n");
    } else if ( jovens==adultos && adultos==idosos) {
        printf("Todos tem a mesma quantidade");
    }
    

    return 0;
}
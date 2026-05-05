#include <stdio.h>

int DivisaoDeDoisValores(int a, int b) {
	return a / b;
}
int SomaDeDoisValores(int a, int b) {
	return a + b;
}
int SubtracaoDeDoisValores(int a, int b) {
	return a - b;
}
int MultiplicacaoDeDoisValores(int a, int b) {
	return a * b;
}

void ImprimirValores(char *operacao, int valor) {
	printf("\n A %s dos dois valores: %i",operacao, valor);
}


int main() {
	int n1, n2 = 0;
	int resultado=0;
	int op=0;

	printf("Digite o primeiro valor: ");
	scanf("%i", &n1);
	if(n1==0) {
		n1=1;
	}
	printf("Digite o segundo valor: ");
	scanf("%i", &n2);
	if(n2==0) {
		n2=1;
	}

	do {
	    printf("\n~-~-~-~-~-~-~-~-~-~");
	    printf("\n*ESCOLHA UMA OPÇÃO*");
		printf("\n~-~-~-~-~-~-~-~-~-~");
		printf("\n*1: Soma.         *");
		printf("\n*2: Divisão.      *");
		printf("\n*3: Multiplicação.*");
		printf("\n*4: Subtração.    *");
		printf("\n*0: Sair.         *");
		printf("\n~-~-~-~-~-~-~-~-~-~\n");
		scanf("%d", &op);
		switch(op) {
		case 1:
			resultado=SomaDeDoisValores(n1, n2);
			ImprimirValores("\nsoma", resultado);
			break;
		case 2:
			resultado=DivisaoDeDoisValores(n1, n2);
			ImprimirValores("\ndivisão", resultado);
			break;
		case 3:
			resultado=MultiplicacaoDeDoisValores(n1, n2);
			ImprimirValores("\nmultiplicação", resultado);
			break;
		case 4:
			resultado=SubtracaoDeDoisValores(n1, n2);
			ImprimirValores("\nsubtração", resultado);
			break;
		case 0:
			printf("\nSaindo, tchau!");
			break;
		default:
			printf("\nOpcao invalida!\n");
			break;
		}
	} while(op >= 1 && op <= 4);

	return 0;
}
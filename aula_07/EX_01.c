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
	printf("\nA %s dos dois valores: %i",operacao, valor);
}


int main() {
	int n1, n2 = 0;
	int resultado=0;

	printf("Digite o primeiro valor: ");
	scanf("%i", &n1);

	printf("Digite o segundo valor: ");
	scanf("%i", &n2);
	
	resultado=DivisaoDeDoisValores(n1, n2);
	ImprimirValores("divisão:", resultado);
	
	resultado=SomaDeDoisValores(n1, n2);
	ImprimirValores("soma:", resultado);
	
	resultado=SubtracaoDeDoisValores(n1, n2);
	ImprimirValores("subtração:", resultado);
	
	resultado=MultiplicacaoDeDoisValores(n1, n2);
	ImprimirValores("multiplicação:", resultado);
	



	return 0;
}
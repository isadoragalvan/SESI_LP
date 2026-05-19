#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#define atraso(ms) Sleep(ms)
#else
#include <unistd.h>
#define atraso(ms) usleep((ms) * 1000)
#endif

void limpar_tela() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}
void digitar(const char *texto, int velocidade) {
	for (int i = 0; i < strlen(texto); i++) {
		putchar(texto[i]);
		fflush(stdout);
		atraso(velocidade);
	}
}

void espera_enter() {
	printf("\n[Pressione ENTER para continuar...]\n");
	while (getchar() != '\n');
}

int main() {
	limpar_tela();
	int op=0;
	int lugar;

	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
	printf("*                              Jack:                              *\n");
	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n");

	digitar("Jack: Eu estava no ultimo ano do ensino medio quando meu mundo acabou.\n", 25);
	digitar("Um virus conhecido como HV5 se espalhou rapidamente pela pequena\n", 25);
	digitar("cidade onde eu morava, transformando pessoas em monstros sedentos\n", 25);
	digitar("por sangue.\n", 25);
	digitar("Em questao de dias, as ruas viraram um caos.\n", 25);
	digitar("Gritos, mortes e destruicao estavam por toda parte.\n", 25);

	digitar("Nao existiam mais regras, apenas duas escolhas: lutar", 25);
	atraso(100);
	putchar('.');
	atraso(100);
	putchar('.');
	atraso(100);
	putchar('.');
	atraso(200);
	digitar(" ou morrer.\n", 25);

	digitar("Agora, como um dos ultimos sobreviventes, preciso encontrar uma\n", 25);
	digitar("saida desse inferno antes que seja tarde demais.\n\n", 25);

	espera_enter();
	limpar_tela();

	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
	printf("*                  Capítulo 1: Prólogo                             *\n");
	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n");

	digitar("Jack: Meus mantimentos estao acabando, e se aproxima uma grande nevasca,\n", 25);
	digitar("devo aproveitar hoje o tempo esta bom, para sair\n", 25);

	digitar("Escolha um lugar para ir buscar os mantimentos:\n", 25);
	    printf("\n~-~-~-~-~-~-~-~-~-~\n");
	    printf("\n*ESCOLHA UMA OPÇÃO*");
		printf("\n~-~-~-~-~-~-~-~-~-~");
		printf("\n*1: CeU           *");
		printf("\n*2: StashPower    *");
		printf("\n*3: Nanh          *");
		printf("\n~-~-~-~-~-~-~-~-~-~\n");
		scanf("%d", &op);
		switch(op) {
		case 1:
			lugar=CeU;
			digitar("Jack vai pegar mantimentos, se escondendo pelas sombras, mas a rua está estranhamente tranquila, ele acha muito estranho, mas decide não baixar a guarda, chegando no mercado encontra dois sacos de batata-frita, cinco garrafas de água sem gás, uma pizza, um vidro de pepinos, macarrão instantâneo e uma lata de refigerante\n", 25);
			digitar("Você só pode levar quatro itens, escolha os mais necessários.\n", 25);
		printf("\n~-~-~-~-~-~-~-~-~-~\n");
	    printf("\n*ESCOLHA UMA OPÇÃO*");
		printf("\n~-~-~-~-~-~-~-~-~-~");
		printf("\n*1: (1 garrafa de água+1 lata de refrigerante+1 saco de batata frita+macarrão instantâneo)*");
		printf("\n*2: (Pizza+Vidro de pepinos+Garrafa de água+1 Saco de batata-frita)                       *");
		printf("\n*3: (Macarrão instantâneo+Garrafa de água+Vidro de pepinos+Pizza)                         *");
		printf("\n*4: (Lata de refrigerante+Macarrão instantâneo+Vidro de pepinos+1 Garrafa de água)        *");
		printf("\n~-~-~-~-~-~-~-~-~-~\n");
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

	int armas[3]= {0, 0, 0};

	for (int i=1; i<=3; i++) {
		int escolha_valida=0;
		while(!escolha_valida) {
			printf("\nEscolha as armas (pelos números de 0 a 10:)", i+1);
			scanf("%d", &armas[i]);

			if( armas[i] == 1) {
			 if (armas[i] >= 1 && armas[i] <= 10) {
				escolha_valida = 1;
			} else {
				printf("Numero invalido, Escolha um numero listado.\n");
			}
		} else {
			printf("Entrada invalida! Digite apenas o numero.\n");
			while (getchar() != '\n');
		}
	}
	}
	while (getchar() != '\n');

    printf("\nVoces escolheu as armas de numeros: %d, %d e %d.\n", armas[0], armas[1], armas[2]);
    espera_enter();
    
    digitar(Jack saiu para pegar mantimentos, )
	return 0;
}

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
	int op1;
		digitar("Jack vai pegar mantimentos, se escondendo pelas sombras, mas a rua está estranhamente tranquila, ele acha muito estranho, mas decide não baixar a guarda, chegando no mercado encontra dois sacos de batata-frita, cinco garrafas de água sem gás, uma pizza, um vidro de pepinos, macarrão instantâneo e uma lata de refigerante\n", 25);
		digitar("Você só pode levar quatro itens, escolha os mais necessários.\n", 25);
		printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("\n*                                  ESCOLHA UMA OPÇÃO                                      *");
		printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~");
		printf("\n*1: (1 garrafa de água+1 lata de refrigerante+1 saco de batata frita+macarrão instantâneo)*");
		printf("\n*2: (Pizza+Vidro de pepinos+Garrafa de água+1 Saco de batata-frita)                       *");
		printf("\n*3: (Macarrão instantâneo+Garrafa de água+Vidro de pepinos+Pizza)                         *");
		printf("\n*4: (Lata de refrigerante+Macarrão instantâneo+Vidro de pepinos+1 Garrafa de água)        *");
		printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		scanf("%d", &op1);
		getchar();

		limpar_tela();
		switch(op1) {
		case 1:
		int op2;
			digitar("Jack coloca os itens rapidamente na mochila.\n", 25);
			digitar("Ela continua leve, permitindo que ele se mova rapidamente pelas ruas.\n", 25);
			digitar("No caminho de volta, um Breaker aparece no fim da rua.\n", 25);
			digitar("Jack consegue correr antes que a criatura o perceba.\n\n", 25);
			digitar("Chegando no abrigo, ele percebe que pegou pouca comida de verdade.\n", 25);
			break;
		case 2:
			digitar("Jack guarda os mantimentos e sai do mercado com cuidado.\n", 25);
			digitar("O cheiro forte da pizza toma conta da mochila.\n", 25);
			digitar("Enquanto atravessa um beco escuro, um infectado parece sentir o cheiro.\n", 25);
			digitar("A criatura comeca a persegui-lo violentamente.\n\n", 25);
			digitar("Jack consegue escapar por pouco.\n", 25);
			digitar("Chegando no abrigo percebeu que sua mochila está molhada, olhando melhor vê que o vidro de pepino acabou quebrando enquanto fugia\n", 25);
			break;
		case 3:
			digitar("Jack escolhe os alimentos mais uteis para sobrevivencia.\n", 25);
			digitar("Agua, comida conservada e algo mais reforcado.\n", 25);
			digitar("Sua mochila fica um pouco pesada, mas os suprimentos devem durar dias.\n\n", 25);
			digitar("Talvez aquela tenha sido sua melhor decisao ate agora.\n", 25);
			digitar("Jack consegue chegar no abrigo em segurança\n", 25);
			break;
		case 4:
			digitar("Jack fecha a mochila rapidamente e deixa o mercado.\n", 25);
			digitar("Depois de caminhar por alguns minutos, sente o estomago vazio.\n", 25);
			digitar("Ele percebe que escolheu poucos alimentos realmente nutritivos.\n\n", 25);
			digitar("A fome pode se tornar um problema muito em breve.\n", 25);
			digitar("Ele chega no abrigo em segurança\n", 25);
			break;
		case 2:
		int op3;
			digitar("Jack vai pegar os mantimentos, a rua está cheia de zumbis mutantes, pelo que parece são os zumbis cegos, conhecidos como breakers, jack tenta fazer silêncio, mas acaba tropeçando em uma araiz, os zumbis percebem sua presença e começam a procurar vorazmente por ele.\n", 25);
			digitar("Escolha o que jack deve fazer.\n", 25);
			printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("\n*      ESCOLHA UMA OPÇÃO      *");
			printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~");
			printf("\n*1: Fugir                     *");
			printf("\n*2: Lutar                     *");
			printf("\n*3: Tentar distração          *");
			printf("\n*4: Ficar em Silêncio         *");
			printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			switch(op3) {
			case 1:
				digitar("Jack dispara pelas ruas destruídas sem olhar para trás.\n", 25);
				digitar("Os Breakers começam a emitir sons assustadores enquanto correm em sua direção.\n", 25);
				digitar("Seu coração bate tão forte que parece explodir.\n", 25);
				digitar("Ao virar um beco, Jack encontra uma cerca parcialmente destruída.\n", 25);
				digitar("Sem pensar duas vezes, ele se joga por ela.\n", 25);
				digitar("Os Breakers tentam alcançá-lo, mas ficam presos entre os destroços.\n\n", 25);
				digitar("Jack escapa... mas torceu o tornozelo durante a queda.\n", 25);
				digitar("Mancando tenta chegar ao abrigo\n", 25);
				digitar("Com muita dificuldade ele consegue chegar\n", 25);
				break;
			case 2:
				int arma;
				digitar("Jack decide lutar.\n", 25);
				digitar("Ele olha rapidamente ao redor procurando alguma arma.\n\n", 25);

				printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
				printf("*         ESCOLHA UMA ARMA      *\n");
				printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
				printf("*1: Maca                        *\n");
				printf("*2: Besta                       *\n");
				printf("*3: Taco de beisebol            *\n");
				printf("*4: Machado                     *\n");
				printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
				printf("\nEscolha: ");
				scanf("%d", &arma);
				getchar();
				limpar_tela();
				switch(arma) {
				case 1:
					digitar("Jack pega a maca enferrujada tentando usa-la como defesa.\n", 25);
					digitar("Os Breakers avancam violentamente.\n", 25);
					digitar("A maca nao suporta o impacto das criaturas.\n\n", 25);
					digitar("Jack e derrubado no chao.\n", 25);
					digitar("O último grito de Jack ecoa pela rua vazia.\n\n", 25);
					digitar("VOCE MORREU.\n", 40);
					exit(0);
					break;
				case 2:
					digitar("Jack encontra uma besta esquecida dentro de um carro destruido.\n", 25);
					digitar("Ele respira fundo e dispara.\n", 25);
					digitar("THOCK!\n\n", 50);
					digitar("A flecha atravessa a cabeca de um Breaker.\n", 25);
					digitar("As outras criaturas ficam confusas com a queda do companheiro.\n", 25);
					digitar("Jack aproveita a oportunidade e foge pelas sombras.\n", 25);
					digitar("Olha para trás e ao ter certeza de que não está sendo seguido volta ao acampamento\n", 25);
					break;
				case 3:
					digitar("Jack segura firme o taco de beisebol.\n", 25);
					digitar("Quando o primeiro Breaker avanca, ele acerta sua cabeca com toda a forca.\n", 25);
					digitar("CRACK!\n\n", 50);
					digitar("O impacto quebra parte do taco.\n", 25);
					digitar("Mais criaturas aparecem no fim da rua.\n\n", 25);
					digitar("Jack joga o taco no resto do vidro do carro criando a distração perfeita\n", 25);
					digitar("Jack consegue escapar.\n", 25);
					break;
				case 4:
					digitar("Jack encontra um machado preso em um corpo no chao.\n", 25);
					digitar("Ele arranca a arma rapidamente e encara os Breakers.\n", 25);
					digitar("O primeiro infectado cai apos um golpe brutal.\n", 25);
					digitar("O segundo tenta avancar, mas Jack corta seu braco antes de fugir, e o lança contra os outros.\n\n", 25);
					digitar("Mesmo sobrevivendo, Jack percebe que lutar contra aquelas coisas nunca sera facil.\n", 25);
					break;
				default:
					digitar("Jack hesita por tempo demais.\n", 25);
					digitar("Os Breakers o alcancam antes que consiga reagir.\n\n", 25);
					digitar("O último som que se ouve é um grunhido desesperado e o som de algo quebrando.\n", 25);
					digitar("VOCE MORREU.\n", 40);
					exit(0);
					break;
				}
				break;

			case 3:
				digitar("Jack tenta controlar o pânico.\n", 25);
				digitar("Com cuidado, pega uma garrafa vazia caída perto da calçada.\n", 25);
				digitar("Ele arremessa a garrafa na direção oposta.\n", 25);
				atraso(300);
				digitar("CRASH!\n\n", 50);
				digitar("Os Breakers viram imediatamente na direção do som.\n", 25);
				digitar("As criaturas avançam enlouquecidas atrás do barulho.\n", 25);
				digitar("Aproveitando a distração, Jack se esconde dentro de uma loja abandonada.\n\n", 25);
				digitar("Por enquanto... ele está seguro.\n", 25);
				digitar("Jack permanece imóvel dentro da loja por vários minutos.\n", 25);
				digitar("Nenhum som se aproxima.\n", 25);
				digitar("A rua volta a ficar estranhamente silenciosa.\n\n", 25);
				digitar("Por enquanto... ele sobreviveu.\n", 25);
				break;
			case 4:
				digitar("Jack prende a respiração e permanece completamente imóvel.\n", 25);
				digitar("Os Breakers se aproximam lentamente.\n", 25);
				digitar("CLACK... CLACK... CLACK...\n\n", 80);
				digitar("Uma das criaturas para exatamente na sua frente.\n", 25);
				digitar("Jack consegue ouvir a respiração podre vindo dela.\n", 25);
				atraso(1000);
				digitar("Depois de alguns segundos agonizantes, os Breakers vão embora.\n\n", 25);
				digitar("Jack sobreviveu graças ao silêncio.\n", 25);
				break;
			default:
				digitar("Jack hesita por tempo demais.\n", 25);
				digitar("Os Breakers encontram sua posição rapidamente.\n", 25);
				digitar("Os gritos ecoam pela rua vazia.\n", 25);
				digitar("VOCE MORREU.\n", 40);
				exit(0);

				break;
			}
			break;
		case 3: {
			int opcao;
			digitar("Jack decide seguir para o ultimo mercado da regiao: Nanh.\n", 25);
			digitar("O lugar era conhecido por ainda ter suprimentos... mas tambem por nunca ser seguro.\n\n", 25);
			digitar("A rua esta estranhamente silenciosa enquanto ele se aproxima.\n", 25);
			digitar("Cada passo parece mais pesado que o anterior.\n\n", 25);
			digitar("Ao chegar, a porta do mercado esta entreaberta.\n", 25);
			digitar("Marcas de luta e sangue seco cobrem a entrada.\n\n", 25);
			digitar("Jack entra devagar.\n", 25);
			digitar("O interior esta destruido.\n", 25);
			digitar("Prateleiras reviradas, vidro quebrado, cheiro de abandono.\n\n", 25);
			digitar("Ele começa a coletar o que consegue rapidamente.\n", 25);
			digitar("Agua, comida, qualquer coisa que ainda esteja intacta.\n\n", 25);
			digitar("Foi entao que ele ouviu um som baixo vindo do fundo do mercado.\n\n", 25);
			digitar("'...Jack?'\n\n", 25);
			digitar("Entre as sombras...\n", 25);
			digitar("uma garota aparece lentamente.\n\n", 25);
			digitar("Ela esta ferida.\n", 25);
			digitar("Mancando, suja, claramente exausta.\n\n", 25);
			digitar("Jack a reconhece imediatamente.\n", 25);
			digitar("Sua antiga paixao.\n\n", 25);
			digitar("CLACK... CLACK...\n", 80);
			digitar("CLACK... CLACK...\n\n", 80);
			digitar("Breakers estao la fora.\n", 25);
			digitar("'Jack não me deixe aqui!'\n", 25);
			digitar("Jack segura a mao dela.\n", 25);
			digitar("Nao ha tempo para pensar.\n\n", 25);
			printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("*        ESCOLHA UMA OPÇÃO      *\n");
			printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("*1: Correr                      *\n");
			printf("*2: Lutar                       *\n");
			printf("*3: Se Esconder                 *\n");
			printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("\nEscolha: ");
			scanf("%d", &opcao);
			getchar();
			switch(opcao) {
			case 1:
				digitar("Jack segura a mao dela com forca.\n", 25);
				digitar("Eles correm pelas ruas destruídas sem olhar para trás.\n\n", 25);
				digitar("Ele a carrega por causa do ferimento na perna.\n", 25);
				digitar("Os Farejadores começam a seguir o cheiro imediatamente.\n", 25);
				digitar("Passos pesados se aproximam.\n\n", 25);
				digitar("Por pouco... sobrevivem.\n", 25);
				break;
			case 2:
				digitar("Jack improvisa uma bomba com sucata.\n", 25);
				digitar("Ele tenta segurar os Farejadores.\n\n", 25);
				digitar("A explosao os atinge parcialmente.\n", 25);
				digitar("Eles conseguem escapar por pouco.\n", 25);
				break;
			case 3:
				digitar("Jack puxa ela para dentro de um carro abandonado.\n", 25);
				digitar("Eles ficam completamente em silencio.\n\n", 25);
				digitar("Os Farejadores passam lentamente...\n", 25);
				digitar("Depois de alguns segundos tensos...\n", 25);
				digitar("eles vao embora.\n\n", 25);
				break;
			default:
				digitar("Jack hesita por tempo demais.\n", 25);
				digitar("Os Farejadores encontram o rastro.\n\n", 25);
				digitar("Enquanto ela grita e tanta fugir eles o matam, ela tropeça em uma caixa, sua perna começa a sangrar novamente.\n", 25); 
				digitar("O cheiro dela os atrai, sua última visão é o corpo de Jack despedaçado.\n", 25);
				digitar("VOCE MORREU.\n", 40);
				exit(0);
			}

				break;
			}

			break;
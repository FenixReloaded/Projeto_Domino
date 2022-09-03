#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <Windows.h>


void visualArtGame() {

printf("\n**************Bem Vindo ao Domino Master**************");
printf("\n");
printf("**             //\\                       //\\        **\n");
printf("**            //  \\                     //. \\       **\n");
printf("**           // .' \\                   //.   \\      **\n");
printf("**          //\\' .'/                  //\\   '/      **\n");
printf("**         //  \\' /                  //  \\ '/       **\n");
printf("**        //    \\/                  // '  \\/        **\n");
printf("**         \\'   /                   \\ '   /         **\n");
printf("**          \\ '/                     \\'  /          **\n");
printf("**           \\/                       \\ /           **\n");
printf("******************************************************");
printf("\n\n");
}

int gameMenu() {

	struct stats_pieces pieces[28];
	struct stats_pieces jogador1[21];
	struct stats_pieces jogador2[21];
	struct stats_pieces buy[14];
	int i, j, stats_pieces, jogador;
	int counter = 0;
	int option = 0;

	printf("1 --> Jogar\n");
	printf("2 --> Comprar\n");
	printf("3 --> Passar a vez\n");
	printf("4 --> Ver peças do jogador\n");
	printf("5 --> Ver peças para compra\n");
	printf("6 --> Sair\n");
	scanf("%d", &option);

	switch (option) {
	case 1:
		printf("ainda não implementado\n");
		gameMenu();
	break;

	case 2:
		printf("Qual o jogador?");
		scanf("%d", &jogador);

		if (jogador == 1) {
			buyPiecesPlayer1();
		}else{
			buyPiecesPlayer2();
		}
		gameMenu();
	break;

	case 3: 
		printf("ainda não implementado\n");
		gameMenu();
	break;
		
	case 4:
		printf("De qual jogador?");
		scanf("%d", &jogador);

		if (jogador == 1) {
			showPiecesPlayer1();
		}else{
			showPiecesPlayer2();
		}
		gameMenu();
	break;

	case 5:
		showPiecesToBuy();
		gameMenu();
	break;

	default:
		optionMenu();
	break;
	}
}

int optionMenu() {
	 
	int option;

	printf("Selecione uma opção para continuar: \n");
	printf("1 --> Iniciar o jogo em modo solo (contra a máquina)\n");
	printf("2 --> Iniciar o jogo em modo multiplayer (2 jogadores)\n");
	printf("3 --> Retornar ao jogo em pause\n");
	printf("4 --> Manual de como jogar\n");
	printf("5 --> Salvar o jogo\n");
	printf("6 --> Carregar o jogo\n");
	printf("7 --> Sair do jogo\n");
	scanf("%d", &option);

	switch (option)
	{
	case 1:
		printf("Modo de jogo contra a máquina selecionado\n");
		printf("Carregando o jogo...\n\n");
		Sleep(10);

		initializeGame();
		gameMenu();
		break;

	case 2:
		printf("Modo de jogo contra outro jogador selecionado\n");
		printf("Carregando o jogo...\n\n");
		Sleep(10);
		optionMenu();

		break;

	case 3:
		printf("ainda não implementado");
		optionMenu();
		break;

	case 4:
		printf("Como jogar o domino?\n\n");
		printf("Cada jogador recebe 7 pedras quando começa a rodada. Se na partida houver menos de 4 jogadores, as pedras restantes ficam no dorme para serem compradas.\n");
		printf("O jogo começa pelo jogador que tenha a pedra dobrada mais alta (se jogam 4 pessoas, sempre começa quem tem o seis dôbre ou carrilhão). No caso de que nenhum jogador tenha dobradas, começará o jogador que tenha a pedra mais alta. A partir desse momento, os jogadores realizam suas jogadas, por turnos e no sentido anti-horário.\n");
		printf("O jogador que começa a partida leva vantagem. Este é um conceito importante para a estratégia do domino, pois o jogador ou dupla que começa, normalmente, é o que leva a vantagem durante a partida.\n\n");
		Sleep(10);

		printf("Desenvolvimento do jogo:\n\n");
		printf("Cada jogador, no seu turno, deve colocar uma das suas pedras em uma das 2 extremidades abertas, de forma que os pontos de um dos lados coincida com os pontos da extremidade onde está sendo colocada. As dobradas são colocadas de maneira transversal para facilitar sua localização.\n");
		printf("Quando o jogador coloca sua pedra sobre a mesa, seu turno se acaba e passa-se ao seguinte jogador.\n");
		printf("Se um jogador não puder jogar, deverá 'comprar' do dorme tantas pedras como forem necessárias. Se não houver pedras no dorme, passará o turno ao seguinte jogador.\n\n");
		Sleep(10);

		break;

	case 5:
		printf("ainda não implementado");
		optionMenu();
		break;

	case 6:
		printf("ainda não implementado");
		optionMenu();
		break;

	default:
		leaveGame();
		break;
	};

	void showPieces(char player); {

		int i;

		for (i = 0; i < 28; i++) {
			if (pieces[i].stats == 1) {
				printf("Peças do jogador 1: [%d|%d]", pieces[i].lado1, pieces[i].lado2);
			}
			if (pieces[i].stats == 2) {
				printf("Peças do jogador 2: [%d|%d]", pieces[i].lado1, pieces[i].lado2);
			}
		}

	}

}
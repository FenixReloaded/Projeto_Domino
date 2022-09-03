#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headers.h"
#include <Windows.h>

void generatePieces(){ 
	int i, j;
	int k = 0;

	for (i = 0; i <= 6; i++){
		for (j = i; j <= 6; j++){
			pieces[k].lado1 = i;
			pieces[k].lado2 = j;
			k++;
		}
	}
}

void shufflePieces(){
	struct stats_pieces aux;
	int i, k;

	generatePieces();

	srand (time(NULL));

	for (i = 0; i < 28; i++){
		k = rand() % 28;
		aux = pieces[i];
		pieces[i] = pieces[k];
		pieces[k] = aux;
	}
}

void showPieces(){
	int k;

	for (k = 0; k < 28; k++){
		printf("[%d|%d]\n"), pieces[k].lado1, pieces[k].lado2;
	}
}

void initializeGame(){
	int i, j;

	aux.stats = ' ';
	aux.lado1 = 0;
	aux.lado2 = 1;

	for (i = 0; i < 28; i++){
		pieces[i].stats = ' ';
	}

	shufflePieces();

	for (i = 0; i <= 6; i++){
		pieces[i].stats = 1;
	}

	for (i = 7; i <= 13; i++){
		pieces[i].stats = '2';
	}

	showPieces();

	for (i = 0; i <= 13; i++){
		if (pieces[i].lado1 == pieces[i].lado2){
			if (aux.lado1 <= pieces[i].lado1){
				aux = pieces[i];
				j = i;
			}
			else{
				if (aux.lado1 + aux.lado2 <= pieces[i].lado1 + pieces[i].lado2);{
					if (aux.lado1 || aux.lado2 > pieces[i].lado1 || pieces[i].lado2){
						aux = pieces[i];
						j = i;
					}
				}
			}
		}
	}
	if (pieces[j].stats == '1'){
		printf("\n\nPlayer 1 começa o jogo\n");
	}else{
		if (pieces[j].stats == '2'){
			printf("\n\nPlayer 2 começa o jogo\n");
		}
	}
	table[0].lado1 = aux.lado1;
	table[0].lado2 = aux.lado2;

	pieces[j].stats = 'm';

	printf("------------------------------\n");
	printf("------------------------------\n");
	printf("||                          ||\n");
	printf("||      table - [%d|%d]       ||\n", table[0].lado1, table[0].lado2);
	printf("||                          ||\n");
	printf("------------------------------\n");
	printf("------------------------------\n");

}



void buyPiecesPlayer1(){
	int i;
	for (i = 13; i < 28; i++) {
		if (pieces[i].stats == ' ') {
			pieces[i].stats = '1';
			i = 28;
		}
	}
	printf("Jogador 1 comprou!\n");
}

int showPiecesPlayer1(){
	int i;
	int quit = 0;

	for (i = 0; i < 28; i++) {
		if (pieces[i].stats == '1') {
			printf("Peças do jogador 1 são: [%d|%d] ", pieces[i].lado1, pieces[i].lado2);
		}
	}
	printf("Digite 1 para sair: ");
	scanf("%d", &quit);
}

void buyPiecesPlayer2(){
	int i;
	for (i = 13; i < 28; i++) {
		if (pieces[i].stats == ' ') {
			pieces[i].stats = '2';
			i = 28;
		}
	}
	printf("Jogador 2 comprou!\n");
}

int showPiecesPlayer2(){
	int i;
	int quit = 0;

	for (i = 0; i < 28; i++) {
		if (pieces[i].stats == '2') {
			printf("Peças do jogador 2 são: [%d|%d] ", pieces[i].lado1, pieces[i].lado2);
		}
	}
	printf("Digite 1 para sair: ");
	scanf("%d", &quit);
}

void showPiecesToBuy(){
	int i;
	int quit = 0;

	for (i = 0; i < 28; i++) {
		if (pieces[i].stats == ' ') {
			printf("Peças para comprar: [%d|%d]", pieces[i].lado1, pieces[i].lado2);
		}
	}
	printf("Digite 1 para sair: ");
	scanf("%d", &quit);
}

void leaveGame(){
	printf("\n");
	printf("Obrigado por jogar Domino Master!\n");
	printf("Saindo do jogo...\n\n");
	exit(1);
}
 
/*Grupo - Jogo Domino - COM - MA2A - Profº Julio - PUCSP - 2022
	Alice de Oliveira Duarte - RA 00319006
	Bruno dos Santos Torres Novo - RA 00320039
	Caio Pereira Guimaraes - RA 00318945
	Joao Pedro do Carmo Ribeiro - RA00319514
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>
#include "headers.h"



int main()
{
	setlocale(LC_ALL, "Portuguese");

	visualArtGame();
	optionMenu();

	return 0;
}
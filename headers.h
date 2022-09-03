struct stats_pieces{
	int lado1;
	int lado2;
	int player1;
	int player2;
	char stats;
	int buy;
} pieces[28], aux;

struct stats_table{
	int lado1;
	int lado2;
}table[28];

char player;


void generatePieces();
void shufflePieces();
void showPieces();
void initializeGame();
void buyPiecesPlayer1();
int showPiecesPlayer1();
void buyPiecesPlayer2();
int showPiecesPlayer2();
void showPiecesToBuy();
void leaveGame();
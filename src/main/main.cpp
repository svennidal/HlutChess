#include "Output.h"
#include "Pown.h"
#include "Square.h"
#include "Board.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

// Time for the random shit
#include <time.h>
using namespace std;


int main()
{
	int board[64];

	Color w = WHITE;
	Color b = BLACK;
	PiecePtr pw = new Pown(w);
	PiecePtr pb = new Pown(b);

	Square sq1;
	Square sq2;

	sq1.putPiece(pw);
	sq2.putPiece(pb);


	//delete sq1;
	//delete sq2;
	//delete pw;
	//delete pb;
	Board theBoard;;



	Output output("http://www.reykjavik.university:3717/data/");
	string tits;
	while(cin >> tits && tits != "exit"){
		srand(time(NULL));
		for(int i = 0; i < 64; i++){
			board[i] = rand() % 13;
		}
		output.sendToServer(board);
		output.sendToCmdLine(board);
	}
	return 0;
}

#include "Output.h"
#include "Pown.h"
#include "Square.h"
#include "Board.h"
#include <typeinfo>
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
	Type p = POWN;
	PiecePtr pw = new Pown(p, w);
	PiecePtr pb = new Pown(p, b);

	Square sq1;
	Square sq2;

	sq1.putPiece(pw);
	sq2.putPiece(pb);


	//delete sq1;
	//delete sq2;
	//delete pw;
	//delete pb;
	Board theBoard;;


	cout << "KING: " << KING << endl;
	cout << "pw->getColor(): " << pw->getColor() << endl;
	cout << "pb->getColor(): " << pb->getColor() << endl;

	cout << "typeid(*pb).name(): " << typeid(*pb).name() << endl;
	cout << "typeid(*pw).name(): " << typeid(*pw).name() << endl;
	if(typeid(*pw) == typeid(Pown)){
		cout << "typeid(*pw) == typeid(Pown)" << endl;
	} else { cout << "poop\n"; }

	cout << "sq.getPiece() is of type: " << typeid(*sq1.getPiece()).name() << endl;


	int bord[64];
	for(int i = 0; i < 64; i++){
		bord[i] = 0;
	}
	for(int i = 0; i < 64; i++){
		cout << bord[i] << " ";
	} cout << endl;
	theBoard.getBoard(bord);

	for(int i = 0; i < 64; i++){
		cout << bord[i] << " ";
	} cout << endl;


	Output output("http://www.reykjavik.university:3717/data/");
	output.sendToServer(bord);



	/*
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
	*/

	return 0;
}

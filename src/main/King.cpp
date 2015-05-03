#include "King.h"
using namespace std;

King::King(Color c): Piece(c)
{
	if(_color == WHITE){
		cout << "hello from white King constructor\n";
	}
	else if(_color == BLACK){
		cout << "hello from black King constructor\n";
	}
	else {
		cout << "hello from fuckup King constructor\n";
	}
}

King::~King()
{
	//TODO
}

vector<Move> King::legalMoves(Position pos)
{
	//TODO
	vector<Move> tmp;
	return tmp;
}

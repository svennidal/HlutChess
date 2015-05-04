#include "King.h"
using namespace std;

King::King(Type t, Color c): Piece(c), _type(t)
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

Type King::getType()
{
	return _type;
}

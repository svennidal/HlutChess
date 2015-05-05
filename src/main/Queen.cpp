#include "Queen.h"
using namespace std;

Queen::Queen(Type t, Color c): Piece(c), _type(t)
{
	if(_color == WHITE){
		cout << "hello from white Queen constructor\n";
	}
	else if(_color == BLACK){
		cout << "hello from black Queen constructor\n";
	}
	else {
		cout << "hello from fuckup Queen constructor\n";
	}
}

Queen::~Queen()
{
	//TODO
}

vector<Move> Queen::legalMoves(Position pos)
{
	//TODO
	vector<Move> tmp;
	return tmp;
}

Type Queen::getType()
{
	return _type;
}

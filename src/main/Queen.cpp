#include "Queen.h"
using namespace std;

Queen::Queen(Color c): Piece(c)
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

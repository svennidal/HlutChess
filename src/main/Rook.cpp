#include "Rook.h"
using namespace std;

Rook::Rook(Color c): Piece(c)
{
	if(_color == WHITE){
		cout << "hello from white Rook constructor\n";
	}
	else if(_color == BLACK){
		cout << "hello from black Rook constructor\n";
	}
	else {
		cout << "hello from fuckup Rook constructor\n";
	}
}

Rook::~Rook()
{
	//TODO
}

vector<Move> Rook::legalMoves(Position pos)
{
	//TODO
	vector<Move> tmp;
	return tmp;
}

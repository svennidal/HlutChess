#include "Bishop.h"
using namespace std;

Bishop::Bishop(Color c): Piece(c)
{
	if(_color == WHITE){
		cout << "hello from white Bishop constructor\n";
	}
	else if(_color == BLACK){
		cout << "hello from black Bishop constructor\n";
	}
	else {
		cout << "hello from fuckup Bishop constructor\n";
	}
}

Bishop::~Bishop()
{
	//TODO
}

vector<Move> Bishop::legalMoves(Position pos)
{
	//TODO
	vector<Move> tmp;
	return tmp;
}

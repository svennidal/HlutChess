#include "Knight.h"
using namespace std;

Knight::Knight(Type t, Color c): Piece(c), _type(t)
{
	if(_color == WHITE){
		cout << "hello from white Knight constructor\n";
	}
	else if(_color == BLACK){
		cout << "hello from black Knight constructor\n";
	}
	else {
		cout << "hello from fuckup Knight constructor\n";
	}
}

Knight::~Knight()
{
	//TODO
}

/*
vector<Move> Knight::legalMoves(Position pos)
{
	//TODO
	vector<Move> tmp;
	return tmp;
}
*/

bool Knight::legalMove(Move move)
{
	//TODO
	return false;
}


Type Knight::getType()
{
	return _type;
}

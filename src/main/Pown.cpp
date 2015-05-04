#include "Pown.h"
using namespace std;

Pown::Pown(Type t, Color c): Piece(c), _type(t)
{
	_firstmove = true;
	if(_color == WHITE){
		cout << "hello from white Pown constructor\n";
	}
	else if(_color == BLACK){
		cout << "hello from black Pown constructor\n";
	}
	else {
		cout << "hello from fuckup Pown constructor\n";
	}
}

Pown::~Pown()
{
	//TODO
}

/*
vector<Move> Pown::legalMoves(Position pos)
{
	//TODO
	if(_firstmove){ //TODO
	}
	vector<Move> tmp;
	return tmp;
}
*/

bool Pown::legalMove(Move move)
{
	//TODO
	if(true){
		return false;
	} else {
		return false;
	}
}

void Pown::moved()
{
	_firstmove = false;
}

Type Pown::getType()
{
	return _type;
}

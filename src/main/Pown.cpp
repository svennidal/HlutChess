#include "Pown.h"
using namespace std;

Pown::Pown(Color c): Piece(c)
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

vector<Move> Pown::legalMoves(Position pos)
{
	//TODO
	if(_firstmove){ //TODO
	}
	vector<Move> tmp;
	return tmp;
}

void Pown::moved()
{
	_firstmove = false;
}

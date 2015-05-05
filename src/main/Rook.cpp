#include "Rook.h"
using namespace std;

Rook::Rook(Type t, Color c): Piece(c), _type(t)
{
}

Rook::~Rook()
{
	//TODO
}

vector<Move> Rook::legalMoves(Position pos)
{
	vector<Move> viktor;
	int i, j;

	i = pos / 8 + 1; j = pos % 8;
	for(; i < 8; i++){
		Move moveit;
		moveit.src = pos;
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}
	i = pos / 8 - 1; j = pos % 8;
	for(; i >= 0; i--){
		Move moveit;
		moveit.src = pos;
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}
	i = pos / 8; j = pos % 8 + 1;
	for(; j < 8; j++){
		Move moveit;
		moveit.src = pos;
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}
	i = pos / 8; j = pos % 8 - 1;
	for(; j >= 0; j--){
		Move moveit;
		moveit.src = pos;
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	return viktor;
}

Type Rook::getType()
{
	return _type;
}

#include "Bishop.h"
using namespace std;

Bishop::Bishop(Type t, Color c): Piece(c), _type(t)
{
}

Bishop::~Bishop()
{
	//TODO
}

vector<Move> Bishop::legalMoves(Position pos)
{
	vector<Move> viktor;
	int i, j;

	i = pos / 8 + 1; j = pos % 8 + 1;
	for(; i < 8 && j < 8; i++, j++){
		Move moveit;
		moveit.src = pos;
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}
	i = pos / 8 + 1; j = pos % 8 - 1;
	for(; i < 8 && j >= 0; i++, j--){
		Move moveit;
		moveit.src = pos;
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}
	i = pos / 8 - 1; j = pos % 8 - 1;
	for(; i >= 0 && j >= 0; i--, j--){
		Move moveit;
		moveit.src = pos;
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}
	i = pos / 8 - 1; j = pos % 8 + 1;
	for(; i >= 0 && j < 8; i--, j++){
		Move moveit;
		moveit.src = pos;
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}
	return viktor;
}

Type Bishop::getType()
{
	return _type;
}

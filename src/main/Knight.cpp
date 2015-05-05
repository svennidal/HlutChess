#include "Knight.h"
using namespace std;

Knight::Knight(Type t, Color c): Piece(c), _type(t)
{
}

Knight::~Knight()
{
	//TODO
}

vector<Move> Knight::legalMoves(Position pos)
{
	vector<Move> viktor;
	int i, j;
	Move moveit;
	moveit.src = pos;

	i = pos / 8 + 2, j = pos % 8 + 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 + 2, j = pos % 8 - 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 - 2, j = pos % 8 + 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 - 2, j = pos % 8 - 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 + 1, j = pos % 8 + 2;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 + 1, j = pos % 8 - 2;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 - 1, j = pos % 8 + 2;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 - 1, j = pos % 8 - 2;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	return viktor;
}

Type Knight::getType()
{
	return _type;
}

#include "King.h"
using namespace std;

King::King(Type t, Color c): Piece(c), _type(t)
{
}

King::~King()
{
	//TODO
}

vector<Move> King::legalMoves(Position pos)
{
	vector<Move> viktor;
	Move moveit;
	moveit.src = pos;
	int i, j;

	i = pos / 8 + 1, j = pos % 8;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 - 1, j = pos % 8;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 , j = pos % 8 + 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 , j = pos % 8 - 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	return viktor;
}
vector<Move> King::killMoves(Position pos)
{
	vector<Move> viktor;
	viktor = legalMoves(pos);
	Move moveit;
	moveit.src = pos;
	int i, j;

	i = pos / 8 + 1, j = pos % 8 + 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 + 1, j = pos % 8 - 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 - 1, j = pos % 8 + 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	i = pos / 8 - 1, j = pos % 8 - 1;
	if(i >= 0 && i < 8 && j >= 0 && j < 8){
		moveit.dest = posBoard[i][j];
		viktor.push_back(moveit);
	}

	return viktor;
}

Type King::getType()
{
	return _type;
}

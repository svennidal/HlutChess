#include "Pown.h"
using namespace std;

Pown::Pown(Type t, Color c): Piece(c), _type(t)
{
	_firstmove = true;
}

Pown::~Pown()
{
	//TODO
}

vector<Move> Pown::legalMoves(Position pos)
{
	vector<Move> viktor;
	Move moveit;
	moveit.src = pos;
	int i, j;

	if(_color == WHITE){
		i = pos / 8 - 1, j = pos % 8;
		if(i >= 0 && i < 8 && j >= 0 && j < 8){
			moveit.dest = posBoard[i][j];
			viktor.push_back(moveit);
			if(_firstmove){
				i = pos / 8 - 2, j = pos % 8;
				if(i >= 0 && i < 8 && j >= 0 && j < 8){
					moveit.dest = posBoard[i][j];
					viktor.push_back(moveit);
				}
			}
		}
	}
	else if(_color == BLACK){
		i = pos / 8 + 1, j = pos % 8;
		if(i >= 0 && i < 8 && j >= 0 && j < 8){
			moveit.dest = posBoard[i][j];
			viktor.push_back(moveit);
			if(_firstmove){
				i = pos / 8 + 2, j = pos % 8;
				if(i >= 0 && i < 8 && j >= 0 && j < 8){
					moveit.dest = posBoard[i][j];
					viktor.push_back(moveit);
				}
			}
		}
	}
	return viktor;
}
vector<Move> Pown::killMoves(Position pos)
{
	vector<Move> viktor;
	Move moveit;
	moveit.src = pos;
	int i, j;

	if(_color == WHITE){
		i = pos / 8 - 1, j = pos % 8 - 1;
		if(i >= 0 && i < 8 && j >= 0 && j < 8){
			moveit.dest = posBoard[i][j];
			viktor.push_back(moveit);
		}
		i = pos / 8 - 1, j = pos % 8 + 1;
		if(i >= 0 && i < 8 && j >= 0 && j < 8){
			moveit.dest = posBoard[i][j];
			viktor.push_back(moveit);
		}
	}
	else if(_color == BLACK){
		i = pos / 8 + 1, j = pos % 8 - 1;
		if(i >= 0 && i < 8 && j >= 0 && j < 8){
			moveit.dest = posBoard[i][j];
			viktor.push_back(moveit);
		}
		i = pos / 8 + 1, j = pos % 8 + 1;
		if(i >= 0 && i < 8 && j >= 0 && j < 8){
			moveit.dest = posBoard[i][j];
			viktor.push_back(moveit);
		}
	}
	return viktor;

}

void Pown::moved()
{
	_firstmove = false;
}

Type Pown::getType()
{
	return _type;
}

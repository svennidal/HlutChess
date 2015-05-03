// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 20:09:01 GMT 2015
#include "Board.h"
using namespace std;

Board::Board()
{
	//_squares = new SquarePtr[BOARD_SIZE];
	/*
	for(int i = 0; i < BOARD_SIZE; i++){
		_squares[i] = new Square();
	} */
	for(int i = A2; i != A1; i++){
		PiecePtr tmp = new Pown(WHITE);
		_squares[i].putPiece(tmp);
	}
	for(int i = A7; i != A6; i++){
		PiecePtr tmp = new Pown(BLACK);
		_squares[i].putPiece(tmp);
	}


	cout << A1 << " " << A2 << " " << A3 << endl;
}

Board::~Board()
{
	// Square takes care of PiecePtr.
}

string Board::Move(Square& src, Square& dest)
{
	//TODO
	string tmp;
	return tmp;
}

void Board::getBoard(int& board)
{
	//TODO
}


void Board::reset()
{
	//TODO
}

bool Board::isLegalMove(Position src, Position dest) const
{
	//TODO
	return false;
}

void Board::update()
{
	//TODO
}

string Board::checkMove(Position src, Position dest) const
{
	//TODO
	string tmp;
	return tmp;
}

// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 20:09:01 GMT 2015
#include "Board.h"
using namespace std;

Board::Board()
{
	init();
}

Board::~Board()
{
	// Square takes care of PiecePtr.
}

string Board::movePiece(Move move)
{
	//TODO
	string tmp;
	return tmp;
}

void Board::getBoard(int boobs[])
{
	for(int i = 0; i < 64; i++){
		boobs[i] = 1;
	}
}


void Board::reset()
{
	init();
}

bool Board::isLegalMove(Move move) const
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

void Board::init()
{
	// All dem white pieces
	for(int i = A2; i != A1; i++){
		PiecePtr tmp = new Pown(WHITE);
		_squares[i].putPiece(tmp);
	}
	{
		PiecePtr rook1 = new Rook(WHITE);
		PiecePtr rook2 = new Rook(WHITE);
		PiecePtr knight1 = new Knight(WHITE);
		PiecePtr knight2 = new Knight(WHITE);
		PiecePtr bishop1 = new Bishop(WHITE);
		PiecePtr bishop2 = new Bishop(WHITE);
		PiecePtr queen = new Queen(WHITE);
		PiecePtr king = new King(WHITE);

		_squares[A1].putPiece(rook1);
		_squares[B1].putPiece(knight1);
		_squares[C1].putPiece(bishop1);
		_squares[D1].putPiece(queen);
		_squares[E1].putPiece(king);
		_squares[C1].putPiece(bishop2);
		_squares[B1].putPiece(knight2);
		_squares[A1].putPiece(rook2);
	}

	// All dem black pieces
	for(int i = A7; i != A6; i++){
		PiecePtr tmp = new Pown(BLACK);
		_squares[i].putPiece(tmp);
	}
	{
		PiecePtr rook1 = new Rook(BLACK);
		PiecePtr rook2 = new Rook(BLACK);
		PiecePtr knight1 = new Knight(BLACK);
		PiecePtr knight2 = new Knight(BLACK);
		PiecePtr bishop1 = new Bishop(BLACK);
		PiecePtr bishop2 = new Bishop(BLACK);
		PiecePtr queen = new Queen(BLACK);
		PiecePtr king = new King(BLACK);

		_squares[A1].putPiece(rook1);
		_squares[B1].putPiece(knight1);
		_squares[C1].putPiece(bishop1);
		_squares[D1].putPiece(queen);
		_squares[E1].putPiece(king);
		_squares[C1].putPiece(bishop2);
		_squares[B1].putPiece(knight2);
		_squares[A1].putPiece(rook2);
	}
}

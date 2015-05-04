// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 20:09:01 GMT 2015
#include "Board.h"
#include <typeinfo>
#include <iostream>
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
	for(int i = 0; i < BOARD_SIZE; i++){
		if(_squares[i].getPiece() != NULL){
			if(_squares[i].getPiece()->getType() == KING){
				if(_squares[i].getPiece()->getColor() == WHITE){
					boobs[i] = 1;
				} else {
					boobs[i] = 7;
				}
			}
			else if(_squares[i].getPiece()->getType() == QUEEN){
				if(_squares[i].getPiece()->getColor() == WHITE){
					boobs[i] = 2;
				} else {
					boobs[i] = 2;
				}
			}
			else if(_squares[i].getPiece()->getType() == ROOK){
				if(_squares[i].getPiece()->getColor() == WHITE){
					boobs[i] = 3;
				} else {
					boobs[i] = 9;
				}
			}
			else if(_squares[i].getPiece()->getType() == BISHOP){
				if(_squares[i].getPiece()->getColor() == WHITE){
					boobs[i] = 4;
				} else {
					boobs[i] = 10;
				}
			}
			else if(_squares[i].getPiece()->getType() == KNIGHT){
				if(_squares[i].getPiece()->getColor() == WHITE){
					boobs[i] = 5;
				} else {
					boobs[i] = 11;
				}
			}
			else if(_squares[i].getPiece()->getType() == POWN){
				if(_squares[i].getPiece()->getColor() == WHITE){
					boobs[i] = 6;
				} else {
					boobs[i] = 12;
				}
			}
		}
		else {
			boobs[i] = 0;
		}
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
		PiecePtr tmp = new Pown(POWN, WHITE);
		_squares[i].putPiece(tmp);
	}
	{
		PiecePtr rook1 = new Rook(ROOK, WHITE);
		PiecePtr rook2 = new Rook(ROOK, WHITE);
		PiecePtr knight1 = new Knight(KNIGHT, WHITE);
		PiecePtr knight2 = new Knight(KNIGHT, WHITE);
		PiecePtr bishop1 = new Bishop(BISHOP, WHITE);
		PiecePtr bishop2 = new Bishop(BISHOP, WHITE);
		PiecePtr queen = new Queen(QUEEN, WHITE);
		PiecePtr king = new King(KING, WHITE);

		_squares[A1].putPiece(rook1);
		_squares[B1].putPiece(knight1);
		_squares[C1].putPiece(bishop1);
		_squares[D1].putPiece(queen);
		_squares[E1].putPiece(king);
		_squares[F1].putPiece(bishop2);
		_squares[G1].putPiece(knight2);
		_squares[H1].putPiece(rook2);
	}

	// All dem black pieces
	for(int i = A7; i != A6; i++){
		PiecePtr tmp = new Pown(POWN, BLACK);
		_squares[i].putPiece(tmp);
	}
	{
		PiecePtr rook1 = new Rook(ROOK, BLACK);
		PiecePtr rook2 = new Rook(ROOK, BLACK);
		PiecePtr knight1 = new Knight(KNIGHT, BLACK);
		PiecePtr knight2 = new Knight(KNIGHT, BLACK);
		PiecePtr bishop1 = new Bishop(BISHOP, BLACK);
		PiecePtr bishop2 = new Bishop(BISHOP, BLACK);
		PiecePtr queen = new Queen(QUEEN, BLACK);
		PiecePtr king = new King(KING, BLACK);

		_squares[A8].putPiece(rook1);
		_squares[B8].putPiece(knight1);
		_squares[C8].putPiece(bishop1);
		_squares[D8].putPiece(queen);
		_squares[E8].putPiece(king);
		_squares[F8].putPiece(bishop2);
		_squares[G8].putPiece(knight2);
		_squares[H8].putPiece(rook2);
	}
}

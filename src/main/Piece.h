// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 12:48:54 GMT 2015
#ifndef PIECE_H
#define PIECE_H
#include "Move.h"
// bunch of includes for debuggin
#include <string>
#include <iostream>
#include <vector>
using namespace std;

enum Type { NONE, KING, QUEEN, ROOK, BISHOP, KNIGHT, POWN };

enum Color { NO, WHITE, BLACK };

class Piece {
	public:
		Piece(Color c): _color(c){}
		virtual ~Piece(){};
		virtual vector<Move> legalMoves(Position pos)=0;
		virtual vector<Move> killMoves(Position pos)=0;
		virtual void moved(){}
		Color getColor() const{ return _color; }
		virtual Type getType()=0;
	protected:
		Piece& operator =(const Piece& rhs);
		Piece(const Piece& rhs); 

		Color _color;
};
typedef Piece* PiecePtr;
#endif

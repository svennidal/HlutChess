// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 22:03:46 GMT 2015
#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"
using namespace std;

class Knight: public Piece {
	public:
		Knight(Type t, Color c);
		virtual ~Knight();
		//virtual vector<Move> legalMoves(Position pos);
		virtual bool legalMove(Move move);
		virtual Type getType();
	private:
		Knight(const Knight& rhs);
		Knight& operator =(const Knight& rhs);
		Type _type;
};
#endif

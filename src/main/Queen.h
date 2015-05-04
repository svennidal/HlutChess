// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 22:03:46 GMT 2015
#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"
using namespace std;

class Queen: public Piece {
	public:
		Queen(Type t, Color c);
		virtual ~Queen();
		//virtual vector<Move> legalMoves(Position pos);
		virtual bool legalMove(Move move);
		virtual Type getType();
	private:
		Queen(const Queen& rhs);
		Queen& operator =(const Queen& rhs);
		Type _type;
};
#endif

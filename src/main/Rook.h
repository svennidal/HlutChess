// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 22:03:46 GMT 2015
#ifndef ROOK_H
#define ROOK_H
#include "Piece.h"
using namespace std;

class Rook: public Piece {
	public:
		Rook(Type t, Color c);
		virtual ~Rook();
		//virtual vector<Move> legalMoves(Position pos);
		virtual bool legalMove(Move move);
		virtual Type getType();
	private:
		Rook(const Rook& rhs);
		Rook& operator =(const Rook& rhs);
		Type _type;
};
#endif

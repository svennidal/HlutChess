// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 22:03:46 GMT 2015
#ifndef KING_H
#define KING_H
#include "Piece.h"
using namespace std;

class King: public Piece {
	public:
		King(Type t, Color c);
		virtual ~King();
		virtual vector<Move> legalMoves(Position pos);
		virtual vector<Move> killMoves(Position pos);
		virtual Type getType();
	private:
		King(const King& rhs);
		King& operator =(const King& rhs);
		Type _type;
};
#endif

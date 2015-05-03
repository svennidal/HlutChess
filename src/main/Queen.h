// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 22:03:46 GMT 2015
#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"
using namespace std;

class Queen: public Piece {
	public:
		Queen(Color c);
		virtual ~Queen();
		virtual vector<Move> legalMoves(Position pos);
	private:
		Queen(const Queen& rhs);
		Queen& operator =(const Queen& rhs);
};
#endif

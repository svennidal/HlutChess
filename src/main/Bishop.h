// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 22:03:46 GMT 2015
#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"
using namespace std;

class Bishop: public Piece {
	public:
		Bishop(Color c);
		virtual ~Bishop();
		virtual vector<Move> legalMoves(Position pos);
	private:
		Bishop(const Bishop& rhs);
		Bishop& operator =(const Bishop& rhs);
};
#endif

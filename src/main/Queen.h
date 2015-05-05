// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 22:03:46 GMT 2015
#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"
#include "Bishop.h"
#include "Rook.h"
using namespace std;

class Queen: public Piece {
	public:
		Queen(Type t, Color c);
		virtual ~Queen();
		virtual vector<Move> legalMoves(Position pos);
		virtual vector<Move> killMoves(Position pos){ return legalMoves(pos); }
		virtual Type getType();
	private:
		Queen(const Queen& rhs);
		Queen& operator =(const Queen& rhs);
		Type _type;
		PiecePtr _bishop;
		PiecePtr _rook;
};
#endif

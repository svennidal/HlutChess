// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 12:48:54 GMT 2015
#ifndef SQUARE_H
#define SQUARE_H
#include "Piece.h"
#include <typeinfo>
using namespace std;

class Square {
	public:
		Square(): _piece(NULL){}
		~Square();
		
		void putPiece(PiecePtr& piece);
		PiecePtr getPiece();
		Type getType();
		Color getColor();
		void killPiece();
		void gonePiece();
	
	private:
		Square(const Square& rhs);
		Square& operator =(const Square& rhs);

		PiecePtr _piece;
};
typedef Square* SquarePtr;
#endif

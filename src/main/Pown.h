#ifndef POWN_H
#define POWN_H
#include "Piece.h"
using namespace std;

class Pown: public Piece {
	public:
		Pown(Type t, Color c);
		virtual ~Pown();
		virtual vector<Move> legalMoves(Position pos);
		void moved();
		Type getType();
	private:
		Pown(const Pown& rhs);
		Pown& operator =(const Pown& rhs);
		
		bool _firstmove;
		Type _type;
};
#endif

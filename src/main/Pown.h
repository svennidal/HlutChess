#ifndef POWN_H
#define POWN_H
#include "Piece.h"
using namespace std;

class Pown: public Piece {
	public:
		Pown(Color c);
		virtual ~Pown();
		virtual vector<Move> legalMoves(Position pos);
		void moved();
	private:
		Pown(const Pown& rhs);
		Pown& operator =(const Pown& rhs);
		
		bool _firstmove;
};
#endif

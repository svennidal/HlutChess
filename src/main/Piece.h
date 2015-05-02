#ifndef PIECE_H
#define PIECE_H
#include "Move.h"
#include <string>
#include <vector>
using namespace std;

enum Color { WHITE, BLACK };

class Piece {
	public:
		virtual Piece(Color c): _c(c);
		virtual vector<Move> legalMoves(Position pos);
	protected:
		Color _c;
}
#endif

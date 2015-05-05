// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 12:48:54 GMT 2015
#ifndef BOARD_H
#define BOARD_H
#include "Move.h"
#include "Square.h"
#include "Piece.h"
#include "Pown.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Bishop.h"
#include "Knight.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

const int BOARD_SIZE = 64;

class Board {
	public:
		Board();
		~Board();
		void movePiece(Position pos);
		void getBoard(int boobs[]);
		void reset();
	private:
		Board(const Board& rhs);
		Board& operator =(const Board& rhs);

		Square _squares[BOARD_SIZE];
		void init();
		void makeMove(Move move);
};
#endif

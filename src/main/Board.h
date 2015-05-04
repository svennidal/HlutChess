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
using namespace std;

const int BOARD_SIZE = 64;

class Board {
	public:
		Board();
		~Board();
		string movePiece(Move move);
		void getBoard(int boobs[]);
	private:
		Board(const Board& rhs);
		Board& operator =(const Board& rhs);

		//SquarePtr _squares[BOARD_SIZE];
		Square _squares[BOARD_SIZE];
		void init();
		void reset();
		bool isLegalMove(Move move) const;
		void update();
		string checkMove(Position src, Position dest) const;
};
#endif

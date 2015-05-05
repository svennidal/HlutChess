// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 13:34:48 GMT 2015
#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Output.h"
#include <string>
#include <iostream>
using namespace std;

enum OS { NIX, WIN };

class Game {
	public:
		Game(OS os = NIX);
		~Game();
		void play();
	private:
		Game(const Game& rhs);
		Game& operator =(const Game& rhs);

		void terminalOut();
		void internetOut();
		Position getPosition(string inp);
		int _board[BOARD_SIZE];
		Board _theBoard;
		Output* _output;
		OS _os;
};
#endif

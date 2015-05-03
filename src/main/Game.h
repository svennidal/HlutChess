// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 13:34:48 GMT 2015
#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Output.h"
#include <string>
#include <iostream>
using namespace std;

class Game {
	public:
		Game();
		~Game();
		void newGame();
		void waitMove();
	private:
		Game(const Game& rhs);
		Game& operator =(const Game& rhs);
		void terminalOut();
		void internetOut();
		void Move(Move& move);
};
#endif

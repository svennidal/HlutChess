#include "Game.h"
using namespace std;

Game::Game(OS os)
{
	_output = new Output("http://www.reykjavik.university:3717/data/");
	_theBoard.getBoard(_board);
	_os = os;
}

Game::~Game()
{
	delete _output;
}

void Game::play()
{
	string inp;
	if(_os == NIX){ internetOut(); }
	terminalOut();
	cin >> inp;
	while(inp != "x"){
		if(inp == "reset"){ _theBoard.reset(); }
		Position posis = getPosition(inp);
		_theBoard.movePiece(posis);
		_theBoard.getBoard(_board);
		if(_os == NIX){ internetOut(); }
		terminalOut();
		cin >> inp;
	}
}

void Game::terminalOut()
{
	_output->sendToCmdLine(_board);
}

void Game::internetOut()
{
	_output->sendToServer(_board);
}

Position Game::getPosition(string inp)
{
	if(inp == "a1"){ 
		return A1;
	}
	else if(inp == "b1"){ 
		return B1;
	}
	else if(inp == "c1"){ 
		return C1;
	}
	else if(inp == "d1"){ 
		return D1;
	}
	else if(inp == "e1"){ 
		return E1;
	}
	else if(inp == "f1"){ 
		return F1;
	}
	else if(inp == "g1"){ 
		return G1;
	}
	else if(inp == "h1"){ 
		return H1;
	}
	else if(inp == "a2"){ 
		return A2;
	}
	else if(inp == "b2"){ 
		return B2;
	}
	else if(inp == "c2"){ 
		return C2;
	}
	else if(inp == "d2"){ 
		return D2;
	}
	else if(inp == "e2"){ 
		return E2;
	}
	else if(inp == "f2"){ 
		return F2;
	}
	else if(inp == "g2"){ 
		return G2;
	}
	else if(inp == "h2"){ 
		return H2;
	}
	else if(inp == "a3"){ 
		return A3;
	}
	else if(inp == "b3"){ 
		return B3;
	}
	else if(inp == "c3"){ 
		return C3;
	}
	else if(inp == "d3"){ 
		return D3;
	}
	else if(inp == "e3"){ 
		return E3;
	}
	else if(inp == "f3"){ 
		return F3;
	}
	else if(inp == "g3"){ 
		return G3;
	}
	else if(inp == "h3"){ 
		return H3;
	}
	else if(inp == "a4"){ 
		return A4;
	}
	else if(inp == "b4"){ 
		return B4;
	}
	else if(inp == "c4"){ 
		return C4;
	}
	else if(inp == "d4"){ 
		return D4;
	}
	else if(inp == "e4"){ 
		return E4;
	}
	else if(inp == "f4"){ 
		return F4;
	}
	else if(inp == "g4"){ 
		return G4;
	}
	else if(inp == "h4"){ 
		return H4;
	}
	else if(inp == "a5"){ 
		return A5;
	}
	else if(inp == "b5"){ 
		return B5;
	}
	else if(inp == "c5"){ 
		return C5;
	}
	else if(inp == "d5"){ 
		return D5;
	}
	else if(inp == "e5"){ 
		return E5;
	}
	else if(inp == "f5"){ 
		return F5;
	}
	else if(inp == "g5"){ 
		return G5;
	}
	else if(inp == "h5"){ 
		return H5;
	}
	else if(inp == "a6"){ 
		return A6;
	}
	else if(inp == "b6"){ 
		return B6;
	}
	else if(inp == "c6"){ 
		return C6;
	}
	else if(inp == "d6"){ 
		return D6;
	}
	else if(inp == "e6"){ 
		return E6;
	}
	else if(inp == "f6"){ 
		return F6;
	}
	else if(inp == "g6"){ 
		return G6;
	}
	else if(inp == "h6"){ 
		return H6;
	}
	else if(inp == "a7"){ 
		return A7;
	}
	else if(inp == "b7"){ 
		return B7;
	}
	else if(inp == "c7"){ 
		return C7;
	}
	else if(inp == "d7"){ 
		return D7;
	}
	else if(inp == "e7"){ 
		return E7;
	}
	else if(inp == "f7"){ 
		return F7;
	}
	else if(inp == "g7"){ 
		return G7;
	}
	else if(inp == "h7"){ 
		return H7;
	}
	else if(inp == "a8"){ 
		return A8;
	}
	else if(inp == "b8"){ 
		return B8;
	}
	else if(inp == "c8"){ 
		return C8;
	}
	else if(inp == "d8"){ 
		return D8;
	}
	else if(inp == "e8"){ 
		return E8;
	}
	else if(inp == "f8"){ 
		return F8;
	}
	else if(inp == "g8"){ 
		return G8;
	}
	else if(inp == "h8"){ 
		return H8;
	}
	else {
		return X;
	}
}

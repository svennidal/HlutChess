// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 12:48:54 GMT 2015
#include "Output.h"
using namespace std;

Output::Output(string server)
{
	_curlString = "curl -X POST ";
	_curlString += server;
	_cstr = new char[210];

}

Output::~Output()
{
	delete [] _cstr;
}

void Output::sendToServer(const int board[]) const
{
	string postString = "'\\[";
	for(int i = 0; i < 64; i++){
		postString += to_string(board[i]);
		postString += ",";
	}
	postString.pop_back();
	postString += "\\]'";

	//string curlStrengur = "curl -X POST http://reykjavik.university:3717/data/";

	string data = _curlString + postString;
	//char *_cstr = new char[data.length() + 1];
	strcpy(_cstr, data.c_str());

	system(_cstr);
}

void Output::sendToCmdLine(const int board[]) const
{
	int count(8);
	cout << "--------------------\n" << count << "| ";
	count--;
	for(int i = 0; i < 64; i++){
		if(i % 8 == 0 && i != 0){ cout << "|\n" <<  count << "| "; count--; }
		if(board[i] == 0){ cout << "  "; }
		else if(board[i] == 1){ cout << "K "; }
		else if(board[i] == 2){ cout << "Q "; }
		else if(board[i] == 3){ cout << "R "; }
		else if(board[i] == 4){ cout << "B "; }
		else if(board[i] == 5){ cout << "N "; }
		else if(board[i] == 6){ cout << "P "; }
		else if(board[i] == 7){ cout << "k "; }
		else if(board[i] == 8){ cout << "q "; }
		else if(board[i] == 9){ cout << "r "; }
		else if(board[i] == 10){ cout << "b "; }
		else if(board[i] == 11){ cout << "n "; }
		else if(board[i] == 12){ cout << "p "; }
	}
	cout << "|\n--------------------\n";
	cout << "   a b c d e f g h\n";
}

#include "Output.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

// Time for the random shit
#include <time.h>
using namespace std;

/*
void sendToServer(int board[])
{
	string postStrengur = "'\\[";
	for(int i = 0; i < 64; i++){
		postStrengur += to_string(board[i]);
		postStrengur += ",";
	}
	postStrengur.pop_back();
	postStrengur += "\\]'";

	string curlStrengur = "curl -X POST http://reykjavik.university:3717/data/";

	string data = curlStrengur + postStrengur;
	char *cstr = new char[data.length() + 1];
	strcpy(cstr, data.c_str());

	system(cstr);
}
*/

int main()
{
	int board[64];

	Output output("http://www.reykjavik.university:3717/data/");

	string tits;
	while(cin >> tits && tits != "exit"){
		srand(time(NULL));
		for(int i = 0; i < 64; i++){
			board[i] = rand() % 13;
		}
		output.sendToServer(board);
		output.sendToCmdLine(board);
	}

	



	return 0;
}

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
	cout << "data.length(): " << data.length() << endl;
	strcpy(_cstr, data.c_str());

	system(_cstr);
}

void Output::sendToCmdLine(const int board[]) const
{
	for(int i = 0; i < 64; i++){
		cout << board[i] << " ";
	} cout << endl;
}

#ifndef OUTPUT_H
#define OUTPUT_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

class Output {
	public:
		Output(string server);
		~Output();
		void sendToServer(const int board[]) const;
		void sendToCmdLine(const int board[]) const;
	private:
		string _curlString;
		char* _cstr;
};
#endif

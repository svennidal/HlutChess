#include "Square.h"
using namespace std;

Square::~Square()
{
	delete this->_piece;
}

void Square::putPiece(PiecePtr& piece)
{
	if(this->_piece != NULL){
		killPiece();
	}
	this->_piece = piece;
}

PiecePtr& Square::getPiece()
{
	return this->_piece;
}

void Square::killPiece()
{
	delete this->_piece;
	this->_piece = NULL;
}

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

PiecePtr Square::getPiece()
{
	return this->_piece;
}

Type Square::getType()
{
	if(this->_piece == NULL){
		return NONE;
	} else {
		return this->_piece->getType();
	}
}

Color Square::getColor()
{
	if(this->_piece == NULL){
		return NO;
	} else {
		return this->_piece->getColor();
	}
}

void Square::killPiece()
{
	if(this->_piece != NULL){
		delete this->_piece;
		this->_piece = NULL;
	}
}

void Square::gonePiece()
{
	this->_piece = NULL;
}

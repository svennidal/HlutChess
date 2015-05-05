#include "Queen.h"
using namespace std;

Queen::Queen(Type t, Color c): Piece(c), _type(t)
{
	_bishop = new Bishop(t, c);
	_rook = new Rook(t, c);
}

Queen::~Queen()
{
	delete _bishop;
	delete _rook;
}

vector<Move> Queen::legalMoves(Position pos)
{
	vector<Move> bishopViktor;;
	vector<Move> RookViktor;;
	bishopViktor = _bishop->legalMoves(pos);
	RookViktor	= _rook->legalMoves(pos);
	bishopViktor.insert(bishopViktor.end(), RookViktor.begin(), RookViktor.end());
	return bishopViktor;
}

Type Queen::getType()
{
	return _type;
}

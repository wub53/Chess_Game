#include "stdafx.h"
#include "Piece.h"


using namespace std;


Piece::Piece()
{

}

void Piece::SetPosition(int r, int c)
{
	m_pieceRow = r;
	m_pieceCol = c;
}

void Piece::GetPosition(int &r, int &c)
{
	r = m_pieceRow;

	c = m_pieceCol;
}

bool Piece::GetColour()
{
	return m_colour;
}

void Piece::SetBoard(ChessBoard* prototype)
{
	m_theBoard = prototype;
}

ChessBoard* Piece::GetBoard()
{
	return m_theBoard;
}

Piece::~Piece()
{
	cout << "the piece has be destructed" << endl;
}

string Piece::PrintPiece()
{
	string s = "Piece";
	return s;
}


bool Piece::IsMovePossible(int r1, int c1, int r2, int c2)
{
	return false;
}

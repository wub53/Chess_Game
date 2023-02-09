#ifndef PIECE_H
#define PIECE_H
#include <iostream>
#include <string.h>


using namespace std;


class ChessBoard;

class Piece
{
public:

	Piece();

	void SetPosition(int r, int c);

	void GetPosition(int &r, int &c);

	virtual string PrintPiece();

	virtual bool IsMovePossible(int r1, int c1, int r2, int c2);

	bool GetColour();

	void SetBoard(ChessBoard* prototype);

	ChessBoard* GetBoard();

	virtual ~Piece();


private:
	int m_pieceRow; ///protected?
	int m_pieceCol; ///protected?
	ChessBoard* m_theBoard; /// protected?

protected:
	bool m_colour;   /// 1(true) = white and 0(false) = black

};

#endif // PIECE_H

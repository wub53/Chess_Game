#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"
#include "ChessBoard.h"


class knight : public Piece
{
public:
	knight(bool piececolour);


	string PrintPiece();

	bool IsMovePossible(int r1, int c1, int r2, int c2);


};


#endif // KNIGHT_H

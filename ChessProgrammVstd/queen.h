#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"
#include "ChessBoard.h"


class queen : public Piece
{
public:
	queen(bool piececolour);


	string PrintPiece();

	bool IsMovePossible(int r1, int c1, int r2, int c2);


};

#endif // QUEEN_H

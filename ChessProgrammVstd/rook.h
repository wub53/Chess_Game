#ifndef ROOK_H
#define ROOK_H
#include "Piece.h"
#include "ChessBoard.h"


class rook : public Piece
{
public:
	rook(bool piececolour);


	string PrintPiece();

	bool IsMovePossible(int r1, int c1, int r2, int c2);


};

#endif // ROOK_H

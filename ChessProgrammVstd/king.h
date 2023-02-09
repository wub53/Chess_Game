#ifndef KING_H
#define KING_H
#include "Piece.h"
#include "ChessBoard.h"


class king : public Piece
{
public:
	king(bool piececolour);


	string PrintPiece();

	bool IsMovePossible(int r1, int c1, int r2, int c2);


};

#endif // KING_H

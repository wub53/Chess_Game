#ifndef PAWN_H
#define PAWN_H
#include <iostream>
#include <string.h>
#include "Piece.h"
#include "ChessBoard.h"


using namespace std;

class pawn : public Piece
{
public:

	pawn(bool piececolour);

	string PrintPiece();

	bool IsMovePossible(int r1, int c1, int r2, int c2);

private:
};

#endif // PAWN_H

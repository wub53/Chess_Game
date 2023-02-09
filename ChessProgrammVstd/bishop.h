#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"
#include "ChessBoard.h"


class bishop : public Piece
{
   public:
     bishop(bool piececolour);

    string PrintPiece() ;

         bool IsMovePossible(int r1, int c1, int r2, int c2) ;


};

#endif // BISHOP_H

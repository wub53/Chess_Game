#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>
#include <string.h>


using namespace std;

class Piece;

class ChessBoard
{
public:

	ChessBoard(Piece* m_piecearray[4][8]);

	void PrintBoard();

	Piece* GetBoardPiece(int a, int b);

	void SetBoardPiece(Piece* piecetype, int a, int b);

	void SetNULLPointer(int r, int c);



private:
	Piece * m_BoardArray[8][8];


};

#endif // CHESSBOARD_H

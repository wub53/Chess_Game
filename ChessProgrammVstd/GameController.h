#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include <iostream>
#include <string.h>
#include "ChessBoard.h"
#include "Piece.h"
#include "pawn.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"
#include "king.h"
#include "queen.h"
#include "Rules.h"


class GameController
{
public:
	GameController();

	ChessBoard* GetBoard();

	void MoveExecuter(int r1, int c1, int r2, int c2);

	bool MoveChecker(int r1, int c1, int r2, int c2);

	bool KingSabotage(bool color);

	void Undo(int r1, int c1, int r2, int c2);

	bool CheckMate(int r1, int c1);


protected:

private:

	ChessBoard * m_theBoard;

	Piece* m_pieceholder;

	Piece* m_piecearray[4][8];

};

#endif // GAMECONTROLLER_H

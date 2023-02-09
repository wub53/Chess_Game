#include "stdafx.h"
#include "Rules.h"
#include "ChessBoard.h"
#include "Piece.h"

Rules::Rules(ChessBoard* prototype)
{
	m_theBoard = prototype;
}

ChessBoard* Rules::GetBoard()
{
	return m_theBoard;
}

bool Rules::rule1(int r1, int c1, int r2, int c2)
{
	if (((-1<r1 && r1<8) && (-1<c1 && c1<8)) && ((-1<r2 && r2<8) && (-1<c2 && c2<8)))
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Rules::rule2(int r1, int c1, int r2, int c2)
{
	if (GetBoard()->GetBoardPiece(r1, c1)->GetColour() != GetBoard()->GetBoardPiece(r2, c2)->GetColour())
	{
		return true;
	}

	else if (GetBoard()->GetBoardPiece(r2, c2) == NULL)
	{
		return true;
	}

	else
	{
		return false;
	}
}

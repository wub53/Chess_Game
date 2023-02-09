#include "stdafx.h"
#include "pawn.h"
#include "Chessboard.h"


using namespace std;

pawn::pawn(bool piececolour)
{
	m_colour = piececolour;
}

string pawn::PrintPiece()
{
	if (m_colour == false)
	{
		return "B_paw";
	}
	else
	{
		return "W_paw";
	}
}

bool pawn::IsMovePossible(int r1, int c1, int r2, int c2)
{
	if (GetBoard()->GetBoardPiece(r1, c1)->GetColour() == true && GetBoard()->GetBoardPiece(r2, c2) == NULL)
	{
		if ((r2 - r1 == 1) && (c2 - c1 == 0))
		{
			return true;
		}

	}

	else if (GetBoard()->GetBoardPiece(r1, c1)->GetColour() == false && GetBoard()->GetBoardPiece(r2, c2) == NULL)
	{
		if ((r2 - r1 == -1) && (c2 - c1 == 0))
		{
			return true;
		}

	}

	else if ((GetBoard()->GetBoardPiece(r1, c1)->GetColour() == false) && (GetBoard()->GetBoardPiece(r2, c2)->GetColour() == true))
	{
		if (((r2 - r1 == -1) && (c2 - c1 == -1)) || ((r2 - r1 == -1) && (c2 - c1 == 1)))
		{
			return true;
		}
	}

	else if ((GetBoard()->GetBoardPiece(r1, c1)->GetColour() == true) && (GetBoard()->GetBoardPiece(r2, c2)->GetColour() == false))
	{
		if (((r2 - r1 == 1) && (c2 - c1 == -1)) || ((r2 - r1 == 1) && (c2 - c1 == 1)))
		{
			return true;
		}
	}

	return false;    /// before this line i added " else() { return false;} " but the control was reaching to the end of non void function why?

}

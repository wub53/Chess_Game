#include "stdafx.h"
#include "king.h"

king::king(bool piececolour)
{
	m_colour = piececolour;
}

string king::PrintPiece()
{
	if (m_colour == false)
	{
		return "B_kig";
	}
	else
	{
		return "W_kig";
	}
}

bool king::IsMovePossible(int r1, int c1, int r2, int c2)
{

	if ((r2 - r1 == 1) && (c2 - c1 == 0))
	{
		return true;
	}

	else if ((r2 - r1 == 1) && (c2 - c1 == -1))
	{
		return true;
	}

	else if ((r2 - r1 == 0) && (c2 - c1 == -1))
	{
		return true;
	}

	else if ((r2 - r1 == -1) && (c2 - c1 == -1))
	{
		return true;
	}

	else if ((r2 - r1 == -1) && (c2 - c1 == 0))
	{
		return true;
	}

	else if ((r2 - r1 == -1) && (c2 - c1 == 1))
	{
		return true;
	}

	else if ((r2 - r1 == 0) && (c2 - c1 == 1))
	{
		return true;
	}

	else if ((r2 - r1 == 1) && (c2 - c1 == 1))
	{
		return true;
	}

	else
	{
		return false;
	}

}

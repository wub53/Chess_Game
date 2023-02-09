#include "stdafx.h"
#include "knight.h"

knight::knight(bool piececolour)
{
	m_colour = piececolour;
}

string knight::PrintPiece()
{
	if (m_colour == false)
	{
		return "B_kni";
	}
	else
	{
		return "W_kni";
	}
}

bool knight::IsMovePossible(int r1, int c1, int r2, int c2)
{
	if ((r2 - r1 == 2) && (c2 - c1 == 1))
	{
		return true;
	}

	else if ((r2 - r1 == 2) && (c2 - c1 == -1))
	{
		return true;
	}

	else if ((r2 - r1 == 1) && (c2 - c1 == -2))
	{
		return true;
	}

	else if ((r2 - r1 == -1) && (c2 - c1 == -2))
	{
		return true;
	}

	else if ((r2 - r1 == -2) && (c2 - c1 == -1))
	{
		return true;
	}

	else if ((r2 - r1 == -2) && (c2 - c1 == 1))
	{
		return true;
	}

	else if ((r2 - r1 == -1) && (c2 - c1 == 2))
	{
		return true;
	}

	else if ((r2 - r1 == 1) && (c2 - c1 == 2))
	{
		return true;
	}

	else
	{
		return false;
	}
}

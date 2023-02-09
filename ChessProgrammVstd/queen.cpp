#include "stdafx.h"
#include "queen.h"

queen::queen(bool piececolour)
{
	m_colour = piececolour;
}

string queen::PrintPiece()
{
	if (m_colour == false)
	{
		return "B_que";
	}
	else
	{
		return "W_que";
	}
}


bool queen::IsMovePossible(int r1, int c1, int r2, int c2)
{

	if ((r2 - r1 == 7) && (c2 - c1 == 7))  /// 1
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 + 1); (i < r1 + 7) && (j < c1 + 7); (i++) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 6)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 6) && (c2 - c1 == 6))  /// 2
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 + 1); (i < r1 + 6) && (j < c1 + 6); (i++) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 5)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 5) && (c2 - c1 == 5))  /// 3
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 + 1); (i < r1 + 5) && (j < c1 + 5); (i++) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 4)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 4) && (c2 - c1 == 4))  /// 4
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 + 1); (i < r1 + 4) && (j < c1 + 4); (i++) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 3)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 3) && (c2 - c1 == 3))  /// 5
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 + 1); (i < r1 + 3) && (j < c1 + 3); (i++) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 2) && (c2 - c1 == 2))  /// 6
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 + 1); (i < r1 + 2) && (j < c1 + 2); (i++) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 1) && (c2 - c1 == 1))  /// 7
	{
		return true;
	}


	else if ((r2 - r1 == 7) && (c2 - c1 == -7))  /// 8
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 - 1); (i < r1 + 7) && (j > c1 - 7); (i++) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 6)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 6) && (c2 - c1 == -6))  /// 9
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 - 1); (i < r1 + 6) && (j > c1 - 6); (i++) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 5)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 5) && (c2 - c1 == -5))  /// 10
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 - 1); (i < r1 + 5) && (j > c1 - 5); (i++) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 4)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 4) && (c2 - c1 == -4))  /// 11
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 - 1); (i < r1 + 4) && (j > c1 - 4); (i++) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 3)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 3) && (c2 - c1 == -3))  /// 12
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 - 1); (i < r1 + 3) && (j > c1 - 3); (i++) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 2) && (c2 - c1 == -2))  /// 13
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 - 1); (i < r1 + 2) && (j > c1 - 2); (i++) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 1) && (c2 - c1 == -1))  /// 14
	{
		return true;
	}

	else if ((r2 - r1 == -7) && (c2 - c1 == -7))  /// 15
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 - 1); (i > r1 - 7) && (j > c1 - 7); (i--) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 6)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -6) && (c2 - c1 == -6))  /// 16
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 - 1); (i > r1 - 6) && (j > c1 - 6); (i--) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 5)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -5) && (c2 - c1 == -5))  /// 17
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 - 1); (i > r1 - 5) && (j > c1 - 5); (i--) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 4)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -4) && (c2 - c1 == -4))  /// 18
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 - 1); (i > r1 - 4) && (j > c1 - 4); (i--) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 3)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -3) && (c2 - c1 == -3))  /// 19
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 - 1); (i > r1 - 3) && (j > c1 - 3); (i--) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -2) && (c2 - c1 == -2))  /// 20
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 - 1); (i > r1 - 2) && (j > c1 - 2); (i--) && (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -1) && (c2 - c1 == -1))  /// 21
	{
		return true;
	}

	else if ((r2 - r1 == -7) && (c2 - c1 == 7))  /// 22
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 + 1); (i > r1 - 7) && (j < c1 + 7); (i--) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 6)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -6) && (c2 - c1 == 6))  /// 23
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 + 1); (i > r1 - 6) && (j < c1 + 6); (i--) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 5)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -5) && (c2 - c1 == 5))  /// 24
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 + 1); (i > r1 - 5) && (j < c1 + 5); (i--) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 4)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -4) && (c2 - c1 == 4))  /// 25
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 + 1); (i > r1 - 4) && (j < c1 + 4); (i--) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 3)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -3) && (c2 - c1 == 3))  /// 26
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 + 1); (i > r1 - 3) && (j < c1 + 3); (i--) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -2) && (c2 - c1 == 2))  /// 27
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 - 1) && (j = c1 + 1); (i > r1 - 2) && (j < c1 + 2); (i--) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -1) && (c2 - c1 == 1))  /// 28
	{
		return true;
	}


	else if ((r2 - r1 == 7) && (c2 - c1 == 0))  /// 1
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 + 1); (i < r1 + 7); (i++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 6)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 6) && (c2 - c1 == 0))  /// 2
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 + 1); (i < r1 + 6); (i++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 5)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 5) && (c2 - c1 == 0))  /// 3
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 + 1); (i < r1 + 5); (i++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 4)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 4) && (c2 - c1 == 0))  /// 4
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 + 1); (i < r1 + 4); (i++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 3)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 3) && (c2 - c1 == 0))  /// 5
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 + 1); (i < r1 + 3); (i++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 2) && (c2 - c1 == 2))  /// 6
	{
		int sum = 0;
		int i;
		int j;

		for ((i = r1 + 1) && (j = c1 + 1); (i < r1 + 2) && (j < c1 + 2); (i++) && (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 1) && (c2 - c1 == 0))  /// 7
	{
		return true;
	}

	else if ((r2 - r1 == 0) && (c2 - c1 == -7))  /// 8
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 - 1); (j > c1 - 7); (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 6)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == -6))  /// 9
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 - 1); (j > c1 - 6); (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 5)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == -5))  /// 10
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 - 1); (j > c1 - 5); (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 4)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == -4))  /// 11
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 - 1); (j > c1 - 4); (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 3)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == -3))  /// 12
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 - 1); (j > c1 - 3); j--)
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == -2))  /// 13
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 - 1); (j > c1 - 2); (j--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == -1))  /// 14
	{
		return true;
	}

	else if ((r2 - r1 == -7) && (c2 - c1 == 0))  /// 15
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 - 1); (i > r1 - 7); (i--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 6)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -6) && (c2 - c1 == 0))  /// 16
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 - 1); (i > r1 - 6); (i--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 5)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -5) && (c2 - c1 == 0))  /// 17
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 - 1); (i > r1 - 5); (i--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 4)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -4) && (c2 - c1 == 0))  /// 18
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 - 1); (i > r1 - 4); (i--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 3)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -3) && (c2 - c1 == 0))  /// 19
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 - 1); (i > r1 - 3); (i--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -2) && (c2 - c1 == 0))  /// 20
	{
		int sum = 0;
		int i;
		int j = c1;

		for ((i = r1 - 1); (i > r1 - 2); (i--))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == -1) && (c2 - c1 == 0))  /// 21
	{
		return true;
	}

	else if ((r2 - r1 == 0) && (c2 - c1 == 7))  /// 22
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 + 1); (j < c1 + 7); (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 6)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == 6))  /// 23
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 + 1); (j < c1 + 6); (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 5)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == 5))  /// 24
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 + 1); (j < c1 + 5); (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 4)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == 4))  /// 25
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 + 1); (j < c1 + 4); (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 3)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == 3))  /// 26
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 + 1); (j < c1 + 3); (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == 2))  /// 27
	{
		int sum = 0;
		int i = r1;
		int j;

		for ((j = c1 + 1); (j < c1 + 2); (j++))
		{
			if (GetBoard()->GetBoardPiece(i, j) == NULL)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			return true;
		}

		else
		{
			return false;
		}

	}

	else if ((r2 - r1 == 0) && (c2 - c1 == 1))  /// 28
	{
		return true;
	}

	else
	{
		return false;
	}


}







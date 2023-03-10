#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "GameController.h"

using namespace std;

int main()
{
	GameController g;
	g.GetBoard()->PrintBoard();

	cout << endl;

	for (int i = 1; i < 2; i--)
	{
		cout << endl << endl;
		cout << "P1 chose your board r1 " << endl;
		int r1;
		int c1;
		cin >> r1;
		cout << "P1 chose your board c1" << endl;
		cin >> c1;

		cout << "P2 chose your board r2" << endl;
		int r2;
		int c2;
		cin >> r2;
		cout << "P2 chose your board c2" << endl;
		cin >> c2;
		cout << endl;

		int row1; int coloumn1;

		g.GetBoard()->GetBoardPiece(r1, c1)->GetPosition(row1, coloumn1);

		if (g.MoveChecker(r1, c1, r2, c2) == true)
		{
			g.GetBoard()->PrintBoard();

			int row; int coloumn;

			g.GetBoard()->GetBoardPiece(r2, c2)->GetPosition(row, coloumn);

			cout << row << endl;
			cout << coloumn << endl;

		}

		else
		{
			cout << "Select a valid move";
		}

	}


	return 0;
}

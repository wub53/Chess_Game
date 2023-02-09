#include "stdafx.h"
#include "ChessBoard.h"
#include "Piece.h"
#include <string>


ChessBoard::ChessBoard(Piece* m_piecearray[4][8])
{
	for (int i = 7; i > -1; i--)
	{
		for (int j = 0; j < 8; j++)
		{
			m_BoardArray[i][j] = NULL;
		}
	}

	for (int i = 7; i > 6; i--)
	{
		for (int j = 0; j < 8; j++)
		{
			m_BoardArray[i][j] = m_piecearray[0][j];
			m_BoardArray[i][j]->SetPosition(i, j);


		}
	}
	for (int i = 6; i > 5; i--)
	{
		for (int j = 0; j < 8; j++)
		{
			m_BoardArray[i][j] = m_piecearray[1][j];
			m_BoardArray[i][j]->SetPosition(i, j);


		}
	}

	for (int i = 1; i > 0; i--)
	{
		for (int j = 0; j < 8; j++)
		{
			m_BoardArray[i][j] = m_piecearray[2][j];
			m_BoardArray[i][j]->SetPosition(i, j);

		}
	}
	for (int i = 0; i > -1; i--)
	{
		for (int j = 0; j < 8; j++)
		{
			m_BoardArray[i][j] = m_piecearray[3][j];
			m_BoardArray[i][j]->SetPosition(i, j);

		}
	}

}

void ChessBoard::PrintBoard()
{
	for (int i = 7; i > -1; i--)
	{
		cout << "  " << i << "     ";
		for (int j = 0; j < 8; j++)
		{
			if (m_BoardArray[i][j] == NULL)
			{
				cout << "   - ";
			}
			else
			{
				cout << m_BoardArray[i][j]->PrintPiece();
			}
			cout << "         ";
		}
		cout << endl;
	}

	for (int i = 0; i < 8; i++)
	{
		cout << "          " << i << "   ";
	}
	cout << endl;
}

Piece* ChessBoard::GetBoardPiece(int a, int b)
{
	return m_BoardArray[a][b];
}

void ChessBoard::SetBoardPiece(Piece* piecetype, int a, int b)
{
	m_BoardArray[a][b] = piecetype;
}

void ChessBoard::SetNULLPointer(int r, int c)
{
	m_BoardArray[r][c] = NULL;
}

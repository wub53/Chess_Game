#include "stdafx.h"
#include "GameController.h"

GameController::GameController()
{
	Piece* m_pieceholder = new Piece;

	Piece* pawn_b1 = new pawn(false);
	Piece* pawn_b2 = new pawn(false);
	Piece* pawn_b3 = new pawn(false);
	Piece* pawn_b4 = new pawn(false);
	Piece* pawn_b5 = new pawn(false);
	Piece* pawn_b6 = new pawn(false);
	Piece* pawn_b7 = new pawn(false);
	Piece* pawn_b8 = new pawn(false);

	Piece* pawn_w1 = new pawn(true);
	Piece* pawn_w2 = new pawn(true);
	Piece* pawn_w3 = new pawn(true);
	Piece* pawn_w4 = new pawn(true);
	Piece* pawn_w5 = new pawn(true);
	Piece* pawn_w6 = new pawn(true);
	Piece* pawn_w7 = new pawn(true);
	Piece* pawn_w8 = new pawn(true);

	Piece* rook_b1 = new rook(false);
	Piece* rook_b2 = new rook(false);
	Piece* rook_w1 = new rook(true);
	Piece* rook_w2 = new rook(true);

	Piece* bishop_b1 = new bishop(false);
	Piece* bishop_b2 = new bishop(false);
	Piece* bishop_w1 = new bishop(true);
	Piece* bishop_w2 = new bishop(true);

	Piece* knight_b1 = new knight(false);
	Piece* knight_b2 = new knight	(false);
	Piece* knight_w1 = new knight(true);
	Piece* knight_w2 = new knight(true);

	Piece* king_b1 = new king(false);
	Piece* king_w1 = new king(true);

	Piece* queen_b1 = new queen(false);
	Piece* queen_w1 = new queen(true);

	m_piecearray[0][0] = rook_b1;
	m_piecearray[0][1] = knight_b1;
	m_piecearray[0][2] = bishop_b1;
	m_piecearray[0][3] = queen_b1;
	m_piecearray[0][4] = king_b1;
	m_piecearray[0][5] = bishop_b2;
	m_piecearray[0][6] = knight_b2;
	m_piecearray[0][7] = rook_b2;
	m_piecearray[1][0] = pawn_b1;
	m_piecearray[1][1] = pawn_b2;
	m_piecearray[1][2] = pawn_b3;
	m_piecearray[1][3] = pawn_b4;
	m_piecearray[1][4] = pawn_b5;
	m_piecearray[1][5] = pawn_b6;
	m_piecearray[1][6] = pawn_b7;
	m_piecearray[1][7] = pawn_b8;

	m_piecearray[2][0] = pawn_w1;
	m_piecearray[2][1] = pawn_w2;
	m_piecearray[2][2] = pawn_w3;
	m_piecearray[2][3] = pawn_w4;
	m_piecearray[2][4] = pawn_w5;
	m_piecearray[2][5] = pawn_w6;
	m_piecearray[2][6] = pawn_w7;
	m_piecearray[2][7] = pawn_w8;
	m_piecearray[3][0] = rook_w1;
	m_piecearray[3][1] = knight_w1;
	m_piecearray[3][2] = bishop_w1;
	m_piecearray[3][3] = king_w1;
	m_piecearray[3][4] = queen_w1;
	m_piecearray[3][5] = bishop_w2;
	m_piecearray[3][6] = knight_w2;
	m_piecearray[3][7] = rook_w2;


	m_theBoard = new ChessBoard(m_piecearray);

	pawn_b1->SetBoard(m_theBoard);
	pawn_b2->SetBoard(m_theBoard);
	pawn_b3->SetBoard(m_theBoard);
	pawn_b4->SetBoard(m_theBoard);
	pawn_b5->SetBoard(m_theBoard);
	pawn_b6->SetBoard(m_theBoard);
	pawn_b7->SetBoard(m_theBoard);
	pawn_b8->SetBoard(m_theBoard);
	pawn_w1->SetBoard(m_theBoard);
	pawn_w2->SetBoard(m_theBoard);
	pawn_w3->SetBoard(m_theBoard);
	pawn_w4->SetBoard(m_theBoard);
	pawn_w5->SetBoard(m_theBoard);
	pawn_w6->SetBoard(m_theBoard);
	pawn_w7->SetBoard(m_theBoard);
	pawn_w8->SetBoard(m_theBoard);

	rook_b1->SetBoard(m_theBoard);
	rook_b2->SetBoard(m_theBoard);
	rook_w1->SetBoard(m_theBoard);
	rook_w2->SetBoard(m_theBoard);

	knight_b1->SetBoard(m_theBoard);
	knight_w2->SetBoard(m_theBoard);
	knight_b2->SetBoard(m_theBoard);
	knight_w1->SetBoard(m_theBoard);

	bishop_b1->SetBoard(m_theBoard);
	bishop_b2->SetBoard(m_theBoard);
	bishop_w1->SetBoard(m_theBoard);
	bishop_w2->SetBoard(m_theBoard);

	queen_b1->SetBoard(m_theBoard);
	queen_w1->SetBoard(m_theBoard);

	king_b1->SetBoard(m_theBoard);
	king_w1->SetBoard(m_theBoard);
}

ChessBoard* GameController::GetBoard()
{
	return m_theBoard;
}


bool GameController::MoveChecker(int r1, int c1, int r2, int c2)
{

	if (m_theBoard->GetBoardPiece(r2, c2) == NULL)
	{
		cout << "2nd point is null" << endl;
		if (m_theBoard->GetBoardPiece(r1, c1)->IsMovePossible(r1, c1, r2, c2) == true)
		{
			MoveExecuter(r1, c1, r2, c2);

			if ( KingSabotage(m_theBoard->GetBoardPiece(r2, c2)->GetColour()) == false )
			{
				cout << "king has been not been sabotaged" << endl;
				return true;
			}

			else if ( KingSabotage(m_theBoard->GetBoardPiece(r2, c2)->GetColour()) == true )
			{
				cout << "king has been sabotaged" << endl;
				Undo(r1, c1, r2, c2);
				return false;
			}

		}

		else if (m_theBoard->GetBoardPiece(r1, c1)->IsMovePossible(r1, c1, r2, c2) == false)
		{
			return false;
		}
	}

	else if (m_theBoard->GetBoardPiece(r1, c1)->GetColour() != m_theBoard->GetBoardPiece(r2, c2)->GetColour())
	{
		cout << "different" << endl;

		if (m_theBoard->GetBoardPiece(r1, c1)->IsMovePossible(r1, c1, r2, c2) == true)
		{
			MoveExecuter(r1, c1, r2, c2);

			if (KingSabotage(m_theBoard->GetBoardPiece(r2, c2)->GetColour()) == false)
			{
				return true;
			}

			else if (KingSabotage(m_theBoard->GetBoardPiece(r2, c2)->GetColour()) == true)
			{
				Undo(r1, c1, r2, c2);
				return false;
			}
		}

	}

	else if (m_theBoard->GetBoardPiece(r1, c1)->GetColour() == m_theBoard->GetBoardPiece(r2, c2)->GetColour())
	{
		cout << "u selected same colour pieces" << endl;

		return false;
	}

	return false;
}


void GameController::MoveExecuter(int r1, int c1, int r2, int c2)
{
	if (m_theBoard->GetBoardPiece(r2, c2) == NULL)    /// *remark* 2 consecutive if() are executed irrespective of their results so instead use "else if()"
	{
		m_theBoard->SetBoardPiece(m_theBoard->GetBoardPiece(r1, c1), r2, c2);

		m_theBoard->SetNULLPointer(r1, c1);

		m_theBoard->GetBoardPiece(r2, c2)->SetPosition(r2, c2);
	}

	else
	{
		m_pieceholder = m_theBoard->GetBoardPiece(r2, c2);

		m_theBoard->SetNULLPointer(r2, c2);

		m_theBoard->SetBoardPiece(m_theBoard->GetBoardPiece(r1, c1), r2, c2);

		m_theBoard->SetNULLPointer(r1, c1);

		m_theBoard->GetBoardPiece(r2, c2)->SetPosition(r2, c2);

	}
}


bool GameController::KingSabotage(bool color)
{	
	int Wkingrow;
	int Wkingcoloumn;
	int Bkingrow;
	int Bkingcoloumn;


	m_piecearray[3][3]->GetPosition(Wkingrow, Wkingcoloumn);
	m_piecearray[0][4]->GetPosition(Bkingrow, Bkingcoloumn);

	///cout << Wkingrow;
	///cout << Wkingcoloumn;
	///cout << Bkingrow;
	///cout << Bkingcoloumn;



	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j <8; j++)
		{
			if (m_theBoard->GetBoardPiece(i, j) != NULL)
			{
				if (m_theBoard->GetBoardPiece(i, j)->GetColour() != color && color == true)
				{
					if (m_theBoard->GetBoardPiece(i, j)->IsMovePossible(i, j, Wkingrow, Wkingcoloumn) == true)
					{
						///cout << "king is under threat";
						return true;
					}
				}

				else if (m_theBoard->GetBoardPiece(i, j)->GetColour() != color && color == false)
				{
					if (m_theBoard->GetBoardPiece(i, j)->IsMovePossible(i, j, Bkingrow, Bkingcoloumn) == true)
					{
						///cout << "king is under threat";
						return true;
					}
				}
			}

			else
			{
				break;
			}

		}

	}

	return false;
}


void GameController::Undo(int r1, int c1, int r2, int c2)
{
	m_theBoard->SetBoardPiece(m_theBoard->GetBoardPiece(r2, c2), r1, c1);
	m_theBoard->SetNULLPointer(r2, c2);
	m_theBoard->SetBoardPiece(m_pieceholder, r2, c2);


}

bool GameController::CheckMate(int r1, int c1)
{
	bool color;

	if (m_theBoard->GetBoardPiece(r1, c1)->GetColour() == true)
	{
		color = false;
	}
	else { color = true; }

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (m_theBoard->GetBoardPiece(i, j) == NULL && m_theBoard->GetBoardPiece(i, j)->GetColour() == color)
			{
				for (int k = 0; k < 8; k++)
				{
					for (int l = 0; l < 8; l++)
					{
						if (MoveChecker(i, j, k, l) == true)
						{
							return false;
						}
					}
				}
			}
		}
	}

	return true;

}









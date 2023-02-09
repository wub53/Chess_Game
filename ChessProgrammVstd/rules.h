#ifndef RULES_H
#define RULES_H
#include <iostream>
#include <string.h>

class ChessBoard;

class Rules
{
public:
	Rules(ChessBoard* prototype);

	ChessBoard* GetBoard();

	bool rule1(int r1, int c1, int r2, int c2);

	bool rule2(int r1, int c1, int r2, int c2);


protected:

private:
	ChessBoard * m_theBoard;
};

#endif // RULES_H

#include "Board.h"



Board::Board()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m_space = Square(i, j, false);
			m_board[i][j] = {m_space};
		}
	}
}


Board::~Board()
{
}

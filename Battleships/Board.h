#pragma once
#include "Square.h"

class Board
{
public:
	Board();
	~Board();


private:
	Square m_board[10][10];
	Square m_space;
};


#pragma once
#include "Ship.h"

class Enemy
{
public:
	Enemy(int difficulty, int score);
	~Enemy();

private:
	int m_score;
	int m_difficulty;
	int m_shipsLeft;
	Ship m_carrier;
	Ship m_battleship;
	Ship m_cruiser;
	Ship m_submarine;
	Ship m_destroyer;
};


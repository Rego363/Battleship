#pragma once
#include <iostream>
#include "Ship.h"

class Player
{
public:
	Player(std::string name, int highscore, int score, int level);
	~Player();

private:
	std::string m_name;
	int m_highScore;
	int m_score;
	int m_level;
	int m_shipsLeft;
	Ship m_carrier;
	Ship m_battleship;
	Ship m_cruiser;
	Ship m_submarine;
	Ship m_destroyer;
};


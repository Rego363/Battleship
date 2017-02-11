#pragma once
#include <iostream>
#include "Player.h"
#include "Enemy.h"

class Game
{
public:
	Game();
	~Game();

private: 
	void update();
	int m_turn;
	int m_screenWidth;
	int m_screenHeight;
	Player m_player;
	Enemy m_enemy;
	std::string m_name;
	int m_highScore;
};


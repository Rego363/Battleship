#pragma once
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Board.h"

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
	Board m_playerBoard;
	Enemy m_enemy;
	Board m_enemyBoard;
	std::string m_name;
	int m_highScore;
};


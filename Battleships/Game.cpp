#include "Game.h"



Game::Game() :
m_player(m_name, m_highScore, 0, 1),
m_enemy(1, 0)
{
	m_turn = 1;
	m_screenHeight = 800;
	m_screenWidth = 1200;
}


Game::~Game()
{
}

void update()
{

}
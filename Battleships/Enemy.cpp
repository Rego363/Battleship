#include "Enemy.h"



Enemy::Enemy(int difficulty, int score) :
m_difficulty(difficulty),
m_score(score),
m_carrier(ShipType::Carrier),
m_battleship(ShipType::Battleship),
m_cruiser(ShipType::Cruiser),
m_submarine(ShipType::Submarine),
m_destroyer(ShipType::Destroyer)
{
	m_shipsLeft = 5;
	
}


Enemy::~Enemy()
{
}

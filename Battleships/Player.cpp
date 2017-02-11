#include "Player.h"



Player::Player(std::string name, int highscore, int score, int level) :
	m_name(name),
	m_highScore(highscore),
	m_score(score),
	m_level(level),
	m_carrier(ShipType::Carrier),
	m_battleship(ShipType::Battleship),
	m_cruiser(ShipType::Cruiser),
	m_submarine(ShipType::Submarine),
	m_destroyer(ShipType::Destroyer)
{
	m_shipsLeft = 5;
}


Player::~Player()
{
}

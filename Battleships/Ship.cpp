#include "Ship.h"



Ship::Ship(ShipType type) :
	m_type(type)
{
	if (m_type == ShipType::Carrier)
	{
		m_length = 5;
	}
	else if (m_type == ShipType::Battleship)
	{
		m_length = 4;
	}
	else if (m_type == ShipType::Cruiser || m_type == ShipType::Submarine)
	{
		m_length = 3;
	}
	else if (m_type == ShipType::Destroyer)
	{
		m_length = 2;
	}
	else
	{
		std::cout << "Error initialising ship type" << std::endl;
	}
}


Ship::~Ship()
{
}

void Ship::setPos(int posX, int posY, Direction facing)
{
	m_posX = posX;
	m_posY = posY;
	m_facing = facing;
}
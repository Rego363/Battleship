#pragma once
#include <iostream>
enum class
	ShipType
{
	Carrier,	// 5
	Battleship,	// 4 
	Cruiser,	// 3
	Submarine,	// 3
	Destroyer	// 2
};

enum class
	Direction
{
	North,
	South,
	East,
	West
};

class Ship
{
public:
	Ship(ShipType type);
	~Ship();
	void setPos(int posX, int posY, Direction facing);

private:
	ShipType m_type;
	int m_length;
	int m_posX;
	int m_posY;
	Direction m_facing;

};


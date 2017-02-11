#pragma once
class Square
{
public:
	Square(int posX, int posY, bool occupied);
	~Square();
	void hit();

private:
	bool m_occupied;
	bool m_hit;
	int m_posX;
	int m_posY;
};


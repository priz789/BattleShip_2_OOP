#pragma once
#include "Field.h"
#include<string>

class Player
{
private:
	Field* field;
	int currentCoordX;
	int currentCoordY;
public:
	std::string name;
	int score;
	Player();
	~Player();
	void SetX(int _x);
	void SetY(int _y);
	int GetX();
	int GetY();
	bool WinloseCheck();
};


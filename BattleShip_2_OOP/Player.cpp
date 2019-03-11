#include "Player.h"

using namespace std;

Player::Player()
{
	name.resize(20, 0);
	score = 0;
	field = new Field();
	currentCoordX = 1;
	currentCoordY = 1;
}


Player::~Player()
{
	field->~Field();
}


void Player::SetX(int _x)
{}


void Player::SetY(int _y)
{}


int Player::GetX()
{
	return currentCoordX;
}


int Player::GetY()
{
	return currentCoordY;
}


bool Player::WinLoseCheck()
{
	return 0;
}

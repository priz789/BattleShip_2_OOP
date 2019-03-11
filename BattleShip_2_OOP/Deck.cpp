#include "Deck.h"

using namespace std;

Deck::Deck(int _x, int _y, int _status, int _deckNum)
{
	x = _x;
	y = _y;
	status = _status;
	deckNum = _deckNum;
}


bool Deck::IsDeck()
{
	return 1;
}


int Deck::GetX()
{
	return x;
}


int Deck::GetY()
{
	return y;
}


int Deck::GetStatus()
{
	return status;
}


int Deck::GetDeckNum()
{
	return deckNum;
}

void Deck::SetX(int _x)
{
	x = _x;
}


void Deck::SetY(int _y)
{
	y = _y;
}


void Deck::SetStatus(int _status)
{
	status = _status;
}


void Deck::SetDeckNum(int _deckNum)
{
	deckNum = _deckNum;
}
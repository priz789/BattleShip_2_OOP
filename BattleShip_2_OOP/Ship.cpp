#include "Ship.h"

Ship::Ship(int _decksNum)
{
	int numberOfDecks = _decksNum;
	DeckArr = new Deck[_decksNum];
	status = 1;
}


Ship::~Ship()
{
	delete[] DeckArr;
}


bool Ship::GetShipStatus()
{
	return status;
}


void Ship::CheckShipStatus()
{
	int tempStatus = 0;
	for (int i = 0; i < numberOfDecks; i++)
	{
		tempStatus += GetDeckStatus(i);
	}
	if (tempStatus < 1)
	{
		status = 0;
	}
}


int Ship::GetDeckStatus(int _deckNum)
{
	return DeckArr[_deckNum - 1].GetStatus();
}


void Ship::SetDeckStatus(int _deckNum, int _newStatus)
{
	DeckArr[_deckNum - 1].SetStatus(_newStatus);
}
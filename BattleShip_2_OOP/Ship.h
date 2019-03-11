#pragma once
#include "Deck.h"
#include "Consts.h"

class Ship
{
	int numberOfDecks;
	Deck* DeckArr;
	bool status;
public:
	Ship(int _decksNum = MAX_DECKS);
	~Ship();
	bool GetShipStatus();
	void CheckShipStatus();
	int GetDeckStatus(int _deckNum);
	void SetDeckStatus(int _deckNum, int _newStatus);
};


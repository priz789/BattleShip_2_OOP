#pragma once
#include "Cell.h"
#include "Ship.h"
#include "Deck.h"
#include "Consts.h"

class Field
{
	Cell* CellArray;
	Ship* ShipArray;

public:
	Field();
	~Field();
	int GetCellStatus(int _x, int _y);
	bool GetShipStatus(int _shipNum);
	void SetCellStatus(int _x, int _y, int _newStatus);
};


#include "Field.h"



Field::Field()
{
	Cell* CellArray = new Cell[FIELD_SIZE*FIELD_SIZE];
	Ship* ShipArray = new Ship[MAX_SHIPS];
}


Field::~Field()
{
	delete[] CellArray;
	delete[] ShipArray;
}


int Field::GetCellStatus(int _x, int _y)
{
	for (int i = 0; i < FIELD_SIZE*FIELD_SIZE; i++)
	{
		if (CellArray[i].GetX() == _x)
		{
			if (CellArray[i].GetY() == _y)
			{
				return CellArray[i].GetStatus();
			}
		}
	}
	return 0;
}


bool Field::GetShipStatus(int _shipNum)
{
	return ShipArray[_shipNum - 1].GetShipStatus();
}


void Field::SetCellStatus(int _x, int _y, int _newStatus)
{
	for (int i = 0; i < FIELD_SIZE*FIELD_SIZE; i++)
	{
		if (CellArray[i].GetX() == _x)
		{
			if (CellArray[i].GetY() == _y)
			{
				CellArray[i].SetStatus(_newStatus);
				return;
			}
		}
	}
}
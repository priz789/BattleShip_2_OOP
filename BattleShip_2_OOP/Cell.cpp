#include "Cell.h"

using namespace std;

Cell::Cell(int _x = 0, int _y = 0, int _status = 0)
{
	x = _x;
	y = _y;
	status = _status;
}


bool Cell::IsDeck()
{
	return 0;
}


int Cell::GetX()
{
	return x;
}


int Cell::GetY()
{
	return y;
}


int Cell::GetStatus()
{
	return status;
}


void Cell::SetX(int _x)
{
	x = _x;
}


void Cell::SetY(int _y)
{
	y = _y;
}


void Cell::SetStatus(int _status)
{
	status = _status;
}


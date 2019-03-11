#pragma once
#include "Cell.h"
class Deck :
	public Cell
{
private:
	int x;
	int y;
	int status;
	int deckNum;
public:
	Deck(int _x = 0, int _y = 0, int _status = 1, int deckNum = 0);
	bool IsDeck();
	int GetX();
	int GetY();
	int GetStatus();
	int GetDeckNum();  
	void SetX(int _x);
	void SetY(int _y);
	void SetStatus(int _status);
	void SetDeckNum(int _deckNum);
};

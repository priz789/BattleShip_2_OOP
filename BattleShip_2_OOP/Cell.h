#pragma once
class Cell
{
private:
	int x;
	int y;
	int status;
public:
	Cell(int _x = 0, int _y = 0, int _status = 0);
	virtual bool IsDeck();
	virtual int GetX();
	virtual int GetY();
	virtual int GetStatus();
	virtual void SetX(int _x);
	virtual void SetY(int _y);
	virtual void SetStatus(int _status);
};


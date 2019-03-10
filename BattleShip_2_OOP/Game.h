#pragma once
#include "Player.h"

class Game
{
private:
	Player* P1;
	Player* P2;
public:
	Game();
	~Game();
	void GameTurn(Player* _P);
	bool WinLoseCheck(Player* _P);
};


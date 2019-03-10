#include "Game.h"

Game::Game()
{
	P1 = new Player();
	P2 = new Player();
}


Game::~Game()
{
	P1->~Player();
	P2->~Player();
}


void GameTurn(Player* _P)
{
	if (!WinLoseCheck(_P))
	{
		// gameTurn realization 
	}
	else
	{
		EndGame();
	}
}


bool WinLoseCheck(Player* _P)
{
	return _P->WinLoseCheck();
}


void EndGame()
{
	// EndGame realization
}

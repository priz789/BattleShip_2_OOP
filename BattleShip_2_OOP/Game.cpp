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


void Game::GameTurn(Player* _P)
{
	if (!WinLoseCheck(_P))
	{
		return; // gameTurn realization 
	}
	else
	{
		Game::EndGame();
	}
}


bool Game::WinLoseCheck(Player* _P)
{
	return _P->WinLoseCheck();
}


void Game::EndGame()
{
	return;// EndGame realization
}

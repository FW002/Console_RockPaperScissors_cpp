#include <string>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include "rsp.h"

using namespace std;

void rsp::random()
{
	srand(time(NULL));

	int rdn = rand() % 3;

	random_ai = rdn;

}

string rsp::AI()
{
	m_r = "ROCK";
	m_p = "PAPER";
	m_s = "SCISSORS";

	switch (random_ai)
	{
	case 0: return m_r; break;
	case 1: return m_p; break;
	case 2: return m_s; break;
	default: return "ERROR OCCURED"; break;
	}
}

string rsp::player_input(char in)
{

		switch (in)	//the player input
		{
		case 'r':  return "PLAYER choose the edged ROCK"; break;		
		case 's':  return "PLAYER choose the all mighty SCISSORS"; break;
		case 'p':  return "PLAYER choose the razor-sharp PAPER"; break;
		default: return "ERROR OCCURED"; break;
		}

}


string rsp::calculation(char user_turn)
{

	if (random_ai == 0 && user_turn == 'r')	//aiRock vs userRock
	{
		return "DRAW";
	}
	else if(random_ai == 1 && user_turn == 'p')//aiPaper vs userPAper
	{
		return "DRAW";
	}
	else if (random_ai == 2 && user_turn == 's')//aiScissor vs userScissor
	{
		return "DRAW";
	}
	else if (random_ai == 0 && user_turn == 's')	//aiRock vs userScissor
	{
		return "AI WINS";
	}
	else if (random_ai == 2 && user_turn == 'r') //aiScissor vs userRock
	{
		return "PLAYER WINS";
	}
	else if (random_ai == 1 && user_turn == 'r') //aiPaper vs userRock
	{
		return "AI WINS";
	}
	else if (random_ai == 0 && user_turn == 'p') // aiRock vs userPaper
	{
		return "PLAYER WINS";
	}
	else if (random_ai == 1 && user_turn == 's') // aiPAper vs userScissor
	{
		return "PLAYER WINS";
	}
	else if (random_ai == 2 && user_turn == 'p') // aiScissor vs userPaper
	{
		return "AI WINS";
	}
	else
	{
		return "code in progress";
	}
}

int rsp::score(string result)
{
	int pl_score = 0;
	int ai_score = 0;

	if (result == "AI WINS")
	{
		ai_score++;
	}
	else if (result == "PLAYER WINS")
	{
		pl_score++;
	}
	else
	{
		pl_score = pl_score;	//if result is draw, nothing should happen
		ai_score = ai_score;
	}

	return ai_score, pl_score;
}


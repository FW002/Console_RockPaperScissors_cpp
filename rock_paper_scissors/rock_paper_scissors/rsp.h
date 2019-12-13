#pragma once
#include <string>

using namespace std;

class rsp {

private:
	string m_r;
	string m_p;
	string m_s;
	int random_ai;	//random number for ai



public:

	
	void random();
	string AI();
	string calculation(char user_turn);
	string player_input(char in);
	int score(string result);
	
};
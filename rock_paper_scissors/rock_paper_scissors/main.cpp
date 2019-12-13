#include <iostream>
#include <string>
#include "rsp.h"

using namespace std;

int main()
{
	rsp INIT;
	char cont;
	char input;
	rsp call;
	rsp result;

	cout << "Welcome to \"Rock Paper Scissor\" (Version: dev_70_87.0.0.1)" << endl;
	cout << endl;

	do {
		
		cout << "Please type [|r|p|s|] for Rock Paper or Scissor " << endl;
		cin >> input;


		while (input != 'r' && input != 's' && input != 'p')
		{
			cout << "No no no no...type one of these: r, p or s" << endl;
			cin >> input;
		}


		cout << call.player_input(input) << endl;	
		cout << endl;


		cout << "Now it is the AIs turn" << endl;
		cout << endl;

		
	    INIT.random();	// starts the random generator
		cout << "The program choose... " << INIT.AI() << endl;
		cout << endl;


		cout << "----RESULT----" << endl;
		cout << endl;


		cout << INIT.calculation(input) << endl;
		cout << endl;
		string res = INIT.calculation(input);
	

		cout << "The Score is... " << INIT.score(res) << endl;

		cout << "Do you want to try again? [y/n]" << endl;
		cin >> cont;

		system("cls");	//JUST FOR DEV VERSION !!!! 

	} while (cont != 'n');		// !!!!!!!NEEDS TO BE IMPROVED!!!!!!!!!!!

	system("pause");
}


// VERSION: dev_70_87.0.0.1
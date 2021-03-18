/* ------------------------------------------------ HEADER ------------------------------------------------ */

#include <algorithm>
#include <iostream>
#include <set>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
using namespace std;



/* ------------------------------------------------ MAIN ------------------------------------------------ */

int main()
{
	//------------------------------------------------variables
	int keypress = 0;


	//------------------------------------------------functions
	void intro();
	void query();
	void randomizer();


	//------------------------------------------------queue
	intro();
	
	for ( ; ; ) //added loop to avoid reopen
	{
		query();

		//to be reviewed - wont work as expects an int.... - can request numbers instead of letters...

		cin >> keypress; //collect keypress

		switch (keypress) {
			case 1: randomizer();
			case 2:;
			case 3: break;
		}
	}
	return 0;
}



/* ------------------------------------------------ FUNCTIONS ------------------------------------------------ */

void intro()
{
	cout << "\n";
	cout << "==========================================================\n";
	cout << "\n";
	cout << "  ________                  _             _              \n";
	cout << "  | ___  /                 (_)           | |             \n";
	cout << "  | |_/ /___ ____ ____ __ _ _ _ __   __ _| |_ ___  _ __  \n";
	cout << "  | __ /_`  / __ / __// _` | | '_ ) / _` | __/ _ )| '__| \n";
	cout << "  | |  | (_ | -__ -__ | (_|| | | | | (_| | || (_) | |    \n";
	cout << "  |_|  (__,_|___/___/ (__, |_|_| |_|(__,_| | (___/|_/    \n";
	cout << "                       __/ |                             \n";
	cout << "                      |____/                             \n";
	cout << "\n";
	cout << "==========================================================\n";
}

void query()
{
	cout << "----------------------------------------------------------\n";
	cout << "\n";
	cout << "  [1] For a random password\n";
	cout << "\n";
	cout << "  [2] To connect to AD\n";
	cout << "\n";
	cout << "  [3] To quit, press\n";
	cout << "\n";
	cout << "----------------------------------------------------------\n";
	cout << "\n";
}

void randomizer()
{
	string passpart1[6] = {"Spring","Summer","Autumn","Winter","Rainy","Sunny"};
	string passpart2[6] = {"Spring","Summer","Autumn","Winter","Times","Season"};
	int passpart3;

	
	passpart3 = rand() % 99 + 10;
	srand(time(NULL));
	int randpasspart1 = rand() % 6;
	srand(time(NULL)); 
	int randpasspart2 = rand() % 6;
	

	cout << "This is the newly generated password!!:\n";
	cout << passpart1[randpasspart1];
	cout << passpart2[randpasspart2];
	cout << passpart3;
	cout << "\n";
	cout << "\n";
}

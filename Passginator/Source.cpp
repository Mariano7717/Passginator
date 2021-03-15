/* ------------------------------------------------ HEADER ------------------------------------------------ */
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;



/* ------------------------------------------------ MAIN ------------------------------------------------ */
int main()
{
	//functions
	void intro();
	void randomizer();

	//queue
	intro();

	
	///* Woorks....IF
	//Initialize and collect keyboard variable
	string keypress;
	cin >> keypress;
	if (keypress == "R" )
	{
		cout << "inside if\n";
		randomizer();
		cout << "\n";
	}
	else if (keypress == "r" )
	{
		cout << "inside elseif\n";
		randomizer();
		cout << "\n";
	}
	else if (keypress == "q" )
	{
		cout << "inside elseif\n";
		randomizer();
		cout << "\n";
	}
	else if (keypress == "Q" )
	{
		cout << "inside elseif\n";
		randomizer();
		cout << "\n";
	}
	else
	{
		cout << "Start again\n\n";
		
	}
	//*/
	
	
	/*
	* Doesnt work
	* 
	if (GetKeyState('R') & 0x8000)
	//Check if high-order bit is set (1 << 15)

	{
		randomizer();
	}
	*/

	//to be reviewed
	/*switch (2) {
		case keypress == R :
			randomizer();
		case keypress == M :
			;
		default:
			break;
	}*/

}



/* ------------------------------------------------ FUNCTIONS ------------------------------------------------ */
void intro()
{
	cout << "\n";
	cout << "  Welcome to Passginator!\n";
	cout << "\n";
	cout << "  If you want a random password, press [R]\n";
	cout << "\n";
}

void randomizer()
{
	//pass parts
	string passpart1[6] = {"Spring","Summer","Autumn","Winter","Rainy","Sunny"};
	string passpart2[6] = {"Spring","Summer","Autumn","Winter","Times","Season"};
	int passpart3 = rand() % 99 + 10;

	int randpasspart1 = rand() % 6;
	int randpasspart2 = rand() % 6;

	cout << "This is the newly generated password!!:\n";
	cout << passpart1[randpasspart1];
	cout << passpart2[randpasspart2];
	cout << passpart3;
}

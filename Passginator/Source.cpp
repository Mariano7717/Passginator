/* ----------------------------------- HEADER ----------------------------------- */
#include <iostream>
#include <stdlib.h>
using namespace std;



/* ----------------------------------- MAIN ----------------------------------- */
int main()
{
	//functions
	void intro();
	void randomizer();

	//queue
	intro();
	randomizer();
}



/* ----------------------------------- FUNCTIONS ----------------------------------- */
void intro()
{
	cout << "\n";
	cout << "  Welcome to Passginator!\n";
	cout << "\n";
	cout << "  If you want a random password, please press R\n";
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

	cout << passpart1[randpasspart1];
	cout << passpart2[randpasspart2];
	cout << passpart3;
}

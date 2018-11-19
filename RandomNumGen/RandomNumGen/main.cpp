#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int x = 0, y = 12;

void Randit()
{
	srand((unsigned)time(0));		// Uses a Seed to create randomness in numbers.
	while (x < y)
	{
		int random = rand();		// Creates the random function
		cout << random << endl;		// Creates a random number and returns to a new line.
		x++;						// Increases X until X is either equal or greater to Y. ( this happens 12 times)
	}
}

int main()
{
	cout << "Please enter the amount of times you want to show a random number.\n";
	cin >> y;

	Randit();						// Calls the function of Randit
	system("pause");				// Stops the program from ending
	cin.get();						// Waits for an input to end the program.
}
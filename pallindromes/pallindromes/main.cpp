#include <iostream>		// Allows the use of Cout and Cin without the use of std::cout etc.
#include <string>		// Allows the use of strings. (cannot use space marks though)
#include <algorithm>
using namespace std;

int main() 
{
	// Pallindrome 
	string _getword = ""; // sets the variable 
	char response[5];
	cout << "please enter a word ";
	cin >> _getword;

	// This checks if the word is a pallindrome.
	if (_getword == string(_getword.rbegin(), (_getword.rend())))
	{
		reverse(_getword.begin(), _getword.end());
		cout << _getword << " is a pallindrome" << endl;
	}
	else // Otherwise, its not a pallindrome.
	{
		cout << _getword << " is not a pallindrome" << endl;
	}

	cout << "would you like to try another word? Y/N" << endl;
	if (response == "y")
	{	

	}

	system("pause");
	cin.get();
}
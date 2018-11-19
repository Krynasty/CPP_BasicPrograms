#include <iostream>		// Allows the use of Cout and Cin without the use of std::cout etc.
#include <string>		// Allows the use of strings. (cannot use space marks though)
#include<algorithm>
using namespace std;

int main() {
// Reverse a string code project 2.
	string _getword = ""; // sets the variable 

	cout << "please enter a word ";
	cin >> _getword;
	reverse(_getword.begin(), _getword.end());
	cout << _getword << endl;

	system("pause");
	cin.get();
}
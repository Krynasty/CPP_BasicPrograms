#include <iostream>		// Allows the use of Cout and Cin without the use of std::cout etc.
#include <string>		// Allows the use of strings. (cannot use space marks though)
using namespace std;

// Checks if a character is a vowel
bool isVowel(char ch)
{
	ch = toupper(ch); // Makes all characters in a string upper case (To Upper Case)
	return (ch == 'A' ||
		ch == 'E' ||
		ch == 'I' ||
		ch == 'O' ||
		ch == 'U');
}

// Counts the total number of vowels in a string.
int vowelCount(string str, int a)
{
	if (a == 1)
		return isVowel(str[a - 1]);
	return vowelCount(str, a - 1) + isVowel(str[a - 1]);
}

// The main program
int main()
{
	string str = "";

	cout << "Welcome to Hangman, Would you like to play a game?\n\n ";
	cout << "\t[P]lay game\n ";
	cout << "\t[E]xit\n ";
	cin >> str;
	cout << "there are " << vowelCount(str, str.length()) << " Vowels in the word " << str << endl;

	system("pause");
	cin.get();
}
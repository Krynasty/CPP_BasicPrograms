#include <iostream>
#include <fstream> // read write to and from a file.
#include <ios>
#include <string>


using namespace std;


int main()
{
	
// This section creates a file and allows the user to make a custom name for it. 
	// variables
	string fName = "";
	string texty = ".txt";
	
	ofstream filename;
	
	//File creation
	cout << "please enter a file name ";
	cin >> fName;
	string fNameVar = fName + texty;
	filename.open(fNameVar);					// Creates a new file and opens it.
	cout << "the file " << fNameVar << " has been created" << endl;	// Sends a message to the console to say the file has been created.
	filename.close();							// Closes the file.
	
	//Stops the program from ending. 
	system("pause");
	cin.get();
}
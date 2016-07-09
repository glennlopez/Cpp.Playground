#include <iostream>
#include <cctype>
#include <string>
using namespace std;

//a simple implementation of isalpha to check if a string contains a numeric value

/*
	true if alphabetic:
	a-z or A-Z

	isalpha('x') // true
	isalpha('6') // false
	isalpha('!') // false
*/

int main(){

	string myString = "?";
	bool hasNum = 0;

	//enter name
	cout << "Enter name: ";
	getline(cin, myString);

	cout << myString << endl;

	//check if name has numbers
	for(int i = 0; i < myString.length(); i++){

	}


	//password has numbers:

	//password has no numbers:


	cout << endl;
	return 0;
}

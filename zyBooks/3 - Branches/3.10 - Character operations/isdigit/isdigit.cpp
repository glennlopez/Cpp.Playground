#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//	true if digit: 0-9.

/*
	isdigit('x') // false
	isdigit('6') // true
*/

int main(){

	string myString_1 = "?";
	bool hasDigit = 0;

	//ask for username
	cout << "Enter name: ";
	getline(cin, myString_1);

	//check username for numbers
	for(unsigned int i = 0; i < myString_1.length(); i++){
		hasDigit = hasDigit + isdigit(myString_1.at(i));
	}

	//display output
	if(hasDigit){ //FIXME - still giving hasDigit = 1 when it doesnt
		cout << "Error: use only letters." << endl;
	}
	else{
		cout << "Welcome, " << myString_1 << endl;
	}

	cout << endl;
	return 0;
}

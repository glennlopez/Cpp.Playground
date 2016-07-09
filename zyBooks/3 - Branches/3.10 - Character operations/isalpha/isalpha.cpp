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
	string myString_1 = "?";
	bool hasAlpha = 0;
	bool isSame = 0;

	//enter name
	cout << "Enter passcode: ";
	getline(cin, myString);

	//check if name has numbers
	for(unsigned int i = 0; i < myString.length(); i++){
		hasAlpha = hasAlpha + isalpha(myString.at(i));
	}

	//next procedure
	if(hasAlpha == 0){
		cout << "Re-type passcode: ";
		getline(cin, myString_1);
	}
	else{
		cout << "Error: Passcode has letters!" << endl;
	}

	//if passcode is intended passcode
	if(myString != myString_1){
		cout << "Error: Previous passcode did not match, try again!" << endl;
	}
	else{
		cout << "Your password is set: " << myString << endl;
	}


	cout << endl;
	return 0;
}

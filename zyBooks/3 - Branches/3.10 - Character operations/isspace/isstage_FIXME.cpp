#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//true if whitespace.

/*
	isspace(' ')  // true
	isspace('\n') // true
	isspace('x')  // false
*/

int main(){

	string myString_1 = "?";
	bool hasSpace = 0;

	//ask for username
	cout << "Enter a username: ";
	getline(cin, myString_1);

	//check string for spaces
	for(unsigned int i = 0; i < myString_1.length(); i++){
		hasSpace = hasSpace + myString_1.at(i);
	}


	//output stream the string
	if(hasSpace){
		cout << "Error: username has spaces!" << endl;
	}
	else{
		cout << "Welcome, " << myString_1 << endl;
	}

	cout << endl;
	return 0;
}

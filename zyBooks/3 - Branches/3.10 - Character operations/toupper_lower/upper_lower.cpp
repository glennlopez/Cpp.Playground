//have the user chose to upper or lowercase all letters in the string

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
	toupper('a')  // A
	toupper('A')  // A
	toupper('3')  // 3

	tolower('A')  // a
	tolower('a')  // a
	tolower('3')  // 3

	common noob issues:
	just typing toupper(myString.at(1));
	this doesnt do anything lol, ask yourself where the toupper(myString.at(1)) is bieng assigned to
*/


int main(){

	string myString = "???";
	unsigned int i;
	char uChoice = '?';
	bool upper = 0;


	cout << "Type anything: ";
	getline(cin, myString);

	cout << "[u]pper case or [l]ower case everything (u/l): ";
	cin >> uChoice;

	if(uChoice == 'u'){
		upper = 1;
	}
	else{
		upper = 0;
	}

	//convert string choices
	if(upper == 1){
		for(i = 0; i < myString.length(); i++){
			myString.at(i) = toupper(myString.at(i));
		}
	}
	else{
		for(i = 0; i < myString.length(); i++){
			myString.at(i) = tolower(myString.at(i));
		}
	}

	cout << myString;


	cout << endl;
	return 0;
}

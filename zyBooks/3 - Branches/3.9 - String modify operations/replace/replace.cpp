#include <iostream>
#include <string>
using namespace std;

//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/3/section/9

/*
	Replaces characters at indices indx
	to indx+num with a copy of subStr.
	replace(indx, num, subStr)

	userText is "You have many gifts"
	userText.replace(9, 4, "a plethora of");
	Now "You have a plethora of gifts"
*/

int main(){

	string charName;
	string myString = "Hi, my name is roxan, how are you doing?";

	cout << "Enter your name: ";
	getline(cin, charName);

	myString.replace(15, 5, charName);

	cout << myString << endl;

	cout << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/3/section/9

/*
	Returns a new string having str1 with str2 appended.
	str1 may be a string variable or string literal (or a character array variable). Likewise for str2. One of str1 or str2 (not both) may be a character.
*/

int main(){

	string myString = "this is the first string";
	cout << myString << ": " << myString.length() << endl;

	myString.resize(myString.length() - 6);
	cout << myString << ": " << myString.length() << endl;


	cout << endl;
	return 0;
}

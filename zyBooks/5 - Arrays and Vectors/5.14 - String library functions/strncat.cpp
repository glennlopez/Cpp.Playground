using namespace std;
#include <iostream>
#include <cstring>

/*
	strncat(destStr, sourceStr, numChars)
	Copies up to numChars characters to destStr's end, then appends null character.
*/

int main(){

	cout << endl;
	char origStr[] = "This is the original.";
	char newStr[30] = "New str.";

	cout << "origStr: " << origStr << endl;
	cout << "newStr: " << newStr << endl;

	cout << endl;
	strncat(newStr, origStr, 3);
	cout << "after strncat(newStr, origStr, 3).." << endl;
	cout << endl;

	cout << "origStr: " << origStr << endl;
	cout << "newStr: " << newStr << endl;


	cout << endl;
	return 0;
}

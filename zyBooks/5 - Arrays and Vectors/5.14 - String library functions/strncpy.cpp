#include <iostream>
#include <cstring>
using namespace std;

/*
	strncpy(destStr, sourceStr, numChars)
	Copies up to numChars characters.
*/

int main(){

	char originalString[] = "This is a string for testing.";
	char newString[sizeof(originalString) -1] = ""; //set newString to size of originalString

	cout << "originalString: " << originalString << endl;
	cout << "newString: " << newString << endl;


	cout << "...after copy..." << endl;

	cout << endl;
	return 0;
}

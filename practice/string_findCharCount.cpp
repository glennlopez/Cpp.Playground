#include <iostream>
#include <string>

//count the number of occurence a character shows up in a string

using namespace std;

int main(){

	string myString = "say cheese";
	char findChar = '?';
	int indexHolder = 0;
	int maxIndex = myString.length();

	cout << "myString = " << myString << endl;

	cout << "Type in a letter to count: ";
	cin >> findChar;
	cout << "---------------------------" << endl;

	if( (myString.find(findChar) >= 0) && (myString.find(findChar) < maxIndex) ){
		indexHolder = indexHolder + myString.find(findChar);
	}

	//-- start debug code
	cout << "Location: " << myString.find(findChar) << endl;
	cout << "String Length: " << maxIndex << endl;
	cout << "New Index: " << indexHolder << endl;
	//-- end of debug



	cout << endl;
	return 0;
}

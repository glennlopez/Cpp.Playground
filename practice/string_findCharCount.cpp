#include <iostream>
#include <string>

//count the number of occurence a character shows up in a string

using namespace std;

int main(){

	string myString = "say cheese";
	char findChar = '?';
	int indexHolder = -1;
	int maxIndex = myString.length();

	cout << "myString: " << myString << endl;

	cout << "Type in a letter to count: ";
	cin >> findChar;

	if( (myString.find(findChar) >= 0) && (myString.find(findChar) < maxIndex) ){
		cout << "//branch triggered" << endl;
	}

	//-- start debug code
	cout << myString.find(findChar);
	cout << endl;
	cout << maxIndex;
	//-- end of debug



	cout << endl;
	return 0;
}

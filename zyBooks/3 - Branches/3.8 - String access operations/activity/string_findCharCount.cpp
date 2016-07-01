#include <iostream>
#include <string>

//count the number of occurence a character shows up in a string

using namespace std;

int main(){

	string myString = "say cheese";
	char findChar = '?';
	int indexHolder = 0;

	cout << "myString: " << myString << endl;

	cout << "Type in a letter to count: ";
	cin >> findChar;

	if(myString.find(findChar) > 0){
		cout << "testing";
	}



	cout << endl;
	return 0;
}

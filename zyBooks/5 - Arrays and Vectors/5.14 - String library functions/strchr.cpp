#include <iostream>
#include <cstring>
using namespace std;

/*
	strchr(sourceStr, searchChar)

	Returns NULL if searchChar does not exist in sourceStr. (Else, returns address of first occurrence, discussed elsewhere).
	NULL is defined in the cstring library.
*/

int main(){

	char myString[30] = "?";

	cout << "Enter your first name: ";
	cin >> myString;

	if( (strchr(myString, 'n') != NULL) || (strchr(myString, 'N') != NULL ) ){
		cout << "Your name contains an 'n'" << endl;
	}
	else{
		cout << "Your name does not contain an 'n'" << endl;
	}

	cout<< endl;
	return 0;
}

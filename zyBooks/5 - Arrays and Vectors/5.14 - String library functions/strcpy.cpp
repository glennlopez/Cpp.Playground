#include <iostream>
#include <cstring>
using namespace std;

/*
	strcpy(destStr, sourceStr)
	Copies sourceStr (up to and including null character) to destStr.
*/

int main(){

	char originalString[] = "This is a test.";
	char copyString[20] = "new str";	//<-- the size cannot be less than original string

	cout << endl;
	cout << "Length of original string: " << sizeof(originalString) << endl;
	cout << "Length of copyString: " << sizeof(copyString) << endl;
	cout << "Contents of copyString: " << copyString << endl;
	cout << endl;


	strcpy(copyString, originalString);

	cout << "After copying to copyString[]" << endl;
	cout << "Length of copyString: " << sizeof(copyString) << endl;
	cout << "Contents of copyString: " << copyString << endl;


	cout << endl;
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

/*
	strcat(destStr, sourceStr)
	Copies sourceStr (up to and including null character) to end of destStr (starting at destStr's null character).
*/

int main(){

	char originalStr[] = "This is the original.";
	char newStr[] = "This is the new.";

	cout << "Original: " << originalStr << endl;
	cout << "New: " << newStr << endl;

	cout << endl;
	strcat(originalStr, newStr);
	cout << "after strcat..." << endl;
	cout << endl;

	cout << "Original: " << originalStr << endl;
	cout << "New: " << newStr << endl;


	cout << endl;
	return 0;
}

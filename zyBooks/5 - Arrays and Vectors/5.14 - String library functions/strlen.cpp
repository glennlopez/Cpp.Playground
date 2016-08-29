#include <iostream>
#include <cstring>
using namespace std;

/*
	size_t strlen(sourceStr)

	Returns number of characters in sourceStr up to, but not including, first null character. size_t is integer type.
*/

int main(){

	char myString[] = "Glenn";

	cout << endl;
	cout << "Contents of myString: " << myString << endl;
	cout << "Number of characters in myString: " << strlen(myString) << endl;



	cout << endl;
	return 0;
}

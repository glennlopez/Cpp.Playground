#include <iostream>
using namespace std;

int main(){

	char myString[] = "abcdefghij";

	cout << "cout << myString: " << myString << endl;
	cout << "sizeof(myString[1]): " << sizeof(myString[1]) << endl;
	cout << "sizeof(myString): " << sizeof(myString) << endl;

	cout << endl;
	return 0;
}

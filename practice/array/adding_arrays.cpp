#include <iostream>
using namespace std;

int main(){

	const unsigned int MAXSIZE = 128;
	int myString[MAXSIZE] = {0,1,2,3,4,5,6,7,8,9};

	cout << sizeof(myString) << endl;
	cout << myString[1] << endl;

	cout << endl;
	return 0;
}

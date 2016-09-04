#include <iostream>
using namespace std;

int main(){

	int myString[] = {0,1,2,3,4,5,6,7,8,9}; // each number is 4bit in size
	unsigned int i, total;

	//NOTE THE SIZE OF ARRAY: notice how myString[1] is size 4, and myString is size 40: 4 * 10 = 40
	cout << "cout << myString: " << myString << endl;	//gives the memory ID if array is type int
	cout << "sizeof(myString[1]): " << sizeof(myString[1]) << endl;
	cout << "sizeof(myString): " << sizeof(myString) << endl;
	cout << "real size of myString: " << (sizeof(myString)/4) << endl;

	//adding int arrays
	total = myString[0];
	for(i = 1; i < sizeof(myString)/4; i++){
		total += myString[i];
	}

	cout << "Sum of int inside myString array: " << total << endl;

	cout << endl;
	return 0;
}

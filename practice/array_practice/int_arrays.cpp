#include <iostream>
using namespace std;

int main(){

	int myString[] = {0,1,2,3,4,5,6,7,8,9};
	unsigned int i, total;

	//NOTE THE SIZE OF ARRAY: notice how myString[1] is size 4, and myString is size 40: 4 * 10 = 40
	cout << "sizeof(myString[1]): " << sizeof(myString[1]) << endl;
	cout << "sizeof(myString): " << sizeof(myString) << endl;

	//adding int arrays
	total = myString[0];
	for(i = 1; i < 10; i++){
		total += myString[i];
	}

	cout << "Sum of int inside myString array: " << total << endl;

	cout << endl;
	return 0;
}

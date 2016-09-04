#include <iostream>
using namespace std;

int main(){

	int A1[] = {0,1,2,3,4,5,6,7,8,9}; // each number is 4bit in size
	unsigned int i, total;

	cout << endl;

	//NOTE THE SIZE OF ARRAY: notice how A1[1] is size 4, and A1 is size 40: 4 * 10 = 40
	cout << "cout << A1: " << A1 << endl;	//gives the memory ID if array is type int
	cout << "sizeof(A1[1]): " << sizeof(A1[1]) << endl;
	cout << "sizeof(A1): " << sizeof(A1) << endl;
	cout << "real size of A1: " << (sizeof(A1)/4) << endl;

	//adding int arrays
	total = A1[0];
	for(i = 1; i < sizeof(A1)/4; i++){
		total += A1[i];
	}

	cout << "Sum of int inside A1 array: " << total << endl;

	cout << endl;
	return 0;
}

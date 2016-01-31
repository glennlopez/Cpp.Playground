#include <iostream>
using namespace std;


int main(){
	int myNum = 0;
	int* myPtr = 0;
	int myIsolatedNum = 99;

	cout << "Enter any number: ";
	cin >> myNum;

	myPtr = &myNum;

	cout << "myPtr: " << *myPtr;

	myPtr = &myIsolatedNum;
	cout << endl;

	cout << "myPtr: " << *myPtr;


	cout << endl;
	return 0;
}

#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {
	/* code */
	int numA = 0;
	int numB = 0;

	cout << "First non-negative Number: ";
	cin >> numA;

	cout << "Second non-negative Number: ";
	cin >> numB;

	while (numA != numB){
		if (numA < numB){
			numB = numB - numA;
		}
		else{
			numA = numA - numB;
		}
	}

	cout << "GCD: " << numA << endl;

	//debug
	//cout << numA << " " << numB << endl;


	return 0;
}

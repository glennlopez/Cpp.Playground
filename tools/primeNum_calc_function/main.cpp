#include <iostream>
#include "calcPrime.cpp"
using namespace std;

/*
	WITHOUT USING MATH.H (using Eulers Theorym)
	This is a simple way of calculating if a number is prime or not
	using 6n-1 and 6n+1. It is only ~90% acurate and you cannot test
	primes below 7. Examples of inacuracies are 25, 917 etc.. these
	will register as a prime number (they are not).

	Formula is: 6n-1 = 'your number' || 6n+1 = 'your number'
	To use: #include calcPrime.cpp and use calcPrime(int);

	If a number is a prime, it will return a 1
	If a number is NOT prime, it will return a 0
*/

int main(){
	int param;

	cout << "Enter a number: ";
	cin >> param;
	cout << endl;

	//example for using calcPrime.cpp
	cout << param << " returns a " << calcPrime(param) << endl;
	if(calcPrime(param) == 1){
		cout << param << " is a prime number." << endl;
	}
	else{
		cout << param << " is NOT prime." << endl;
	}

	cout << endl;
	return 0;
}

/*
	USED FOR TESTING THE PRIME NUMBER CALCUATOR
	(This algorythm will list all the prime numbers a user defines:
		- Incriment an int datatype until the condition set by the user is met
			- while in the loop check if the current number is prime
				- push_back the curent number in a vector if it is a prime)
*/

#include <iostream>
#include <vector>
//#include "isPrime.cpp"
using namespace std;

void listPrimes(int param){

	int num = param;
	vector<int> primes(0);

	int storedPrimes = 0;
	int i;

	//store prime numbers in a vactor
	while(num != storedPrimes){			//<-- loops until conditions are met
		i++;
		if(isPrime(i) == 1){				//<-- store the number in a vector if its a prime
			primes.push_back(i);
			storedPrimes++;
		}
	}

	//print vector elements
	for(unsigned int i = 0; i < primes.size(); i++){
		cout << primes.at(i) << " ";
	}
}

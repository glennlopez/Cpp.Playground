#include <iostream>
#include <vector>
//#include "calcPrime.cpp"					//<-- required for telling if a num is prime
using namespace std;

//list x prime numbers
void listPrimes(int num){
	vector<int> primes(0);

	int storedPrimes = 0;
	int i;

	//store prime numbers in a vactor
	while(num != storedPrimes){			//<-- loops until conditions are met
		i++;
		if(calcPrime(i) == 1){				//<-- store the number in a vector if its a prime
			primes.push_back(i);
			storedPrimes++;
		}
	}

	//print vector elements
	for(unsigned int i = 0; i < primes.size(); i++){
		cout << primes.at(i) << " ";
	}
}

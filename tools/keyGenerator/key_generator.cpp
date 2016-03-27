#include <iostream>
#include <vector>
#include "isPrime.cpp"
using namespace std;

//generatePrimes(ammount, starting-at);
void generatePrimes(unsigned int param, unsigned long long range){

	int num = param;
	vector<int> primes(0);

	int storedPrimes = 0;
	int i = range;

	//store prime numbers in a vector
	while(num != storedPrimes){			//<-- loops until conditions are met
		i++;
		if(isPrime(i, (range/5)) == 1){				//<-- store the number in a vector if its a prime
			primes.push_back(i);
			storedPrimes++;
		}
	}

	//print vector elements
	for(unsigned int i = 0; i < primes.size(); i++){
		cout << primes.at(i) << " ";
	}
}

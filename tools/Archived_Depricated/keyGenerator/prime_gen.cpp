#include <iostream>
#include <vector>
//#include "isPrime.cpp"
using namespace std;

//vector stored prime_generator(vector, ammount, starting-at);
void prime_gen(vector<ull>& primes, unsigned int param, ull range){

	int num = param;

	int storedPrimes = 0;
	int i = range;

	//store prime numbers in a vector
	while(num != storedPrimes){						//<-- loops until conditions are met
		i++;
		if(isPrime(i, (range/5)) == 1){				//<-- store the number in a vector if its a prime
			primes.push_back(i);
			storedPrimes++;
		}
	}
}

//Print vector contents
void prime_gen(vector<ull>& primes){
	//print vector elements
	for(unsigned int i = 0; i < primes.size(); i++){
		cout << primes.at(i) << " ";
	}
	cout << endl;
}

//vector stored prime_generator(vector, ammount, starting-at);
void prime_gen(unsigned int param, ull range){

	int num = param;
	vector<int> primes(0);

	int storedPrimes = 0;
	int i = range;

	//store prime numbers in a vector
	while(num != storedPrimes){						//<-- loops until conditions are met
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



//list primes (un-scoped) - acuracy degrades per size of prime
void prime_gen(unsigned int param){

	int num = param;
	vector<ull> primes(0);

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

#include <iostream>
#include <vector>	//temp
#include "isPrime.cpp"
using namespace std;

/*
	This is a more efficient way of calculating primes
*/



int main(){

/*
	int num;
	cout << "How many primes: ";
	cin >> num;

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
*/










	int usrNum;
	cout << "Is it prime: ";
	cin >> usrNum;

	cout << "Results: " << isPrime(usrNum) << endl;



	cout << endl;
	return 0;
}

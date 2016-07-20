#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/*
	Problem: https://projecteuler.net/problem=3
	The prime factors of 13195 are 5, 7, 13 and 29.
	ie: 5 * 7 * 13 * 29
	What is the largest prime factor of the number 600851475143 ?
*/

int main(){
	long long int targetNum, primeLimit;
	unsigned int i;
	vector<int> primeNumbers;
	vector<int> primeFactors;

	targetNum = 13195;					//target number to find prime factors of
	primeLimit = sqrt(targetNum);		//sets the maximum amount of prime numbers to generate

	//push known prime numbers to prime number vector
	primeNumbers.push_back(2);
	primeNumbers.push_back(3);
	primeNumbers.push_back(5);
	primeNumbers.push_back(7);
	primeNumbers.push_back(11);
	primeNumbers.push_back(13);
	primeNumbers.push_back(17);

	//generate prime numbers to test
	for(i = 2; i < primeLimit; i++){
		//if divisable by these numbers, its not a prime
		if( (i % 2) && (i % 3) && (i % 5) && (i % 7) && (i % 11) && (i % 13) && (i % 17)){
			primeNumbers.push_back(i);
		}
	}

	//test target number with prime factors generated
	for(i = 0; i < primeNumbers.size(); i++){
		if( i % 2 ){	//compare

		}
	}

	//debug output
	cout << endl;
	cout << "Prime Limit: " << primeLimit;
	cout << endl;

	for(i = 0; i < primeNumbers.size(); i++){
		cout << primeNumbers.at(i) << " ";
	}

	cout << endl;
	return 0;
}

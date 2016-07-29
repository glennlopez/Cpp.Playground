#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//NOTE: I used this to solve problem 3 - unfortunately, the code still requires some work. It works for smaller numbers but not larger numbers (20% error for testing primes)

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

	targetNum = 600851475143;			//target number to find prime factors of
	primeLimit = sqrt(targetNum);		//sets the maximum amount of prime numbers to generate

	//push known prime numbers to prime number vector
	primeNumbers.push_back(2);
	primeNumbers.push_back(3);
	primeNumbers.push_back(5);
	primeNumbers.push_back(7);
	primeNumbers.push_back(11);
	primeNumbers.push_back(13);
	primeNumbers.push_back(17);
	primeNumbers.push_back(19);
	primeNumbers.push_back(23);
	primeNumbers.push_back(29);
	primeNumbers.push_back(31);

	//generate more prime numbers up to the square root of the target number
	for(i = 2; i < primeLimit; i++){
		//remove anything divisible by these numbers to speed up the prime number generator
		if( (i % 2) && (i % 3) && (i % 5) && (i % 7) && (i % 11) && (i % 13) && (i % 17) && (i % 19) && (i % 23) && (i % 29) && (i % 31) ){
			primeNumbers.push_back(i);
		}
	}

	//test target number with list of primes to see which divides evenly
	for(i = 0; i < primeNumbers.size(); i++){


	//Prime test #1: Trial by division
	if(!(targetNum % primeNumbers.at(i))){
		primeFactors.push_back(primeNumbers.at(i));
		}
	}

	//Prime test #2: Fermats test

	//debug output
	cout << endl;
	cout << "Prime Limit: " << primeLimit;
	cout << endl;

	for(i = 0; i < primeFactors.size(); i++){
		cout << primeFactors.at(i) << " ";
	}

	cout << endl;
	return 0;
}

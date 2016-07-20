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
	long long targetNum, primeLimit;

	targetNum = 13195;
	primeLimit = sqrt(targetNum);

	cout << primeLimit;

	cout << endl;
	return 0;
}

#include <iostream>
#include "FindFactors.cpp"
//#include "listPrime.cpp"
using namespace std;

int main(){

	long long privateKey = 127157243331463;	//product of 2 prime numbers
	long long publicKey = 22552856; 				//sum of 2 prime numbrs belonging to semiprime



	calc_primeFactor(privateKey);



	//listPrimes(900000);



	return 0;
}

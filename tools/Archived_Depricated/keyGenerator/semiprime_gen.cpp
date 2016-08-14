#include "rNum_gen.cpp"

ull semiprime_gen(vector<ull>& primes, unsigned int range, ull startingPoint){

	//random number generator
	ull q = rNum_gen(range, (startingPoint * rNum_gen(300, 700)/9));
	ull k = rNum_gen(range, (startingPoint * rNum_gen(500, 200)/8));

	//variables for storage
	ull semiprime;
	prime_gen(primes, 1, q);	//stored in vector outside of function
	prime_gen(primes, 1, k); 	//stored in vector outside of function

	semiprime = primes.at(0) * primes.at(1);

	return semiprime;
}

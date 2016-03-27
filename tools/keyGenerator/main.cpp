/*
	since q = 3 and k = 5...
	if n is (3 * 5) = 15
	and E is (3 + 5) = 8

	then E is the Key to n when (q * k) = 2910875234224437349
*/

//dependencies
#include <iostream>
#include <vector>
#include "main.h"
#include "isPrime.cpp"

//functional libs
#include "find_primeFactor.cpp"
#include "key_check.cpp"
#include "prime_gen.cpp"
using namespace std;

int main(){

	//store vectors here
	vector<ull> test_set(0);

	//calc_primeFactor(2910875234224437349);
	prime_gen(test_set, 1, 674353452323423);
	prime_gen(test_set);
	//key_check(3418108390,2910875234224437349);		//key_check(prublickey, privatekey);
	//key_solutions(3418108390,2910875234224437349);		//key_check(prublickey, privatekey);


	//..
	//generatePrimes(3, 1609099099);	//generatePrimes(ammount, starting-at)
	//cout << endl;
	//generatePrimes(3, 1809009099);	//generatePrimes(ammount, starting-at)

	return 0;
}

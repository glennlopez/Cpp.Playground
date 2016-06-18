/*
	since q = 3 and k = 5...
	if n is (3 * 5) = 15
	and E is (3 + 5) = 8

	then E is the Key to n when (q * k) = 2910875234224437349
*/

//http://www.numberempire.com/numberfactorizer.php

//system libs
#include <iostream>
#include <vector>

//dependencies
#include "main.h"
#include "isPrime.cpp"

//functional libs
#include "key_gen.cpp"
#include "key_check.cpp"
#include "prime_gen.cpp"
#include "semiprime_gen.cpp"
//#include "rNum_gen.cpp"
using namespace std;



int main(){

	//store primes here
	vector<ull> test_set(0);

	//key_gen(semiprime_gen(test_set, 100000, 100000));

	//key_check(ull publicKey, ull privateKey)


	//cout << semiprime_gen(test_set, 1000, 60000) << endl;

	//prime_gen(test_set, 1, 674353452323423);

	//key_check(3418108390,2910875234224437349);		//key_check(prublickey, privatekey);
	key_solutions(3418108390,2910875234224437349);		//key_check(prublickey, privatekey);


	//..
	//generatePrimes(3, 1609099099);	//generatePrimes(ammount, starting-at)
	//cout << endl;
	//generatePrimes(3, 1809009099);	//generatePrimes(ammount, starting-at)


	/*
	prime_gen(test_set, 1, 940970);
	prime_gen(test_set, 1, 765800);
	cout << semiprime_gen(test_set) << endl;
	prime_gen(test_set);
	*/


	//--- new function for generating random semiprime numbers --/////////////////////////
	//cout << rNum_gen(5000, 1000 * rNum_gen(300, 700)/9) << endl;
	//cout << rNum_gen(5000, 1000 * rNum_gen(500, 200)/8) << endl;


	return 0;
}

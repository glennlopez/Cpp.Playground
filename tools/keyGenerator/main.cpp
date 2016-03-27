/*
	since q = 3 and k = 5...
	if n is (3 * 5) = 15
	and E is (3 + 5) = 8

	then E is the Key to n when (q * k) = 2910875234224437349
*/

#include <iostream>
#include "calc_primeFactor.cpp"
//#include "key_check.cpp"
//#include "listPrime.cpp"
//#include "key_generator.cpp"
using namespace std;

int main(){
	cout << "calculating...";
	cout << endl;

	calc_primeFactor(2910875234224437349);
	//listPrimes(900000);
	//key_check(3418108390);
	//key_check(13592450);


	//..
	//generatePrimes(3, 1609099099);	//generatePrimes(ammount, starting-at)
	//cout << endl;
	//generatePrimes(3, 1809009099);	//generatePrimes(ammount, starting-at)

	return 0;
}

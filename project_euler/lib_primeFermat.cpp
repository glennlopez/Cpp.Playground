#include <iostream>
#include <cmath>
using namespace std;

/*
	Fermats Primal Test:
	is "P" prime?

	using: (a^P - a)

	P = number to test
	a = all of the numbers between 1 and P (these all must be divisible by P to pass)


	example (known prime): P = 5
	1^5 - 1 = 0
	2^5 - 2 = (32 - 2) = (30 /5) = 6
	3^5 - 3 = (243 - 3) = (240 /5) = 48
	4^5 - 4 = (1024 - 4) = (1020 /5) =  204
	5^5 - 5 = (3125 - 5) = (3120 /5) = 624

	Notice: All the above are divisible by P (P = 5)
	That is to say, when divided by P, there are no remainders
	So 5 is a prime Number.

	example (known non-prime): P = 4
	1^4 - 1 = 0
	2^4 - 2 = (16 - 2) = 14 /4 = 3.5 <--- TEST FAILED! There is a remaider
	3^4 - 3 = TEST NOT REQUIRED
	4^4 - 4 = TEST NOT REQUIRED

	Pseudo Code Steps:
	1) x = i^P - i
	2) x = x - i
	3) x = x % P
	4) Test fail if x >= 1
	5) Test pass if x = 0 (if x % P returns no remainders)
	6) Loop steps 1 - 3 until i == P

	use: pow(base, exponent) under cmath

*/

int main(){

	//FIXME: convert this into a function lib after  --> long long isPrime(long long P);

	cout << endl;
	return 0;
}

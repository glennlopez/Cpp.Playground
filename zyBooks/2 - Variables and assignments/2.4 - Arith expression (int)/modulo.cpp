#include <iostream>
using namespace std;

/* HOW MODULO WORKS:
*	@ = apples
*	# = selected apples
*
*	5 % 3 = @@@@@ = ###@@ = 2 remainder
*	10 % 3 = @@@@@ @@@@@ = ##### ####@ = 1 remainder
*/

int main() {
	int num = 0;
	int den = 0;

	cout << "Numerator: ";
	cin >> num;

	cout << "Denominator: ";
	cin >> den;

	int ans = num % den;
	cout << "Answer: " << ans << endl;

	return 0;
}

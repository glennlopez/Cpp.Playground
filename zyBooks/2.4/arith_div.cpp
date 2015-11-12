#include <iostream>
using namespace std;

// NOTES
// Try n/0, 1/3, letter and see what happens
// If you are wondering why you are not getting the correct answer
// thats because you are missing modulo operator (%)
// 1/2 performs an integer division so the expression evaluates to 0

int main() {
	/*
	Integer only stores whole value numbers.
	Change 'int' to 'float' to get rid of floating point exceptions
	*/
	int num = 0;
	int den = 0;

	cout << "Numerator: ";
	cin >> num;

	cout << "Denominator: ";
	cin >> den;

	int ans = num / den;
	cout << "Answer: " << ans << endl;;

	return 0;
}

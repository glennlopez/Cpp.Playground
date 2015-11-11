#include <iostream>
using namespace std;

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

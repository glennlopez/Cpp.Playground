#include <iostream>
#include "calcGCF.cpp"
using namespace std;

/* Without using math.h we can find the GCF using between 2 numbers
	Euclids algorythm:

		Replace the larger number with the diffrance between the two
		numbers until both numbers are equal, to reveal its GCF.

	#include calcGCF.cpp into your main.cpp and call the function "gcf()"
	to calculate the GCF between two numbers.
*/

int main(){
	double x, y;

	cout << "First Number: ";
	cin >> x;

	cout << "Second Number: ";
	cin >> y;

	cout << "GCF of " << x << " and " << y << ": ";
	cout << gcf(x, y) << endl;

	cout << endl;
	return 0;
}

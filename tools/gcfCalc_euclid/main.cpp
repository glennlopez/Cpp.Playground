#include <iostream>
#include <vector>
#include "calcGCF.cpp"
#include "calcFactorsOf.cpp"
using namespace std;
void test_calcGCF();

/*	How to use:
		#include calcGCF.cpp into your main.cpp and call the function "gcf()"
		to calculate the GCF between two numbers.
*/

int main(){

	//test_calcGCF();		//<-- Try it!
	//gcf(52,12);			//<-- Raw version
	factorsOf(24);			//<-- this function makes use of gfc();

	cout << endl;
	return 0;
}




//** TRY IT FUNCTIONS **//
void test_calcGCF(){
	double x, y;

	cout << "First Number: ";
	cin >> x;

	cout << "Second Number: ";
	cin >> y;

	cout << "GCF of " << x << " and " << y << ": ";
	cout << gcf(x, y) << endl;
}

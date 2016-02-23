#include <iostream>
#include <vector>

//This calculator includes 2 others that makes use of GCF
#include "calcGCF.cpp"				//<-- For calculating GCF
#include "calcLCM.cpp"				//<-- For calculating LCM (uses GCF)
#include "calcFactorsOf.cpp"		//<-- For calculating factors of a number (uses GCF)

void test_gcf();
void test_lcm();
void test_factorsOf();

void common_multiples(int, int);	//for debug

/*	How to use:
		#include calcGCF.cpp into your main.cpp and call the function "gcf()"
		to calculate the GCF between two numbers.

		#include calcFactorsOf.cpp and calcGCF.cpp if you wish to use the function
		for calculating the factors of a number using euclids theorm
*/

int main(){
	using std::cout;
	using std::endl;

	//test_gcf();				//<-- Try it!
	//gcf(52,12);				//<-- Raw format

	test_factorsOf();		//<-- Try it!
	//factorsOf(300);			//<-- Raw format

	//test_lcm();				//<-- Try it!
	//lcm(6, 8);				//<-- Raw format



	//debug function
	//common_multiples(3,4);
	cout << endl;
	return 0;
}




//** TRY IT FUNCTIONS **//
void test_gcf(){
	double x, y;

	cout << "First Number: ";
	cin >> x;

	cout << "Second Number: ";
	cin >> y;

	cout << "GCF of " << x << " and " << y << ": ";
	cout << gcf(x, y) << endl;
}

void test_factorsOf(){
	int x;

	cout << "Number to find factors of: ";
	cin >> x;

	factorsOf(x);
}

void test_lcm(){
	int num1, num2;

	cout << "First Number: ";
	cin >> num1;

	cout << "Second Number: ";
	cin >> num2;

	cout << "LCM of " << num1 << " and " << num2
	<< " is: " << lcm(num1, num2) << endl;
}


//debug functions
void common_multiples(int x, int y){
	int i;

	for(i = 0; i < 20; i++){
		cout << x * i << " ";
	}

	cout << endl;

	for(i = 0; i < 20; i++){
		cout << y * i << " ";
	}
}

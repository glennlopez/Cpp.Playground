#include <iostream>

#include "calcGCF.cpp"				//<-- Used on all the libraries listed below
#include "calcLCM.cpp"				//<-- For calculating LCM (uses GCF)
#include "calcFactorsOf.cpp"		//<-- For calculating factors of a number (uses GCF)
#include "calcPrime.cpp"			//<-- For testing if a number is prime (uses GCF)
#include "listPrimes.cpp"			//<-- For listing x number of prime numbers

//test vectors for built-in functions above
void test_gcf();
void test_lcm();
void test_factorsOf();
void test_calcPrime();
void test_listPrimes();

void common_multiples(int, int);	//for debug

/*	How to use:
		#include any of the above libraries in your main.cpp
		Note: calcGCF.cpp is a common library file used in calcGCF,
		calcFactorsOf, calcPrime, and listPrimes. Be sure to include
		calcGCF.cpp in your main.cpp if you wish to use the other libraries

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

	//test_calcPrime();		//<-- Try it!
	//calcPrime(12);			//<-- Raw format (1 = prime)

	//test_listPrimes();		//Try it!


	//common_multiples(3,4);	//<-- debug function (list all common multiples)
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

void test_calcPrime(){
	int num;

	cout << "Check if this number is prime: ";
	cin >> num;

	if(calcPrime(num) == 1){
		cout << num << " is a prime number." << endl;
	}
	else{
		cout << num << " is not a prime number." << endl;
	}
}

void test_listPrimes(){
	int num;
	cout << "How many primes to list: ";
	cin >> num;

	listPrimes(num);
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

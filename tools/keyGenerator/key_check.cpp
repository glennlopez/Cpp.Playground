/*
	This is a simple biprime product-key validation algorythm
		- Subract a number incremently (i) from the public-key
			- Find the product of [i * (publicKey - 1)] until..
			- ... [i * (publicKey - 1)] == the private-key.

			note: private-key is a product of two large prime numbers
*/
#include <iostream>
#include "isPrime.cpp"
using namespace std;

void key_check(unsigned long long publicKey){

	unsigned long long const privateKey = 2910875234224437349;
	unsigned long long solution, i = 1;
	bool solved = 0;

	int count_solutions = 0; //<-- DEBUG

	do{
		i++;
		solution = publicKey - i;

		//DEBUG: solution list printout
			int test_solution = isPrime(solution);
			int test_i = isPrime(i);

			if(test_i * test_solution){
				cout << i << " + " << solution << " = " << i + solution << " [" << solution * i << "]" << endl;
				count_solutions++;
			}
		//END OF DEBUG: solution list printout

		if(solution * i == privateKey){
			solved = 1;
			cout << "Valid key found!" << endl;

			//DEBUG: print-out
				cout << "Unique Solution: " << i << " + " << solution << endl;
		}
		else if(i == publicKey){
			cout << "Key is invalid." << endl;
			break;
		}
	} while(solved == 0);

	//DEBUG: Counts the number of possible solution
	cout << "TESTED " << count_solutions << " POSSIBLE SOLUTIONS" << endl;

}

#include <iostream>
//#include "isPrime.cpp"
using namespace std;

/*
	This is a simple biprime product-key validation algorythm
		- Subract a number incremently (i) from the public-key
			- Find the product of [i * (publicKey - 1)] until..
			- ... [i * (publicKey - 1)] == the private-key.

			note: private-key is a product of two large prime numbers
*/

//key validation
void key_check(ull publicKey, ull privateKey){

	ull solution, i = 1;
	bool solved = 0;

	do{

		i++;
		solution = publicKey - i;

		if(solution * i == privateKey){
			solved = 1;
			cout << "Public-Key valid!" << endl;

		}

		else if(i == publicKey){
			cout << "Error: Public-Key invalid." << endl;
			break;
		}
		
	} while(solved == 0);

}

//finds all possible solutions for n=p*q
void key_solutions(ull publicKey, ull privateKey){

	ull solution, i = 1;
	bool solved = 0;

	int count_solutions = 0;

	do{
		i++;
		solution = publicKey - i;

		//Solution list printout - slows down the check
			int test_solution = isPrime(solution);
			int test_i = isPrime(i);

			if(test_i * test_solution){
				cout << i << " + " << solution << " = " << i + solution << " [" << solution * i << "]" << endl;
				count_solutions++;
			}

		if(solution * i == privateKey){
			solved = 1;
			cout << "Valid key found!" << endl;

			//Print-out the solution
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

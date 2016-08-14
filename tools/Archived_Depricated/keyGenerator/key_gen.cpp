/*
	This algorythm finds the prime factors of a semiprime number
*/

#include <iostream>
#include <vector>
//#include "isPrime.cpp"
using namespace std;


void key_gen(ull param){

	ull 	user_num = param,
								result_div = 2, result_mod = 2,
								i = 2;
	unsigned short fac_found = 0;
	do{
		i++;
		result_mod = user_num % i;
		result_div = user_num / i;

		if(result_mod < 1){
			int primeDiv = isPrime(result_div);
			int primeI = isPrime(i);
			if((primeDiv + primeI) == 2){
				cout << endl;

				/* WHY THIS ALGORYTHM WORKS FOR MAKING SIMPLE PRODUCT-KEYS:
				 *	Adding together the product of the semiprime number will provide
				 *	a public-key (public solution) without giving out the two prime
				 *	numbers used to generate the private key.
				 *
				 * Since the private-key is a product of two prime numbers a public-key
				 * containing the sum of the two prime numbers that make up the semiprime
				 * number can be given without revealing the unique solution (product of 2 primes).
				 * 	ie: private-key solution = 3 x 7 (both are prime numbers)
				 *			 private-key = 21 (from 3 x 7)
				 *			 public-key = 10 (from 3 + 7)
				 *
				 * Since the number 10 is the public-key 2 solutions exist:
				 *		- 3 + 7 = 10
				 *		- 5 + 5 = 10
				 *		- Only 1 solution is correct (product of 2 primes)
				 *
				 * Larger prime numbers will yeild an increasing ammount of possible solutions.
				 */

				cout << "SemiPrime (private-key): " << param << endl;
				cout << "Unique Solution: " << result_div << " + " << i << endl;
				cout << "Factor Sum (public-key): " << result_div + i << endl;
				fac_found = 1;
			}
			else if(i == user_num){
				cout << "Prime Factors of " << param << " not found!" << endl;
				break;
			}
		}
	}
	while(fac_found == 0);


	cout << endl;

}

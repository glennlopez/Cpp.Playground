/*
	This algorythm will find the prime factors of a semi prime number
*/

#include <iostream>
#include <vector>
#include "isPrime.cpp"
using namespace std;


void calc_primeFactor(unsigned long long param){

	unsigned long long 	user_num = param,
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
				cout << result_div << " + " << i;
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

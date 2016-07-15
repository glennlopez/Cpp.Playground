#include <iostream>
using namespace std;

/*
	Problem: https://projecteuler.net/problem=1
	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

	Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main(){

	unsigned int i, sum, limit;

	sum = 0;
	limit = 1000;

	//find multiples of 3 or 5, if found add to sum variable
	for(i = 1; i < limit; i++){
		if(!(i % 3)){
			sum = sum + i;
		}
		else if(!(i % 5)){
			sum = sum + i;
		}
	}

	cout << "The sum of all the multiples of 3 or 5 below 1000 is: " << sum;

	cout << endl;
	return 0;
}

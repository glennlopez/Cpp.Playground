#include <iostream>
using namespace std;

/*
	https://projecteuler.net/problem=4
	A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

	Find the largest palindrome made from the product of two 3-digit numbers.
*/

int main(){

	int maxVal, ceiling;
	int i, j;

	maxVal = 1000;
	ceiling = (maxVal/2);

	//generate 3-digit products;
	for(i = 99; i <= ceiling; i++){
		for(j = maxVal; j >= ceiling; j--){
			cout << i << " * " << j << " = " << i * j;
			cout << endl;
		}

	}


	cout << endl;
	return 0;
}

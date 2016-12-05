#include <iostream>
using namespace std;

/*
	https://projecteuler.net/problem=5
	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main(){

 	long n = (1*2*3*4*5*6*7*8*9*10)/2;
	int nCount = 0;
	int nTarget = 10;

	while(n > 0){
		int d = 1;
		while(d < 11){
			if((n % d) == 0){
				nCount++;
			}
			d++;
		}

		if(nCount == nTarget){
			cout << n << endl;
		}

		nCount = 0;
		n--;


	}


	cout << endl;
	return 0;
}

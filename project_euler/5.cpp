#include <iostream>
using namespace std;

/*
	https://projecteuler.net/problem=5
	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main(){

	//FIXME: find a formula for loop ceiling
	//possible algo: 2*3*4*5*6*7*8*9*10 = ceiling

	//iterate to loop cieling

	//run a check to see if numbers are divisible by 1 - 10

 	long n = (1*2*3*4*5*6*7*8*9*10)/2;
	int nCount = 0;
	int nTarget = 10;

	while(n > 0){
		//cout << "n is " << n << endl;

		if((n % 1) == 0){
			//cout << "div by 1" << endl;
			nCount++;
		}
		if((n % 2) == 0){
			//cout << "div by 2" << endl;
			nCount++;
		}
		if((n % 3) == 0){
			//cout << "div by 3" << endl;
			nCount++;
		}
		if((n % 4) == 0){
			//cout << "div by 4" << endl;
			nCount++;
		}
		if((n % 5) == 0){
			//cout << "div by 5" << endl;
			nCount++;
		}
		if((n % 6) == 0){
			//cout << "div by 6" << endl;
			nCount++;
		}
		if((n % 7) == 0){
			//cout << "div by 7" << endl;
			nCount++;
		}
		if((n % 8) == 0){
			//cout << "div by 8" << endl;
			nCount++;
		}
		if((n % 9) == 0){
			//cout << "div by 9" << endl;
			nCount++;
		}
		if((n % 10) == 0){
			//cout << "div by 10" << endl;
			nCount++;
		}

		if(nCount == nTarget){
			//cout << "MATCH!!!" << endl;
			cout << n << endl;
			//break;
		}

		//cout << "Div by " << nCount << "/" << nTarget << " numbers" << endl;
		nCount = 0;
		//break;
		n--;


	}






	cout << endl;
	return 0;
}

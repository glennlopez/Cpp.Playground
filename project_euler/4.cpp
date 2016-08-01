#include <iostream>
#include <sstream>
using namespace std;

int test_palindrome(int Number, int paliNum);

/*
	https://projecteuler.net/problem=4
	A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

	Find the largest palindrome made from the product of two 3-digit numbers.
*/

int main(){

	unsigned int maxVal, minVal, paliNum;
	unsigned int i, j;

	//number generator variables
	paliNum = 0;
	maxVal = 1000;
	minVal = 99;

	//generate 3-digit products;
	for(i = minVal; i <= maxVal; i++){
		for(j = maxVal; j >= minVal; j--){
			//test each product combination for a Palindrome number
			paliNum = test_palindrome((i*j), paliNum);
		}

	}

	cout << "Largest palindrome made from the product of two 3-digit numbers: " << paliNum;

	cout << endl;
	return 0;
}


//PALINDROME TEST FUNCTION
int test_palindrome(int Number, int paliNum){
	string origNum;

	//int to string converter
	ostringstream convert;
	convert << Number;
	origNum = convert.str();

	//test variables
	int numOfTest = origNum.size()/2;
	int numOfPass = 0;

	//palindromic tester
	for(unsigned int i = 0; i < (origNum.size()/2); i++){
		if( origNum.at(i) != origNum.at(origNum.size()-1 -i)){
			break;
		}
		else{
			numOfPass++;
		}
	}

	//replace smaller palindromic with laarger palindromic
	if(numOfTest == numOfPass){
		if(Number > paliNum){
			paliNum = Number;
		}
	}

	return paliNum;
}

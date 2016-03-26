/*
	This is a simple biprime product-key validation algorythm
		- Subract a number incremently (i) from the public-key
			- Find the product of [i * (publicKey - 1)] until..
			- ... [i * (publicKey - 1)] == the private-key.

			note: private-key is a product of two large prime numbers
*/
#include <iostream>
using namespace std;

void key_check(long long publicKey){

	//publicKey checksum
	//FIXME: THIS NEEDS A WAY OF PARSING PRIVATE-KEYS
	// try: privateKey = fixed prime * incrementing prime number
	long long const privateKey = 127157243331463;	//product of 2 prime numbers
	long long solution, i;
	bool solved = 0;

	do{
		i++;
		solution = publicKey - i;
		if(solution * i == privateKey){
			solved = 1;
			cout << "Key is Valid!" << endl;

			//debug print-out
			cout << i << solution << endl;
		}
		else if(i == publicKey){
			cout << "Invalid Key!" << endl;
			break;
		}
	} while(solved == 0);
}

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
		}
		else if(i == publicKey){
			cout << "Invalid Key!" << endl;
			break;
		}
	} while(solved == 0);
}

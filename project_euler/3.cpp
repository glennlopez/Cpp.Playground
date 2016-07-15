#include <iostream>
#include <vector>
using namespace std;

/*
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/

int main(){

	unsigned long long i, peek;
	vector<int> factors;
	peek = 13195;

	for(i = 1; i <= (peek/2); i++){
		if(!(peek % i)){ //FIX ME----------------
			if(1){
				factors.push_back(i);
			}
		}
	}

	for(i = 0; i < factors.size(); i++){
		cout << factors.at(i) << " ";
	}




	cout << endl;
	return 0;
}

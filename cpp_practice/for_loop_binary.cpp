#include <iostream>
using namespace std;

int pow(int num, int power);

/*
	Generate 4^2 binary combinations
	ie:
		0001
		0010
		0011
		0100
		...etc

*/

int main(){

	int bits, i , j, ceiling;
	bool bin;

	bin = 0;
	bits = 2;
	ceiling = pow(2,bits);

	for(j = 1; j <= ceiling; j++){	//possible combinations

		for(i = 1; i <= bits; i++){	//number of bits
			cout << bin << " ";

		}
		cout << endl;


	}

	cout << endl;
	return 0;
}

//Power function
int pow(int num, int power){
	int multiplyer = num;

	for(int i = 1; i < power; i++){
		num = num * multiplyer;
	}

	return num;
}

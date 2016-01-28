#include <iostream>
#include <vector>
using namespace std;

void toBinary(int);

int main(){

	//covert 23 to binary
	toBinary(15);

	cout << endl;
	return 0;
}

void toBinary(int number){
	int num = number;

	vector<int> binary;

	while(num != 0){
		if(num % 2 == 0){
			binary.push_back(0);
		}
		if(num % 2 != 0){
			binary.push_back(1);
		}
		num = num / 2;
	}

	for(unsigned i = binary.size(); i > 0 ; i--){
		cout << binary[i - 1];
	}
}

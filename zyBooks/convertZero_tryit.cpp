#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
	//5 vector elements
	const int NUM_ELEMENTS = 5;
	vector<int> userNum(NUM_ELEMENTS);

	//loop vars
	int i = 0;


	//ask for numbers (input)
	for (i = 0; i < NUM_ELEMENTS; i++){
		cout << "Numbers to store: ";
		cin >> userNum.at(i);
	}


	//conver any negative values to a zero
	/*
	for (i = 0; i < NUM_ELEMENTS; i++){
		if (userNum.at(i) < 0){
			userNum.at(i) = 0;
		}
	}
	*/

	//convert any negative numbers to postitive
	for (i = 0; i < NUM_ELEMENTS; i++){
		if (userNum.at(i) < 0){
			userNum.at(i) = userNum.at(i) * -1;
		}
	}



	//output the converted numbers
	for (i = 0; i < NUM_ELEMENTS; i++){
		cout << userNum.at(i) << " ";
	}

	cout << endl;
	return 0;
}

/* This is my attempt at findMax_exmaple.cpp */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {

	const int NUM_VALS = 8;
	vector<int> usrValues(NUM_VALS);
	int maxVal = 0;

	cout << "Enter 8 integer values..." << endl;

	//iterate input loop
	for (int i = 0; i < NUM_VALS; i++){
		cout << "Value (" << i << "): ";
		cin >> usrValues.at(i);
	}

	maxVal = usrValues.at(0); //set maxVal so its NOT zero 0

	//check for max val outside of input loop
	for (int j = 0; j < NUM_VALS; j++){
		if (usrValues.at(j) > maxVal){
			maxVal = usrValues.at(j);
		}
	}

	//count the number of negVal
	int negVal = 0;
	for (int x = 0; x < NUM_VALS; x++){
		if (usrValues.at(x) < 0){
			negVal++;
		}
	}

	cout << "Highest Value: " << maxVal << endl;
	cout << "Number of Negative numbers: " << negVal;

	cout << endl;
	return 0;

}

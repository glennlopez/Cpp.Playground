/* This is my attempt at findMax_exmaple.cpp */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {

	const int NUM_VALS = 8;
	vector<int> usrValues(NUM_VALS);

	cout << "Enter 8 integer values..." << endl;
	for (int i = 0; i < NUM_VALS; i++){
		cout << "Value (" << i << "): ";
		cin >> usrValues.at(i);
		cout << endl;
	}

	cout << "Value for (4): " << usrValues.at(4);

	cout << endl;
	return 0;

}

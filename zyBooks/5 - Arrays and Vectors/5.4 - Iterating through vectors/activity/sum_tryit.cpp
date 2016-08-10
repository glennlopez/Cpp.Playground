/* This is my attempt at sum_example.cpp */

#include <iostream>
#include <vector>
using namespace std;

/*
	Find the sum of 8 numbers using vectors
*/

const int NUM_ELEMENTS = 8;
vector<int> elements(NUM_ELEMENTS);


int main(int argc, char const *argv[]) {

	int sum = 0;
	int avg = 0;

	cout << "Enter 8 values... " << endl;

	//get the values from the user
	for (int i = 0; i < NUM_ELEMENTS; i++){
		cout << "Value " << i+1 << ": ";
		cin >> elements.at(i);
		sum = sum + elements.at(i); //calculate the sum
	}

	cout << "Sum: " << sum << endl;

	//calculate the average
	avg = (sum / NUM_ELEMENTS);
	cout << "Avg: " << avg << endl;


	cout << endl;
	return 0;
}

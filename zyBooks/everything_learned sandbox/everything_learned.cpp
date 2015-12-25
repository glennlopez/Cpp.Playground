/*
	This is a simple program that explores everything learned from
	chapter 2 to chapter 6.
*/

//standard library
#include <iostream>
#include <string>
#include <vector>

//user generated library
#include "everything_learned.h"


using namespace std;

void printVector(const vector<int>& vecNums);


int main(int argc, char const *argv[]) {
	//default variables
	int numToGenerate = DEFAULT;
	char userOrComp = DEFAULT_CHAR;

	//ask user for ammount of numbers to generate
	do{
		cout << "How many numbers would you like: ";
		cin >> numToGenerate;
	}
	while (numToGenerate <= 0);
	vector<int> usrVectors(numToGenerate);


	//ask user if they want to make the numbers themselfs
	cout << "Would you like the computer to generate the numbers?" << endl;
	YesOrNo(userOrComp);

	if (userOrComp == 'y'){
		cout << "random gen";
		cout << endl;
	}
	if (userOrComp == 'n'){
		for(int i = 0; i < numToGenerate; i++){
			cout << "Number " << i + 1 << ": ";
			cin >> usrVectors.at(i);
		}
	}

	//print results
	printVector(usrVectors);

	cout << endl;
	return 0;
}


//*** COMMON FUNCTIONS ***//
void YesOrNo(char& errorChar){
	while (true) {
	    cout << "Yes or No [y/n]: ";
	    cin >> errorChar;

	    if ((errorChar == 'y') || (errorChar == 'n')) {
	        break;
	    }
	}
}

void printVector(const vector<int>& vecNums){
	for (int i = 0; i < vecNums.size(); i++){
		cout << vecNums.at(i) << " ";
	}
	return;

}

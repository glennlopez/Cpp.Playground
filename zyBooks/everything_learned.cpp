/*
	This is a simple program that explores everything learned from
	chapter 2 to chapter 6.
*/

#include <iostream>
#include <string>				//need to use strings
#include <vector>				//use vectors
#include "prototypes.h"		//put prototypes in a seperate file

using namespace std;

void printVector(const vector<int>& vecNums);


int main(int argc, char const *argv[]) {
	//default variables
	int numToGenerate = 0;
	char userOrComp = '?';

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
	}
	if (userOrComp == 'n'){
		for(int i = 0; i < numToGenerate; i++){
			cout << "Number " << i + 1 << ": ";
			cin >> usrVectors.at(i);
		}
	}



	cout << endl;
	return 0;
}


//*** FUNCTIONS ***//
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

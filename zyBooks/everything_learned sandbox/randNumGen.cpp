#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

//generate a single
int GenerateRandomNumber(int seed = 0){
	srand(time(NULL) + seed);					//use date + time as rand seed
	int randomNumber = rand() % 9;	//rand range 0 - 9
	return randomNumber;
}

//generate x number of random numbers
void xGenerateRandomNumber(){
	int userDefined = 0;

	cout << "How many numbers do you need: ";
	cin >> userDefined;

	for(int i = 0; i < userDefined; i++){
		cout << GenerateRandomNumber(i) << " ";
	}
}

void xXGenerateRandomNumber(){
	int userDefined = rand() % 50;

	for(int i = 0; i < userDefined; i++){
		cout << GenerateRandomNumber(i) << " ";
	}
}


//** SWITCH CASE STATEMENTS **//
void RandomNumberCase(int menuSelection){
	switch (menuSelection) {
		case 1:
		system("clear");
		cout << "Number Generated: ";
		cout << endl;
		cout << GenerateRandomNumber() << endl;
		break;

		case 2:
		system("clear");
		xGenerateRandomNumber();
		cout << endl;
		break;

		case 3:
		system("clear");
		xXGenerateRandomNumber();
		cout << endl;
		break;

		default:
		cout << "That number is outside the parameters." << endl;
		break;
	}
}

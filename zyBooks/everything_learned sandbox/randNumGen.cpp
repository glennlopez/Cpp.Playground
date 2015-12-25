#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <vector>
using namespace std;

//random number storage
int vectorSize = 1000;
vector<int> randNums(vectorSize);

//generate a single random number
int GenerateRandomNumber(int seed = 0){
	srand(time(NULL) + seed);					//use date + time as rand seed
	int randomNumber = rand() % 10;			//rand range 0 - 9
	return randomNumber;
}

//generate x number of random numbers
void xGenerateRandomNumber(vector<int>& randNums, int& vectorSize){

	cout << "How many numbers do you need (1000 max): ";
	cin >> vectorSize;

	for(int i = 0; i < vectorSize; i++){
		randNums.at(i) = GenerateRandomNumber(i);
		cout << randNums.at(i);
	}
}

void xXGenerateRandomNumber(){
	srand(time(NULL));
	int userDefined = rand() % 200;

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
		xGenerateRandomNumber(randNums, vectorSize);
		//xGenerateRandomNumber();
		cout << endl;
		break;

		case 3:
		system("clear");
		xXGenerateRandomNumber();
		cout << endl;
		break;

		default:
		cout << "Exiting: number picked is outside the parameters." << endl;
		cout << endl;
		break;
	}
}

//backup

/*void xGenerateRandomNumber(){
	int userDefined = 0;

	cout << "How many numbers do you need: ";
	cin >> userDefined;

	for(int i = 0; i < userDefined; i++){
		cout << GenerateRandomNumber(i) << " ";
	}
}*/

/*void xXGenerateRandomNumber(){
	srand(time(NULL));
	int userDefined = rand() % 200;

	for(int i = 0; i < userDefined; i++){
		cout << GenerateRandomNumber(i) << " ";
	}
}
*/

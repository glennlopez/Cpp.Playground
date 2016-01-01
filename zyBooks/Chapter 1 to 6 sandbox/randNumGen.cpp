#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <vector>
using namespace std;

//menu title
void TitleBlockRandNum(){
	cout << endl;
	cout << "GENERATE RANDOM NUMBERS" << endl;
}

//claculate total sum
int GetSum(vector<int> randNums, int vectorSize){
	int total = 0;

	for (int i = 0; i < vectorSize; i++){
		total = total + randNums.at(i);
	}
	return total;
}

//print footer details
void PrintVectorDetails(vector<int> randNums, int vectorSize){
	cout << endl;
	cout << "---------------" << endl;
	cout << "Sum of all numbers: " << GetSum(randNums, vectorSize);
}



//** RANDOM NUMBER GENERATORS **//
int vectorSize = 1000;
vector<int> randNums(vectorSize);

int GenerateRandomNumber(int seed = 0){
	srand(time(NULL) + seed);					//use date + time as rand seed
	int randomNumber = rand() % 10;			//rand range 0 - 9
	return randomNumber;
}

void xGenerateRandomNumber(vector<int>& randNums, int& vectorSize){
	TitleBlockRandNum();
	cout << "How many numbers do you need (1000 max): ";
	cin >> vectorSize;

	system("clear");
	TitleBlockRandNum();
	cout << "Numbers Generated: ";
	for(int i = 0; i < vectorSize; i++){
		randNums.at(i) = GenerateRandomNumber(i);
		cout << randNums.at(i);
	}
	cout << endl;
}

void AllGenerateRandomNumber(vector<int>& randNums, int& vectorSize){
	srand(time(NULL));
	vectorSize = rand() % 1000;

	system("clear");
	TitleBlockRandNum();
	cout << "Numbers Generated: ";
	for(int i = 0; i < vectorSize; i++){
		randNums.at(i) = GenerateRandomNumber(i);
		cout << randNums.at(i);
	}

	cout << endl;
}


//** SWITCH CASE STATEMENTS **//
void RandomNumberCase(int menuSelection){
	switch (menuSelection) {
		case 1:
		system("clear");
		TitleBlockRandNum();
		cout << "Number Generated: ";
		cout << GenerateRandomNumber() << endl;
		cout << endl;
		break;

		case 2:
		system("clear");
		xGenerateRandomNumber(randNums, vectorSize);
		PrintVectorDetails(randNums, vectorSize);
		cout << endl;
		break;

		case 3:
		system("clear");
		AllGenerateRandomNumber(randNums, vectorSize);
		cout << endl;
		break;

		default:
		cout << "Exiting: number picked is outside the parameters." << endl;
		cout << endl;
		break;
	}
}

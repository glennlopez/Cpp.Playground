#include <iostream>
#include <vector>
using namespace std;

/*
	Write a for loop to print all NUM_VALS elements of vector courseGrades, following each with a space (including the last). Ex: If courseGrades = {7, 9, 11, 10}, print:
	7 9 11 10
	10 11 9 7
*/

int main() {
   const int NUM_VALS = 4;
   vector<int> courseGrades(NUM_VALS);
   int i = 0;

   courseGrades.at(0) = 7;
   courseGrades.at(1) = 9;
   courseGrades.at(2) = 11;
   courseGrades.at(3) = 10;

   /* Your solution goes here  */

	for (i = 0; i < NUM_VALS; i++){
		cout << courseGrades.at(i) << " ";
	}

	cout << endl;

	for (i = NUM_VALS - 1; i >= 0; i--){
		cout << courseGrades.at(i) << " ";
	}
	cout << endl;

   return 0;
}

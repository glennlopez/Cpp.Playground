#include <iostream>
using namespace std;

/*
	Given numRows and numCols, print a list of all seats in a theater. Rows are numbered, columns lettered, as in 1A or 3E. Print a space after each seat, including after the last. Ex: numRows = 2 and numCols = 3 prints:
	1A 1B 1C 2A 2B 2C
*/

int main() {
   int numRows = 2;
   int numCols = 3;

   // Note: You'll need to define more variables

   /* Your solution goes here  */

	int rowNum = 1;	//needs to be outside numRows loop

	for(int i = 0; i < numRows; i++){
		char seat = 'A';	//needs to be outside numCols loop but inside numRows loop

		for(int j = 0; j < numCols; j++){
			cout << rowNum << seat << " ";
			seat++;
		}
		rowNum ++;
	}


	cout << endl;
   return 0;
}

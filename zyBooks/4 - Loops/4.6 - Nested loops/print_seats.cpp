#include <iostream>
using namespace std;

/*
	Given numRows and numCols, print a list of all seats in a theater. Rows are numbered, columns lettered, as in 1A or 3E. Print a space after each seat, including after the last. Ex: numRows = 2 and numCols = 3 prints:
	1A 1B 1C 2A 2B 2C
*/

int main() {
   int numRows = 2;
   int numCols = 3;

	//debug
	cout << "How many rows: ";
	cin >> numRows;

	cout << "How many cols: ";
	cin >> numCols;

   // Note: You'll need to define more variables

   /* Your solution goes here  */
	int i = 0;
	int j = 0;
	char letter = 'A';

	for (j = 1; j <= numRows; j++){

		letter = 'A';
		for (i = 1; i <= numCols; i++){
			cout << j;
			cout << letter << " ";
			letter++;
		}

	}

	cout << endl;
   return 0;
}

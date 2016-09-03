#include <iostream>
using namespace std;

/*
	Define a function PrintFeetInchShort, with int parameters numFeet and numInches, that prints using ' and " shorthand. Ex: PrintFeetInchShort(5, 8) prints:
	5' 8"
		Hint: Use \" to print a double quote.
*/


/* Your solution goes here  */
void PrintFeetInchShort(int feet, int iches){
	cout << feet << "'" << " " << iches << "\"";
}

int main() {
   PrintFeetInchShort(5, 8);
   cout << endl;

   return 0;
}

#include <iostream>
using namespace std;

/*
	Re-type the following and run, note incorrect behavior. Then fix errors in the code, which should print numStars asterisks.
	while (numPrinted != numStars) {
	   cout << "*";
}
*/

int main() {
   int numStars = 0;
   int numPrinted = 0;

   numStars = 4;
   numPrinted = 1;

   /* Your solution goes here  */
	while (!(numPrinted > numStars)) {
	   cout << "*";
		numStars--;
	}

   cout << endl;

   return 0;
}

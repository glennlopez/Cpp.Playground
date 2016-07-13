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

   numStars = 12;
   numPrinted = 1;

   /* Your solution goes here  */

/* WRONG!
	while(numPrinted < numStars){	//<---- has no = so you are mising 1 star
		cout << "*";
		numPrinted++;
	}
*/

	while(numPrinted <= numStars){
		cout << "*";
		numPrinted++;
	}


   cout << endl;

   return 0;
}

#include <iostream>
using namespace std;

/*
	Given positive integer numInsects, write a while loop that prints that number doubled without reaching 100. Follow each number with a space. After the loop, print a newline. Ex: If numInsects = 8, print:

	8 16 32 64
*/

int main() {
   int numInsects = 0;

   numInsects = 8; // Must be >= 1

   /* Your solution goes here  */
	while(numInsects < 100){
		cout << numInsects << " ";
		numInsects = numInsects * 2;
	}

	cout << endl;

   return 0;
}

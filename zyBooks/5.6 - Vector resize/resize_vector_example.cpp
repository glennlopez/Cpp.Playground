#include <iostream>
#include <vector>
using namespace std;

/*
	The notation vctr.resize() indicates that resize() is a function that operates on the vector; sections on C++ classes discuss such notation further.

	The following program asks a user to indicate the number of values the user will enter, and allocates that number of elements for a vector.
*/

int main() {
   vector<int> userVals; // No elements yet
   int numVals = 0;
   int i = 0;

   cout << "Enter number of integer values: ";
   cin >> numVals;

   userVals.resize(numVals); // Allocate elements

   cout << "Enter " << numVals << " integer values..." << endl;
   for (i = 0; i < numVals; ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }
   cout << "You entered: ";
   for (i = 0; i < numVals; ++i) {
      cout << userVals.at(i) << " ";
   }
   cout << endl;

   return 0;
}

#include <iostream>
#include <vector>
using namespace std;

/*
	Sometimes a program changes some elements' values or moves elements while iterating through a vector. The following uses a loop to convert any negative vector element values to 0.
*/

int main() {
   const int NUM_ELEMENTS = 5;         // Number of elements
   vector<int> userVals(NUM_ELEMENTS); // User values
   int i = 0;                          // Loop index

   // Prompt user to populate vector
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }

   // Convert negatives to 0
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals.at(i) < 0) {
         userVals.at(i) = 0;
      }
   }

   // Print numbers
   cout << "New values:";
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << " " << userVals.at(i);
   }
   cout << endl;

   return 0;
}

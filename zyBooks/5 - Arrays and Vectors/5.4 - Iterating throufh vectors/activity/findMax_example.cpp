#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 8;         // Number of elements in vector
   vector<int> userVals(NUM_VALS); // User values
   int i = 0;                      // Loop index
   int maxVal = 0;                 // Computed max

   cout << "Enter " << NUM_VALS << " integer numbers..." << endl;
   for (i = 0; i < NUM_VALS; ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }

   // Determine largest (max) number
   maxVal = userVals.at(0);        // Largest so far
   for (i = 0; i < NUM_VALS; ++i) {
      if (userVals.at(i) > maxVal) {
         maxVal = userVals.at(i);
      }
   }
   cout << "Max: " << maxVal << endl;

   return 0;
}

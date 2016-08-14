#include <iostream>
#include <vector>
using namespace std;

/*
	Append newValue to the end of vector tempReadings. Ex: If newValue = 67, then tempReadings = {53, 57, 60} becomes {53, 57, 60, 67}.
*/

int main() {
   vector<int> tempReadings(3);
   int newValue = 0;
   unsigned int i = 0;

   tempReadings.at(0) = 53;
   tempReadings.at(1) = 57;
   tempReadings.at(2) = 60;

   newValue = 67;

   /* Your solution goes here  */
	tempReadings.push_back(newValue);

   for (i = 0; i < tempReadings.size(); ++i) {
      cout << tempReadings.at(i) << " ";
   }
   cout << endl;

   return 0;
}

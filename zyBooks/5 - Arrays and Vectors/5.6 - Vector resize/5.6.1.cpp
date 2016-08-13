#include <iostream>
#include <vector>
using namespace std;

/*
	Assign the size of vector sensorReadings to currentSize.
*/

int main() {
   vector<int> sensorReadings(4);
   int currentSize = 0;

   sensorReadings.resize(10);

   /* Your solution goes here  */
	currentSize = sensorReadings.size();

   cout << "Number of elements: " << currentSize << endl;

   return 0;
}

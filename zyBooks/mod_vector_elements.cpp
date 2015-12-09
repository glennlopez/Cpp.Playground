#include <iostream>
#include <vector>
using namespace std;

/*
	Double any element's value that is less than minVal. Ex: If minVal = 10, then dataPoints = {2, 12, 9, 20} becomes {4, 12, 18, 20}.
*/

int main() {
   const int NUM_POINTS = 4;
   vector<int> dataPoints(NUM_POINTS);
   int minVal = 0;
   int i = 0;

   dataPoints.at(0) = 2;
   dataPoints.at(1) = 12;
   dataPoints.at(2) = 9;
   dataPoints.at(3) = 20;

   minVal = 10;

   /* Your solution goes here  */

	for (i = 0; i < NUM_POINTS; i++){
		if (dataPoints.at(i) < minVal){
			dataPoints.at(i) = dataPoints.at(i) * 2;
		}
	}

	/* end of solution */

   for (i = 0; i < NUM_POINTS; ++i) {
      cout << dataPoints.at(i) << " " ;
   }
   cout << endl;

   return 0;
}

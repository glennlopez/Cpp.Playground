#include <iostream>
#include <vector>
using namespace std;

/*

	Set numMatches to the number of elements in userValues (having NUM_VALS elements) that equal matchValue. Ex: If matchValue = 2 and userValues = {2, 2, 1, 2}, then numMatches = 3.

*/

int main() {
   const int NUM_VALS = 4;
   vector<int> userValues(NUM_VALS);
   int i;
   int matchValue = 0;
   int numMatches = -99; // Assign numMatches with 0 before your for loop

   userValues.at(0) = 2;
   userValues.at(1) = 2;
   userValues.at(2) = 1;
   userValues.at(3) = 2;

   matchValue = 2;

   /* Your solution goes here  */
	i=0;
	numMatches = 0;
	do{
		if(userValues.at(i) == matchValue){
			numMatches++;
		}

		i++;
	}while(i <= userValues.size() - 1);


   cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

   return 0;
}

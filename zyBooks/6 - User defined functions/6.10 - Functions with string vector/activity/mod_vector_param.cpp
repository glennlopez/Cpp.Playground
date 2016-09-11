#include <iostream>
#include <vector>
using namespace std;
/*
	Write a function SwapVectorEnds() that swaps the first and last elements of its vector parameter. Ex: sortVector = {10, 20, 30, 40} becomes {40, 20, 30, 10}. The vector's size may differ from 4.
*/

/* Your solution goes here  */
void SwapVectorEnds(vector<int>& regVector){
	int i = 0;
	int tempVal = regVector.at(0);
	int vectorsize = regVector.size();

	tempVal = regVector.at(i);
	regVector.at(i) = regVector.at(vectorsize - 1 - i);
	regVector.at(vectorsize - 1 - i) = tempVal;

	return;
}
/* end of solution */

void SwapAll(vector<int>& regVector){
	int i = 0;
	int tempVal = regVector.at(0);
	int vectorsize = regVector.size();

	for (i = 0; i < vectorsize / 2; i++){
		tempVal = regVector.at(i);
		regVector.at(i) = regVector.at(vectorsize - 1 - i);
		regVector.at(vectorsize - 1 - i) = tempVal;
	}

	return;
}

int main() {
   vector<int> sortVector(4);
   int i = 0;

   sortVector.at(0) = 10;
   sortVector.at(1) = 20;
   sortVector.at(2) = 30;
   sortVector.at(3) = 40;

   SwapVectorEnds(sortVector);

   for (i = 0; i < sortVector.size(); ++i) {
      cout << sortVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}

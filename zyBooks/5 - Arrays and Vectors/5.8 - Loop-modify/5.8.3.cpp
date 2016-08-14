#include <iostream>
#include <vector>
using namespace std;

/*
	Write a loop that sets each vector element to the sum of itself and the next element, except for the last element which stays the same. Be careful not to index beyond the last element. Ex:
		Initial scores:        10, 20, 30, 40
		Scores after the loop: 30, 50, 70, 40
		
	The first element is 30 or 10 + 20, the second element is 50 or 20 + 30, and the third element is 70 or 30 + 40. The last element remains the same.

*/

int main() {
   const int SCORES_SIZE = 4;
   vector<int> bonusScores(SCORES_SIZE);
   int i = 0;

   bonusScores.at(0) = 10;
   bonusScores.at(1) = 20;
   bonusScores.at(2) = 30;
   bonusScores.at(3) = 40;

   /* Your solution goes here  */

   for (i = 0; i < SCORES_SIZE; ++i) {
      cout << bonusScores.at(i) << " ";
   }
   cout << endl;

   return 0;
}

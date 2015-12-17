#include <iostream>
#include <vector>
using namespace std;

/*
	Write a loop that sets newScores to oldScores shifted once left, with element 0 copied to the end. Ex: If oldScores = {10, 20, 30, 40}, then newScores = {20, 30, 40, 10}.
*/

int main() {
   const int SCORES_SIZE = 4;
   vector<int> oldScores(SCORES_SIZE);
   vector<int> newScores(SCORES_SIZE);
   int i = 0;

   oldScores.at(0) = 10;
   oldScores.at(1) = 20;
   oldScores.at(2) = 30;
   oldScores.at(3) = 40;

   /* Your solution goes here  */
	int lastVector = newScores.size() -1;
	newScores = oldScores;

	for (i = 0; i < SCORES_SIZE - 1; i++){
		newScores.at(i) = newScores.at(i+1);
	}

	newScores.at(lastVector) = oldScores.at(0);
	/*end of solution */

   for (i = 0; i < SCORES_SIZE; ++i) {
      cout << newScores.at(i) << " ";
   }
   cout << endl;

   return 0;
}

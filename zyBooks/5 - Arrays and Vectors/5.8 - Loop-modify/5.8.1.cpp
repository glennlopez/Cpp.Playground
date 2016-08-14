#include <iostream>
#include <vector>
using namespace std;

/*

	Write a loop that subtracts 1 from each element in lowerScores. If the element was already 0 or negative, assign 0 to the element. Ex: lowerScores = {5, 0, 2, -3} becomes {4, 0, 1, 0}.

*/

int main() {
   const int SCORES_SIZE = 4;
   vector<int> lowerScores(SCORES_SIZE);
   int i = 0;

   lowerScores.at(0) = 5;
   lowerScores.at(1) = 0;
   lowerScores.at(2) = 2;
   lowerScores.at(3) = -3;

   /* Your solution goes here  */
	for(i = 0; i <= lowerScores.size() - 1; i++){
		if(lowerScores.at(i) <= 0){
			lowerScores.at(i) = 0;
		}
		else{
			lowerScores.at(i) -= 1;
		}
	}

   for (i = 0; i < SCORES_SIZE; ++i) {
      cout << lowerScores.at(i) << " ";
   }
   cout << endl;

   return 0;
}

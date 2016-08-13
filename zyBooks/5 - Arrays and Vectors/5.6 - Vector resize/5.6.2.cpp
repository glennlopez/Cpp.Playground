#include <iostream>
#include <vector>
using namespace std;

/*
	Resize vector countDown to have newSize elements. Populate the vector with integers {newSize, newSize - 1, ..., 1}. Ex: If newSize = 3, then countDown = {3, 2, 1}, and the sample program outputs: 

		3 2 1 Go!
*/

int main() {
   vector<int> countDown(0);
   int newSize = 0;
   int i = 0;

   newSize = 3;

   /* Your solution goes here  */

   for (i = 0; i < newSize; ++i) {
      cout << countDown.at(i) << " ";
   }
   cout << "Go!" << endl;

   return 0;
}

#include <iostream>
#include <cstdlib>   // Enables use of rand()
#include <ctime>     // Enables use of time()
using namespace std;

/*
	Type two statements that use rand() to print 2 random integers between (and including) 100 and 149. End with a newline. Ex:
	101
	133
	Note: For this activity, using one statement may yield different output (due to the compiler calling rand() in a different order). Use two statements for this activity.
*/

int main() {
   int seedVal = 0;

   seedVal = 4;
   srand(seedVal);

   /* Your solution goes here  */
	//(rand() % (30 - 18 + 1)) + 18
	cout << (rand() % (150 - 100 + 1)) + 150 << endl;
	cout << (rand() % (150 - 100 + 1)) + 150 << endl;
   return 0;
}

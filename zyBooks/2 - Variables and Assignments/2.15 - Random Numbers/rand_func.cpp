#include <iostream>
#include <cstdlib>   // Enables use of rand()
#include <ctime>     // Enables use of time()
using namespace std;

/*
	Type a statement using srand() to seed random number generation using variable seedVal. Then type two statements using rand() to print two random integers between 0 and 9. End with a newline. Ex:
	5
	7

	Note: For this activity, using one statement may yield different output (due to the compiler calling rand() in a different order). Use two statements for this activity.
*/

int main() {
   int seedVal = 4;

   /* Your solution goes here  */
	srand(seedVal);

	//cout << rand() << endl;
	cout << rand() % 10 << endl;
	cout << rand() % 10 << endl;

   return 0;
}

#include <iostream>
using namespace std;

/*

	Write an expression that executes the loop body as long as the user enters a non-negative number.


	Note: These activities may test code with different test values. This activity will perform three tests, with userNum initially 9 and user input of 5, 2, -1, then with userNum initially 0 and user input of -17, then with userNum initially -1. See How to Use zyBooks.

	Also note: If the submitted code has an infinite loop, the system will stop running the code after a few seconds, and report "Program end never reached." The system doesn't print the test case that caused the reported message.

*/

int main() {
   int userNum = 0;

   userNum = 9;
   while (/* Your solution goes here  */) {
      cout << "Body" << endl;
      cin >> userNum;
   }
   cout << "Done." << endl;

   return 0;
}

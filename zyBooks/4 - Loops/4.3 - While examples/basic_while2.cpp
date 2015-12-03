#include <iostream>
using namespace std;

/*
	Write a while loop that prints userNum divided by 2 (integer division) until reaching 1. Follow each number by a space. Example output for userNum = 20:
	20 10 5 2 1


	Note: These activities may test code with different test values. This activity will perform four tests, with userNum = 20, then with userNum = 1, then with userNum = 0, then with userNum = -1. See How to Use zyBooks.

	Also note: If the submitted code has an infinite loop, the system will stop running the code after a few seconds, and report "Program end never reached." The system doesn't print the test case that caused the reported message.
*/

int main() {
   int userNum = 0;

   userNum = 20;

   /* Your solution goes here  */
	while (!(userNum <= 0)){
		cout << userNum << " ";
		userNum /= 2;
	}
   cout << endl;

   return 0;
}

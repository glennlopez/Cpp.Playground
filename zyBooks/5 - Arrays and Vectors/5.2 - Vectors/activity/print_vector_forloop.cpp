#include <iostream>
#include <vector>
using namespace std;

/*
	Write a for loop to print all NUM_VALS elements of vector courseGrades, following each with a space (including the last). Print forwards, then backwards. End with newline. Ex: If courseGrades = {7, 9, 11, 10}, print:
	7 9 11 10
	10 11 9 7

	Hint: Use two for loops. Second loop starts with i = NUM_VALS - 1.


	Note: These activities may test code with different test values. This activity will perform two tests, the first with a 4-element vector (vector<int> courseGrades(4)), the second with a 2-element vector (vector<int> courseGrades(2)). See How to Use zyBooks.

	Also note: If the submitted code tries to access an invalid vector element, such as courseGrades.at(9) for a 4-element vector, the test may generate strange results. Or the test may crash and report "Program end never reached", in which case the system doesn't print the test case that caused the reported message.
*/

int main() {
   const int NUM_VALS = 4;
   vector<int> courseGrades(NUM_VALS);
   int i = 0;

   courseGrades.at(0) = 7;
   courseGrades.at(1) = 9;
   courseGrades.at(2) = 11;
   courseGrades.at(3) = 10;

   /* Your solution goes here  */

	for (i = 0; i < NUM_VALS; i++){
		cout << courseGrades.at(i) << " ";
	}

	cout << endl;

	for (i = NUM_VALS - 1; i >= 0; i--){
		cout << courseGrades.at(i) << " ";
	}
	cout << endl;

   return 0;
}

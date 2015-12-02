#include <iostream>
#include <vector>
using namespace std;

/*

	Write three statements to print the first three elements of vector runTimes. Follow each with a newline. Ex: If runTime = {800, 775, 790, 805, 808}, print:
	800
	775
	790


	Note: These activities may test code with different test values. This activity will perform two tests, the first with a 5-element vector (vector<int> runTimes(5)), the second with a 4-element vector (vector<int> runTimes(4)). See How to Use zyBooks.

	Also note: If the submitted code tries to access an invalid vector element, such as runTime.at(9) for a 5-element vector, the test may generate strange results. Or the test may crash and report "Program end never reached", in which case the system doesn't print the test case that caused the reported message.

*/

int main() {
   vector<int> runTimes(5);

   // Populate vector
   runTimes.at(0) = 800;
   runTimes.at(1) = 775;
   runTimes.at(2) = 790;
   runTimes.at(3) = 805;
   runTimes.at(4) = 808;

   /* Your solution goes here  */

	for (int i = 0; i < 3; i++){
		cout << runTimes.at(i) << endl;
	}

   return 0;
}

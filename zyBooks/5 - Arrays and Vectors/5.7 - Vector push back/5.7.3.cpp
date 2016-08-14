#include <iostream>
#include <vector>
using namespace std;

/*
	Write a statement to print "Last mpg reading: " followed by the value of mpgTracker's last element. End with newline. Ex: If mpgTracker = {17, 19, 20}, print:

		Last mpg reading: 20
*/

int main() {
   vector<int> mpgTracker(3);

   mpgTracker.at(0) = 17;
   mpgTracker.at(1) = 19;
   mpgTracker.at(2) = 20;

   /* Your solution goes here  */
	cout << "Last mpg reading: " << mpgTracker.back();
	cout << endl;

   return 0;
}

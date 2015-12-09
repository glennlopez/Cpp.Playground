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
	int vectorSize = mpgTracker.size();
	int IndexLast = vectorSize - 1;

	cout << "Last mpg reading: " << mpgTracker.at(IndexLast);

	cout << endl;
   return 0;
}

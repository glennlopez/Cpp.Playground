#include <iostream>
using namespace std;

/*
	Write a switch statement that checks nextChoice. If 0, print "Rock". If 1, print "Paper". If 2, print "Scissors". For any other value, print "Unknown". End with newline. Do not get input from the user; nextChoice is assigned in main().
*/

int main() {
   int nextChoice = 0;

   nextChoice = 2;

   /* Your solution goes here  */
	switch (nextChoice) {
		case 0:
			cout << "Rock";
		break;

		case 1:
			cout << "Paper";
		break;

		case 2:
			cout << "Scissors";
		break;

		default:
			cout << "Unknown";
		break;
	}

	cout << endl;
   return 0;
}

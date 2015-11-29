#include <iostream>
#include <string>
using namespace std;

/*
	"Simon Says" is a memory game where "Simon" outputs a sequence of 10 characters (R, G, B, Y) and the user must repeat the sequence. Create a for loop that compares the two strings starting from index 0. For each match, add one point to userScore. Upon a mismatch, exit the loop using a break statement. Ex: The following patterns yield a userScore of 4:

		simonPattern: R, R, G, B, R, Y, Y, B, G, Y
		userPattern:  R, R, G, B, B, R, Y, B, G, Y
*/

int main() {
   string simonPattern;
   string userPattern;
   int userScore = 0;
   int i = 0;

   userScore = 0;
   simonPattern = "RRGBRYYBGY";
   userPattern  = "RRGBBRYBGY";

   /*
		Your solution goes here
		for this we need to use the .at() function in <string>
 		iterate through the string 1 char at a time and compare
	*/

	//cout how many chars in the string + place it in a var

	//for loop an iteration through every char using .at()
	for (size_t i = 0; i < count; i++) {
		// check to see if userPattern == Simon
	}

	int stringPos = 0;

   cout << "userScore: " << userScore << endl;

   return 0;
}

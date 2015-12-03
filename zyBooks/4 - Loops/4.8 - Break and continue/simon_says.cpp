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

   /*	Your solution goes here:*/

	/*
		Note: for this we need to use the .at() function in <string>
		and iterate through the string 1 char at a time and compare
	*/

	char stringPosSimon = '?';
	char stringPosUser = '?';
	int stringSize = 0;

	//Cout the string tize of simonPattern to get a base number of when
	//when to stop iterating through the char.
	stringSize = simonPattern.length();

	//iterate till we reach the last char in simonPattern
	for (i = 0; i < stringSize; i++){

		//put the value of the char in a var so we can compare it
		//"i" increases so we can use this var for .at()
		stringPosSimon = simonPattern.at(i);
		stringPosUser = userPattern.at(i);

		//compare the vars | if it matches +1 point else, break the loop
		if (stringPosSimon == stringPosUser){
			userScore++;
			continue;
		}

		else{
			break;
		}

		//Debug
		//cout << stringPosSimon << endl;
		//cout << stringPosUser << endl;

	}


   cout << "userScore: " << userScore << endl;

   return 0;
}

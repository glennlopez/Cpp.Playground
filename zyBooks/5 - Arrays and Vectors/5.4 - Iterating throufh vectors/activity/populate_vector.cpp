#include <iostream>
#include <vector>
using namespace std;

/*
	Write a for loop to populate vector userGuesses with NUM_GUESSES integers. Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then userGuesses is {9, 5, 2}.
*/

int main() {
   const int NUM_GUESSES = 3;
   vector<int> userGuesses(NUM_GUESSES);
   int i = 0;

   /* Your solution goes here  */
	for (i = 0; i < NUM_GUESSES; i++){
		cin >> userGuesses.at(i);
	}



   return 0;
}

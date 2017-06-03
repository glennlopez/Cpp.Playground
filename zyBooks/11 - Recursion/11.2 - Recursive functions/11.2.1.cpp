#include <iostream>
using namespace std;

// Write a statement that calls the recursive function BackwardsAlphabet() with parameter startingLetter.

void BackwardsAlphabet(char currLetter){
   if (currLetter == 'a') {
      cout << currLetter << endl;
   }
   else{
      cout << currLetter << " ";
      BackwardsAlphabet(currLetter - 1);
   }
   return;
}

int main() {
   char startingLetter = '-';

   startingLetter = 'z';

   /* Your solution goes here  */

   return 0;
}

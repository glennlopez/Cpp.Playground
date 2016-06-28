#include <iostream>
#include <string>
using namespace std;

/*
	Write an expression to detect that the first character of userInput matches firstLetter.
*/

int main() {
   string userInput;
   char firstLetter = '-';

   userInput = "banana";
   firstLetter = 'b';

   if ((userInput.at(0) == firstLetter)) { //<-- answer
      cout << "Found match: " << firstLetter << endl;
   }
   else {
      cout << "No match: " << firstLetter << endl;
   }

   return 0;
}

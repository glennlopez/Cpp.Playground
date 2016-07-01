#include <iostream>
#include <string>
using namespace std;

/*
	Assign the size of userInput to stringSize. Ex: if userInput = "Hello", output is:
	Size of userInput: 5
*/

int main() {
   string userInput;
   int stringSize = 0;

   userInput = "Hello";

   /* Your solution goes here  */
	stringSize = userInput.size();

   cout << "Size of userInput: " << stringSize << endl;

   return 0;
}

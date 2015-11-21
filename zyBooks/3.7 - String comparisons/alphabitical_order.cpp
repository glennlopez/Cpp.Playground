#include <iostream>
#include <string>
using namespace std;

/*
	Print the two strings in alphabetical order. Assume the strings are lowercase. End with newline. Sample output:
	capes rabbits
*/

int main() {
   string firstString;
   string secondString;

   firstString = "rabbits";
   secondString = "capes";

   /* Your solution goes here  */
	if (firstString < secondString){
		cout << firstString << " " << secondString << endl;
	}
	else{
		cout << secondString << " " << firstString << endl;
	}

   return 0;
}

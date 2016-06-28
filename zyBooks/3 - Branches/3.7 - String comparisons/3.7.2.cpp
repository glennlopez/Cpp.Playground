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
	if(secondString < firstString){
		cout << secondString << " " << firstString << endl;
	}

	else{
		cout << firstString << " " << secondString << endl;
	}

   return 0;
}

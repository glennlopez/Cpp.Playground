#include <iostream>
#include <string>
using namespace std;

/*
	Complete the second PrintSalutation function to print the following given personName "Holly" and customSalutation "Welcome":
	Welcome, Holly
*/

void PrintSalutation(string personName) {
   cout << "Hello, " << personName << endl;
   return;
}

// Define void  PrintSalutation(string personName, string customSalutation)...
void PrintSalutation(string personName, string customSalutation){
	cout << customSalutation << ", " << personName;

	cout << endl;
	return;
}

/* Your solution goes here  */

int main() {
   PrintSalutation("Holly", "Welcome");
   PrintSalutation("Sanjiv");

   return 0;
}

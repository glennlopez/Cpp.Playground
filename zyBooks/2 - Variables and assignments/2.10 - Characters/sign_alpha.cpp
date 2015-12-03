#include <iostream>
using namespace std;

/*
	Define a character variable letterStart. Read the character from the user, print that letter and the next letter in the alphabet. Sample output assuming the user enters 'a':
									ab
*/

int main() {

   /* Your solution goes here  */
	char letterStart = 0;

	cout << "Letter: ";
	cin >> letterStart;
	cout << letterStart;
	letterStart = letterStart + 1;
	cout << letterStart << endl;


   return 0;
}

#include <iostream>
using namespace std;

/*
	Define a character variable letterStart. Read the character from the user, print that letter and the next letter in the alphabet. Sample output assuming the user enters 'a':
	ab
*/

int main() {

   /* Your solution goes here  */
	char letterStart = '?';
	char nextLetter = '?';

	cin >> letterStart;
	cout << letterStart;

	nextLetter = letterStart +1;

	cout << nextLetter;

   return 0;
}

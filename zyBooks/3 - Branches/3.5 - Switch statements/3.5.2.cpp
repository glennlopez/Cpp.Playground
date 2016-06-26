#include <iostream>
using namespace std;

/*
Write a switch statement that checks origLetter. If 'a' or 'A', print "Alpha". If 'b' or 'B', print "Beta". For any other character, print "Unknown". Use fall-through as appropriate. End with newline.
*/

int main() {
   char origLetter = '?';

   origLetter = 'a';

   /* Your solution goes here  */
	switch (origLetter) {
		case 'a':
		case 'A':
			cout << "Alpha";
		break;

		case 'b':
		case 'B':
			cout << "Beta";
		break;

		default:
			cout << "Unknown";
		break;
	}

	cout << endl;
   return 0;
}

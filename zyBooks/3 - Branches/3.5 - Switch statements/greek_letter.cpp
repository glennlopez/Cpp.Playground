#include <iostream>
using namespace std;

/*
	Write a switch statement that checks origLetter. If 'a' or 'A', print "Alpha". If 'b' or 'B', print "Beta". For any other character, print "Unknown". Use fall-through as appropriate. End with newline.
*/

int main() {
   char origLetter = '?';

	cout << "Type a letter to conver: ";
	cin >> origLetter;
	//getline(cin, origLetter);

   //origLetter = 'a';

   /* Your solution goes here  */
	switch (origLetter) {
		case 'a':
		case 'A':
		cout << "Alpha" << endl;
		break;

		case 'b':
		case 'B':
		cout << "Beta" << endl;
		break;

		default:
		cout << "Unknown" << endl;
		break;
	}

   return 0;
}

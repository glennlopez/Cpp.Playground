#include <iostream>
using namespace std;

/*
	Write an if-else statement to describe an object. Print "Balloon" if isBalloon is true and isRed is false. Print "Red balloon" if isBalloon and isRed are both true. Print "Not a balloon" otherwise. End with newline.
*/

int main() {
   bool isRed = false;
   bool isBalloon = false;

   /* Your solution goes here  */
	if( (isBalloon) && !(isRed) ){
		cout << "Balloon";
	}
	else if( (isRed) && (isBalloon) ){
		cout << "Red balloon";
	}
	else{
		cout << "Not a balloon";
	}

	cout << endl;
   return 0;
}

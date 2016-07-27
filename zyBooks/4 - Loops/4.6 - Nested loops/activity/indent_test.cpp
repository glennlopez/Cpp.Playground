#include <iostream>
using namespace std;

/*
	Print numbers 0, 1, 2, ..., userNum as shown, with each number indented by that number of spaces. For each printed line, print the leading spaces, then the number, and then a newline. Hint: Use i and j as loop variables (initialize i and j explicitly). Note: Avoid any other spaces like spaces after the printed number. Ex: userNum = 3 prints:
	0
	 1
	  2
	   3
*/

int main() {
   int userNum  = 0;
   int i = 0;
   int j = 0;

   /* Your solution goes here  */


	cout << "How many numbers: "; //debug
	cin >> userNum; //debug

	for (i = 0; i <= userNum; i++){
		for (j = 1; j <= i; j++){
			cout << " ";
		}
		cout << i << endl;
	}

	cout << "end of loop" << endl;	//debug


   return 0;
}

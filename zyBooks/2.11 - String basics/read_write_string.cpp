#include <iostream>
#include <string>
using namespace std;

/*
	A user types a word and a number. Read them into the provided variables.
	Then print: word_number. End with newline. Example output if user entered:
	Amy 5
					Amy_5
*/

int main() {
   string userWord;
   int userNum = 0;

   /* Your solution goes here  */
	//cout << "Type word: "; <--- dont need
	cin >> userWord;

	//cout << "Type number: "; <--- dont need
	cin >> userNum;

	cout << userWord << "_" << userNum << endl;

   return 0;
}

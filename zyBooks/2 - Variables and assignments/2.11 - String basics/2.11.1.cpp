#include <iostream>
#include <string>
using namespace std;

/*

	A user types a word and a number on a single line. Read them into the provided variables. Then print: word_number. End with newline. Example output if user entered: Amy 5
	Amy_5

*/

int main() {
   string userWord;
   int userNum = 0;

   /* Your solution goes here  */
	cin >> userWord;
	cin >> userNum;
	cout << userWord << "_" << userNum << endl;


   return 0;
}

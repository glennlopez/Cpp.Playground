#include <iostream>
using namespace std;

/*

	Complete the PrintTicTacToe function with char parameters horizChar and vertChar that prints a tic-tac-toe board with the characters as follows. End with newline. Ex: PrintTicTacToe('~', '!') prints:
	x!x!x
	~~~~~
	x!x!x
	~~~~~
	x!x!x

*/

void PrintTicTacToe(char horizChar, char vertChar) {
	unsigned int horizNum;;

   /* Your solution goes here  */
	cout << "x" << vertChar << "x" << vertChar << "x" << endl;

	horizNum = 5;
	while(horizNum-- > 0){
		cout << horizChar;
	}
	cout << endl;

	cout << "x" << vertChar << "x" << vertChar << "x" << endl;

	horizNum = 5;
	while(horizNum-- > 0){
		cout << horizChar;
	}
	cout << endl;

	cout << "x" << vertChar << "x" << vertChar << "x" << endl;


   return;
}

int main() {
   PrintTicTacToe('~', '!');

   return 0;
}

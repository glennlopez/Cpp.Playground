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

   /* Your solution goes here  */
	cout << 'x' << vertChar << 'x' << vertChar << 'x' << endl;
	cout << horizChar << horizChar << horizChar << horizChar << horizChar << endl;
	cout << 'x' << vertChar << 'x' << vertChar << 'x' << endl;
	cout << horizChar << horizChar << horizChar << horizChar << horizChar << endl;
	cout << 'x' << vertChar << 'x' << vertChar << 'x' << endl;

   return;
}

int main() {
   PrintTicTacToe('~', '!');

   return 0;
}

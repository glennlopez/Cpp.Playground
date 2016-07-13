#include <iostream>
using namespace std;

/*
	Write a for loop that prints: 1 2 .. userNum. Print a space after each number, including after the last number. Ex: userNum = 4 prints:
	1 2 3 4
*/

int main() {
   int userNum = 0;
   int i = 0;

   userNum = 4;

   /* Your solution goes here  */
	for (i = 1; i <= userNum; i++){
		cout << i << " ";
	}


   cout << endl;

   return 0;
}

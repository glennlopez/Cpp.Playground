#include <iostream>
using namespace std;

/*
	Write a while loop that prints 1 to userNum, using the variable i. Follow each number (even the last one) by a space. Assume userNum is positive. Ex: userNum = 4 prints:
		1 2 3 4
*/

int main() {
   int userNum = 0;
   int i = 0;

   userNum = 4;    // Assume positive

   /* Your solution goes here  */
	while(i < userNum){
		i = i + 1;
		cout << i << " ";
	}

   cout << endl;

   return 0;
}

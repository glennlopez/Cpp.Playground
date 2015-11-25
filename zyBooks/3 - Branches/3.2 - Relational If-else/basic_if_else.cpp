#include <iostream>
using namespace std;

/*
	Write an if-else statement for the following:
	If userTickets is less than 5, execute numTickets = 1. Else, execute numTickets = userTickets.
	Ex: if userTickets is 3, then numTickets = 1.
*/

int main() {
   int numTickets = 0;
   int userTickets = 3;

   /* Your solution goes here  */
	if (userTickets < 5){
		numTickets = 1;
	}
	else {
		numTickets = userTickets;
	}

   cout << numTickets << endl;
   return 0;
}

#include <iostream>
#include <cstdlib>   // Enables use of rand()
using namespace std;

/*
	Write an expression that continues to bid until the user enters 'n'. 
*/

int main() {
   char keepGoing = '-';
   int nextBid = 0;

   srand(5);
   while (/* Your solution goes here  */) {
      nextBid = nextBid + (rand()%10 + 1);
      cout << "I'll bid $" << nextBid << "!" << endl;
      cout << "Continue bidding? ";
      cin >> keepGoing;
   }
   cout << endl;

   return 0;
}

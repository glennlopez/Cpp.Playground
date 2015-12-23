#include <iostream>
using namespace std;

/*
	Write a function NumberOfPennies() that returns the total number of pennies given a number of dollars and (optionally) a number of pennies. Ex: 5 dollars and 6 pennies returns 506.
*/

//prototype with default parameter
int NumberOfPennies(int UsrDollars, int UsrPennies = 0);
void AskUsr(int& dollars, int& pennies);



//main() was modified from the original question to allow user interaction
int main() {
   //cout << NumberOfPennies(5, 6) << endl; // Should print 506
   //cout << NumberOfPennies(4) << endl;    // Should print 400
	int dollars = 0;
	int pennies = 0;

	AskUsr(dollars, pennies);
	cout << "A total of: " << NumberOfPennies(dollars, pennies) << " pennies." << endl;

   return 0;
}

/* solution here  */
int NumberOfPennies(int UsrDollars, int UsrPennies){
	int totalPennies = 0;
	int penniesInDollar = 100;

	totalPennies = (UsrDollars * penniesInDollar) + UsrPennies;

	return totalPennies;
}

/* usr prompt */
void AskUsr(int& dollars, int& pennies){
	cout << "How many dollars? ";
	cin >> dollars;

	cout << "How many pennies? ";
	cin >> pennies;

	return;
}

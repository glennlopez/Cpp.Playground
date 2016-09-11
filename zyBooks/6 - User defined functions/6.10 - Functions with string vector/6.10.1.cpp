#include <iostream>
#include <string>
using namespace std;

/*
	Use function GetUserInfo to get a user's information. If user enters 20 and Holly, sample program output is:

		Holly is 20 years old. 
*/

void GetUserInfo(int& userAge, string& userName) {
   cout << "Enter your age: " << endl;
   cin >> userAge;
   cout << "Enter your name: " << endl;
   cin >> userName;
   return;
}

int main() {
   int userAge = 0;
   string userName = "";

   /* Your solution goes here  */

   cout << userName << " is " << userAge << " years old." << endl;

   return 0;
}

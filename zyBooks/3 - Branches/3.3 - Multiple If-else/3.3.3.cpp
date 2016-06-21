#include <iostream>
using namespace std;

/*
	Write an if-else statement with multiple branches. If givenYear is 2100 or greater, print "Distant future" (without quotes). Else, if givenYear is 2000 or greater (2000-2099), print "21st century". Else, if givenYear is 1900 or greater (1900-1999), print "20th century". Else (1899 or earlier), print "Long ago". Do NOT end with newline.
*/

int main() {
   int givenYear = 0;

   givenYear = 1776;

   /* Your solution goes here  */
	if(givenYear >= 2100){
		cout << "Distant future" << endl;
	}

	else if((givenYear >= 2000) || (givenYear  <= 2099)){
		cout << "21st century" << endl;
	}

	else{
		cout << "Long ago" << endl;
	}

   return 0;
}

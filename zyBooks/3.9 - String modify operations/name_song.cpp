#include <iostream>
#include <string>
using namespace std;

/*
	Modify secondVerse to play "The Name Game" (a.k.a. "The Banana Song", see Wikipedia.org), by replacing "(Name)" with userName but without the first letter. Ex: if userName = "Katie", the program prints:
	Banana-fana fo-fatie!
*/

int main() {
   string secondVerse = "Banana-fana fo-f(Name)!";
   string userName = "Glenn";

   userName.erase(userName.begin()); // Removes first char from userName

   /* Your solution goes here  */
	userName.resize(userName.length());
	secondVerse = secondVerse.replace(secondVerse.find("(Name)"),6 ,userName);

	cout << secondVerse << endl;






	/*
	secondVerse.resize(secondVerse.length() - 7);
	userName.resize(userName.length());
	secondVerse = secondVerse + userName + '!';

	cout << secondVerse << endl;
	*/



	/*
	userName.resize(userName.length() + 1);

	secondVerse = secondVerse.replace(secondVerse.find("(Name)"), userName.length(), userName);

   cout << secondVerse << endl;
	*/

   return 0;
}

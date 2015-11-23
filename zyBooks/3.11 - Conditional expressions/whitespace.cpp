#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
	Replace any space ' ' by '_' in 2-character string passCode. If no space exists, the program should not print anything. Sample output for the given program:
	1_
*/

int main() {
   string passCode;

   passCode = "2 ";

   /* Your solution goes here  */
	int spaceIndex = passCode.find(' ');
	if (spaceIndex >= 0){
		passCode.replace(spaceIndex, 1, "_");
	}
	spaceIndex = passCode.find(' ');
	if (spaceIndex >= 0){
		passCode.replace(spaceIndex, 1, "_");
	}

   cout << passCode << endl;
   return 0;
}

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
	Replace any space ' ' by '_' in 2-character string passCode. Sample output for the given program:
	1_
*/


int main() {
   string passCode;

   passCode = "1 ";

   /* Your solution goes here  */
	for(unsigned int i = 0; i < passCode.length(); i++){
		if(isspace(passCode.at(i))){
			passCode.at(i) = '_';
		}
	}

   cout << passCode << endl;
   return 0;
}

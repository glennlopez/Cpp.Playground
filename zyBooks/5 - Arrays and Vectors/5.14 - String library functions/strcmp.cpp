#include <iostream>
#include <cstring>
using namespace std;
/*
	int strcmp(str1, str2)
	Returns 0 if str1 and str2 are equal, non-zero if they differ.
*/

int main(){

	char myString1 = "Glenn";
	char myString2 = "Glenn";
	char myString2 = "glenn";
	char myString2 = "Glenn Lopez";

	cout << strcmp(myString1, myString2);

	cout << endl;
	return 0;
}

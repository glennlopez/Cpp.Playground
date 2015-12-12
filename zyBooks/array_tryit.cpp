/*
	This is a simple program for trying out C-String arrays in C++
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	char fnameArray[6] = "Glenn";
	char lnameArray[6] = "Lopez";

	int i = 0;

	//using while loop
	while (fnameArray[i] != '\0'){
		cout << fnameArray[i];
		i++;
	}

	cout << " ";

	//using for loop
	for (i = 0; lnameArray[i] != '\0'; i++){
		cout << lnameArray[i];
	}

	cout << endl;
	return 0;
}

/*
	Gettng a string from the user using getline and convert
	any spaces to -
*/

#include <iostream>
#include <string>
using namespace std;

//loop variables
int i = 0;


/* mod space */
void changeSpace(string& modStr){

	//loop through strings
	for (i = 0; i < modStr.length(); i++){

		//if space found change to -
		if (modStr.at(i) == ' '){
			modStr.at(i) = '-';
		}
	}
	return;
}

/* mod any neg num to pos num */
void changeNeg(string& modNeg){
	//loop through string
	for (i = 0; i < modNeg.length(); i++){
		// if negative number found, change to positive
		if (modNeg.at(i) < '.'){
			modNeg.at(i) = '|';
		}
	}
	return;
}

/* mod any "glenn" to "king" */
void changeGlenn(string& modGlenn){
	//loop through string
	for (i =0; i < modGlenn.length(); i++){
		if (modGlenn.at(i) == 'g' && modGlenn.at(i +1) == 'l' && modGlenn.at(i+2 == 'e')){
			modGlenn.at(i) = 'G';
		}
	}
}


/* Main function */
int main(int argc, char const *argv[]) {
	string usrString;

	//get string from using
	cout << "Type your string: ";
	getline(cin, usrString);

	//convert string using pass-by-ref
	changeGlenn(usrString);
	//changeNeg(usrString);
	changeSpace(usrString);


	//output modified string
	cout << "Modified string: " << usrString;
	cout << endl;

	return 0;
}

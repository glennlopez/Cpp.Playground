#include <iostream>
#include <cstring>
using namespace std;

/*
	strchr(sourceStr, searchChar)

	Returns NULL if searchChar does not exist in sourceStr. (Else, returns address of first occurrence, discussed elsewhere).
	NULL is defined in the cstring library.
*/

int main(){

	char myString[30] = "?";
	int count = 0;

	cout << "Enter your first name: ";
	cin >> myString;

	//check if the string has the letter N
	if( (strchr(myString, 'n') != NULL) || (strchr(myString, 'N') != NULL ) ){
		//count the number of N's in the name
		for(unsigned int i = 0; myString[i] != '\0'; i++){
			if((myString[i] == 'n') || (myString[i] == 'N')){
				count++;
			}
		}
		cout << "Your name contains " << count << " n's" << endl;
	}
	else{
		cout << "Your name does not contain an 'n'" << endl;
	}

	cout<< endl;
	return 0;
}

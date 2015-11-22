#include <iostream>
#include <string>
using namespace std;

/*

	Print "Censored" if userInput contains the word "darn", else print userInput. End with newline.

	Note: These activities may test code with different test values. This activity will perform three tests, with userInput of "That darn cat.", then with "Dang, that was scary!", then with "I'm darning your socks.". See How to Use zyBooks.

	Also note: If the submitted code has an out-of-range access., the system will stop running the code after a few seconds, and report "Program end never reached." The system doesn't print the test case that caused the reported message.

*/

int main() {
   string userInput;

   userInput = "That darsn cat.";

   /* Your solution goes here */
	int isPresent = userInput.find("darn");

	if (isPresent > 0){
		cout << "Censored" << endl;
	}

	else{
		cout << userInput << endl;
	}


	//WRONG ANSWERS
	/* string badword;
	badword = "darn";

	int wordLocation = userInput.find(badword);
	int wordLength = badword.length();

	string censor = userInput.substr(wordLocation, wordLength);



	//DEBUG
	cout << test << endl;
	cout << censor << endl;
	cout << wordLocation << endl;
	cout << wordLength << endl;



	/*
	bool result = userInput.find("darn");

	if (result == 1){
		cout << "Censored" << endl;
	}
	else{
		cout << userInput;
	}
	*/

   return 0;
}

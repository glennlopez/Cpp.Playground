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

   userInput = "That darn cat.";

   /* Your solution goes here  */





	//WRONG ANSWERS//---------------------------------
	/*

	string word = "darn";	//word to censor (used for comparison)
	int wordLength = word.length();	//length of word to censor
	int indexDarn = userInput.find('d');	//find the first letter on censored word
	string find = userInput.substr(indexDarn, wordLength); //place the suspected bad-word in a var

	//if the found word and cencored word matches censor the found word
	if(word == find){
		cout << "Censored" << endl;
	}
	else{
		cout << userInput << endl;;
	}

	*/

   return 0;
}

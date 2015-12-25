//standard libs
#include <iostream>
#include <vector>
#include <string>

//user defined libs
#include "main.h"				//defines and prototypes
#include "menu.cpp"			//navigation
#include "randNumGen.cpp"	//generates random numbers

using namespace std;

int menuSelection = 0;

int main(int argc, char const *argv[]) {

	//load text menu
	LoadMenuMain();
	GetMenuAction(menuSelection);

	//switch case -- main menu selections
	//needs a do while statement so it doesnt exit on invalid num
	switch (menuSelection) {
		case 1:
		//GENERATE RANDOM NUMBER
			LoadMenu1();
			GetMenuAction(menuSelection);
			RandomNumberCase(menuSelection);
		break;

		default:
		cout << "That number is outside the parameters." << endl;
		break;
	}

	return 0;
}

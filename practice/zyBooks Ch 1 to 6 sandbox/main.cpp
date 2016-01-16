//standard libs
#include <iostream>
#include <vector>
#include <string>

//user defined libs
#include "main.h"			//store include feature calls here
#include "menu.cpp"		//place new text menus here

using namespace std;

int menuSelection = 0;
int main(int argc, char const *argv[]) {

	//load text menu
	LoadMenuMain();
	GetMenuAction(menuSelection);

	//switch case -- main menu selections
	switch (menuSelection) {
		case 1:
		//GENERATE RANDOM NUMBER ----
			LoadMenu1();
			GetMenuAction(menuSelection);
			RandomNumberCase(menuSelection);
		break;

		case 2:
		//PLAY SIMON SAYS ----
			PlaySimonSays();
		break;

		case 4:
		//PLAY SIMON SAYS ----
			LoadMenu4();
			GetMenuAction(menuSelection);
			Calculators(menuSelection);
		break;

		default:
		cout << "Exiting: number picked is outside the parameters." << endl;
		cout << endl;
		break;
	}

	return 0;
}

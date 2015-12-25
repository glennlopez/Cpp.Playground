//standard libs
#include <iostream>
#include <vector>
#include <string>

//user defined libs
#include "main.h"
#include "menu.cpp"			//navigation
#include "randNumGen.cpp"	//generates random numbers
#include "simonSays.cpp"	//game of simon says

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

		default:
		cout << "Exiting: number picked is outside the parameters." << endl;
		cout << endl;
		break;
	}

	return 0;
}

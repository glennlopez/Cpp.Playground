#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <vector>
using namespace std;

//title block
void TitleBlockCalc(){
	cout << endl;
	cout << "CALCULATORS" << endl;
}

//Winter Wonderland JP Profits
void WonderlandCalc(void){

}


//** SWITCH CASE STATEMENTS **//
void Calculators(int menuSelection){
	switch (menuSelection) {
		case 1:
		system("clear");
		TitleBlockCalc();
		cout << "test ";
		cout << endl;
		break;

		default:
		cout << "Exiting: number picked is outside the parameters." << endl;
		cout << endl;
		break;
	}
}

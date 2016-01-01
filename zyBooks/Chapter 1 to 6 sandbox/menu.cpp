#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*
	Note: the switch-case statements will be in thier respected
	cpp file. The menu.cpp file is strictly for listing menu.
*/

using namespace std;

//MAIN MENU
void LoadMenuMain(){
	system("clear");
	cout << endl;
	cout << "MAIN MENU" << endl;
	cout << "1) Random Number Generator" << endl;
	cout << "2) Play Simon Says" << endl;
	cout << "3) Convert Units" << endl;
	cout << "4) Calculators" << endl;
}

//1) MENU
void LoadMenu1(){
	system("clear");
	cout << endl;
	cout << "GENERATE RANDOM NUMBERS" << endl;
	cout << "1) Generate a single random number" << endl;
	cout << "2) Generate 'x' number of random numbers" << endl;
	cout << "3) Generate random 'x' numbers of random numbers" << endl;
}

//4) MENU
void LoadMenu4(){
	system("clear");
	cout << endl;
	cout << "CALCULATORS" << endl;
	cout << "1) Winter Wonderland JP Profit" << endl;
}

//STORE USER SELECTION
void GetMenuAction(int& choice){
	cout << endl;
	cout << "Make your choice: ";
	cin >> choice;
}

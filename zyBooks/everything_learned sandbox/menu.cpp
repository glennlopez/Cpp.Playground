#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//MAIN MENU
void LoadMenuMain(){
	system("clear");
	cout << endl;
	cout << "MAIN MENU" << endl;
	cout << "1) Generate Random Numbers" << endl;
	cout << "2) " << endl;
	cout << "3) " << endl;
	cout << "4) " << endl;
	cout << "5) " << endl;
	cout << "6) " << endl;
}

//1) MENU
void LoadMenu1(){
	system("clear");
	cout << endl;
	cout << "GENERATE RANDOM NUMBERS" << endl;
	cout << "1) Single number" << endl;
	cout << "2) x number of random numbers" << endl;
	cout << "3) Random x numbers of random numbers" << endl;
}

//STORE USER SELECTION
void GetMenuAction(int& choice){
	cout << endl;
	cout << "Make your choice: ";
	cin >> choice;
}

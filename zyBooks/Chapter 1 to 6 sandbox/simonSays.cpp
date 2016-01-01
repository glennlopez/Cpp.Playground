#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int simonUserScore = 0;
int simonDificulty = 0;
int simonTimer = 0;

void SimonWelcomScreen(){
	system("clear");
	cout << "/////////////////////////" << endl;
	cout <<"  S I M O N  ~ S A Y S" << endl;
	cout <<"   (by: glennlopez)" << endl;
	cout <<"/////////////////////////" << endl;
	cout << endl;
	cout << endl;
	cout << "RULES: Retype every number you see."<< endl;
}

//scoring formula
void GainScore(int& simonUserScore, int& simonDificulty){
	simonUserScore = simonUserScore + 1;
	simonDificulty++;
}



//** SIMON SAYS MAIN **/
void PlaySimonSays(){


	SimonWelcomScreen();
	//game function goes here...
	cout << endl;
}

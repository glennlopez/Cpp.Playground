#include <iostream>
#include "Human.h"
#include "Human.cpp"
using namespace std;

//System includes for terminal system() calls
#include <stdio.h>
#include <stdlib.h>

/*
	https://www.youtube.com/watch?v=2KvslbLHTUY
*/

int main(){
	system("clear");

	Human Glenn("Glenn", 12);
	Human Clone = Glenn;

	//Clone = Glenn;

	Glenn.info();
	Clone.info();

	cout << endl;
	return 0;
}

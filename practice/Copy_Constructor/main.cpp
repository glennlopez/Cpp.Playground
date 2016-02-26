#include <iostream>
#include "Human.h"
#include "Human.cpp"
using namespace std;

/*
	https://www.youtube.com/watch?v=2KvslbLHTUY
*/

int main(){

	Human Glenn("Glenn", 12);
	Human Clone = Glenn;

	//Clone = Glenn  		//<-- This doesnt work!

	Glenn.info();
	Clone.info();

	cout << endl;
	return 0;
}

#include <iostream>
#include "Human.h"
#include "Human.cpp"
using namespace std;

/*
	https://www.youtube.com/watch?v=2KvslbLHTUY
*/

int main(){

	Human Glenn("Glenn", 12);
	Human Clone("CloneGlenn", 1);

	Clone = Glenn;
	Glenn.info();
	Clone.info();

	cout << endl;
	return 0;
}

//pre-processors
#include <iostream>
#include <vector>
#include "Credentials.h"
#include "Credentials.cpp"
using namespace std;


int main(){

	vector<Credentials> netflix;
	generateUser(netflix);
	printUser(netflix);

	cout << endl;
	return 0;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){

	//NOTE: when compiling in g++ use g++ -std=c++11 filename.cpp

	for(int i: {1,2,3,5,7,11,13,17,19}){
		cout << i << " ";
	}


	cout << endl;
	return 0;
}

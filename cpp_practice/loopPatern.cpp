#include <iostream>
using namespace std;

int main(){

	int x, y;
	int i, j;

	x = 5;
	y = 3;

	for(i = 1; i <= y; i++){
		for(j = 1; j <=x; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}

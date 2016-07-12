#include <iostream>
using namespace std;

int main(){



	int x, y;

	/*
	Turn the following into a conditional formatting

		if(x == 1){
			y = 2;
		}
		else{
			y = 999;
		}

	*/


	cout << "1 or 2: ";
	cin >> x;


	y = (x==1)? 2 : 999;


	cout << y << endl;


	cout << endl;
	return 0;
}

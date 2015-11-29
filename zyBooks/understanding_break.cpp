#include <iostream>
using namespace std;

/*
	This shows how break works. A break is triggered if j has a number
	lower than 0. ie: i = 10 | j = -1 outputs 10. If j = 0 then "i" will
	increment infinitely.

	Notice how the while loop can be stopped using a nested if statement
	containing "break;"
*/

int main(int argc, char const *argv[]) {
	/* code */
	int i = 0;
	int j = 0;

	cout << "Value for i: ";
	cin >> i;

	cout << "Value for j: ";
	cin >> j;

	while (!(i <= 0)){
		cout << i << " ";
		i++;


		if (j >= 0){
			cout << endl;
			cout << "break";
			break;
		}


	}

	return 0;
}

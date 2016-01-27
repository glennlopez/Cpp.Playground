#include <iostream>


#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
	To do:
		- Manipulate GPIO using C++
		- Use bash to call compiled C++ files

	Goal:
		- Use compiled C++ programs to add security to home automation
*/

int main(){

	//pin 1 or 0
	echo 1 > /sys/class/gpio/gpio21/value
	pin(8, 1);
	pin(8, 0);

	//setting input or output
	echo out > /sys/class/gpio/gpio21/direction
	pin.out(8);


	cout << endl;
	return 0;
}

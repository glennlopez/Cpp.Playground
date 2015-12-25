/*
	Convert min to hours + min:
	1 hour = 60 min
*/

#include <iostream>
using namespace std;

/*
	We are not returning anything, rather.. we are passing the values
	excecuted in the function to the & referance (int& hour, in& min).
	so we use void.

	Note: return 1 or return var only returns 1 value. Passing by referance
	allows us to return more than one results
*/
void convert(int usrMin, int& hour, int& min){
	/*
		& sign after the datatype (int&) means that we are
		tryining to pass the results of the function to that
		variable.
	*/

	hour = usrMin / 60; //<-- results of this command is passed to int& hour
	min = usrMin % 60; //<-- results of this cpmmand is passed to int& min

	return; //<-- we still have return because we are returning by referance
}

int main() {
	//vars need to be declared first
	int usrMin = 0; //<-- user input
	int hour = 0; //<-- we get the results from the convert() function
	int min = 0; //<-- we get the results from the convert() function

	//ask user for input
	cout << "How many min: ";
	cin >> usrMin;

	//convert cin using convert function
	convert(usrMin, hour, min);

	//output values
	cout << hour << " hours and " << min << " min.";
	cout << endl;


	return 0;
}

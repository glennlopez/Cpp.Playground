#include <iostream>
#include "Students.h"
using namespace std;

//constructor
Students::Students(){
	//Runs automatically when a Students object is defined
	cout << "Constructor executed." << endl;
}

//destructor
Students::~Students(){
	/* Runs automatically when program exits IF a Students object
	 * has been defined OR when
	 */
	cout << "Deconstructor executed." << endl;
}

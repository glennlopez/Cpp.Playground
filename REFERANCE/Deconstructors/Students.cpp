#include <iostream>
#include "Students.h"
using namespace std;

//constructor
Students::Students(){
	//Runs automatically when a Students object is defined
	cout << "Constructor executed." << endl;

	age = 0; 		//<-- sets the default age to 0 when an object is made
}

//destructor
Students::~Students(){
	/* Runs automatically when program exits IF a Students object
	 * has been defined OR when a pointer class is alocated to heap
	 * and a "delete" has been called to unalocate a class object pointer
	 */
	cout << "Deconstructor executed." << endl;


}

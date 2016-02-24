#include <iostream>
#include "Students.h"
using namespace std;

//constructor
Students::Students(){
	//Runs automatically when a Students object is created
	cout << "Constructor executed." << endl;

	age = 0;					//stack memory	integer
	ptrData = new int;	//heap memory	integer
		*ptrData = 10;
}

//destructor
Students::~Students(){
	/* Runs automatically when program exits IF a Students object
	 * has been defined OR when a pointer class is alocated to heap
	 * and a "delete" has been called to unalocate a class object pointer
	 */
	cout << "Deconstructor executed." << endl;

	//NOTE: we also need to deconstruct the pointer data inside the object

	delete ptrData;	//<-- frees memory used by pointers inside an object
	return;
}

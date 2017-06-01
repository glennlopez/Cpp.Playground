#include <iostream>
#include "Student.h"
#include "Student.cpp"
using namespace std;

/*
	Test the student class in this main.cpp
		- accessors
		- mutators
		- functions
*/

int main(){

	StudentInfo st_01;

	st_01.setFname("Glenn");
	st_01.setLname("Lopez");

	cout << st_01.getFname() << " " << st_01.getLname() << endl;


	cout << endl;
	return 0;
}

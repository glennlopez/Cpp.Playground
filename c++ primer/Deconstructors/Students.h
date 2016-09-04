#include <iostream>
using namespace std;

#ifndef STUDENTS_H
#define STUDENTS_H

class Students{
public:
	Students();
	~Students(); 	//<-- This is the deconstructor/destructor

protected:

private:
	int age;
	int *ptrData;

};

#endif //STUDENTS_H

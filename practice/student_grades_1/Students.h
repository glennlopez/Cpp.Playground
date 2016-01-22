//headers

#ifndef STUDENTS_H
#define STUDENTS_H

#include <iostream>
#include <string>
using namespace std;

class Students{
private:
	//Member variables
	string newName;
	char newGrade;

public:
	//Default constructor
	Students();

	//Overload constructor
	Students(string ,char);

	//Destructor
	~Students();

	//Accessor functions
	string getName() const;
		//getName
		//@return string - name of student
	char getGrade() const;
		//getGrade
		//@reutrn char - get grade of student

	//Mutators
	void setName(string);
		//setName
		//@param string - set the name of student

	void setGrade(char);
		//setGrade
		//@param char - set the grade of students

};

#endif

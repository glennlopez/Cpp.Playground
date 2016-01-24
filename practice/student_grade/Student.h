#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student{
private:
	//Class memebers
	string StudentName;
	char StudentGrade;

public:
	//default constructor
	Student();

	//overload constructor
	Student(string, char);

	//destructor
	~Student();

	//accessors
	string getName();
	char getGrade();

	//mutators
	void setName(string name);
	void setGrade(char grade);
};
#endif

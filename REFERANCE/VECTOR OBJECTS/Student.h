//https://www.youtube.com/watch?v=iPlW5tSUOUM

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
	//default constructor
	Student();

	//overload constructor
	Student(string, char);

	//distructor
	~Student();

	//accessors
	string getName() const;
	char getGrade() const;

	//mutators
	void setName(string name);
	void setGrade(char grade);


private:
	//member variables
	string newName;
	char newGrade;
};

#endif

//https://www.youtube.com/watch?v=iPlW5tSUOUM
#include "Student.h"

//default constructor
Student::Student(){
	newGrade = '?';
}

//overload constructor
Student::Student(string name, char grade){
	newName = name;
	newGrade = grade;
}

//distructor
Student::~Student(){
	//empty
}

//accessors
string Student::getName() const{
	return newName;
}
char Student::getGrade() const{
	return newGrade;
}

//mutators
void Student::setName(string name){
	newName = name;
}
void Student::setGrade(char grade){
	newGrade = grade;
}

#include <iostream>
#include <vector>
#include <string>

#include "Student.h"

using namespace std;


//** CLASS DEFINITIONS **//

//default constructor
Student::Student(){
	StudentName = "undefined";
	StudentGrade = 0;
}

//overload constructor
Student::Student(string name, char grade){
	StudentGrade = grade;
	StudentName = name;
}

//destructor
Student::~Student(){
	//empty
}

//accessors
string Student::getName(){
	return StudentName;
}
char Student::getGrade(){
	return StudentGrade;
}

//mutators
void Student::setName(string name){
	StudentName = name;
}
void Student::setGrade(char grade){
	StudentGrade = grade;
}

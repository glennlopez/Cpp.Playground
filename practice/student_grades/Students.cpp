#include "Students.h"

//default constructor
Students::Students(){
	newGrade = ' ';
}

//overload constructor
Students::Students(string name, char grade){
	newName = name;
	newGrade = grade;
}

//Accessors
string Students::getName() const{
	return newName;
}

char Students::getGrade() const{
	return newGrade;
}

//Mutators
void Students::setName(string name){
	newName = name;
}

void Students::setGrade(char grade){
	newGrade = grade;
}

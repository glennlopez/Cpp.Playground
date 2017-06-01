#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

//** Class Definitions **//

//default constructor
StudentInfo::StudentInfo(){
	name_first = "undefined";
	name_last = "undefined";

	gender = '?';

	birth_m = -99;
	birth_d = -99;
	birth_y = -9999;
}

//overload constructor - fname, lname, gender, m, d, y
StudentInfo::StudentInfo(string fname, string lname, char student_gender, int month, int day, int year){
	name_first = fname;
	name_last = lname;

	gender = student_gender;

	birth_m = month;
	birth_d = day;
	birth_y = year;
}

//accessors
string StudentInfo::getFname(){
	return name_first;
}
string StudentInfo::getLname(){
	return name_last;
}

char StudentInfo::getGender(){
	return gender;
}

int StudentInfo::getBirthMonth(){
	return birth_m;
}
int StudentInfo::getBirthDay(){
	return birth_d;

}
int StudentInfo::getBirthYear(){
	return birth_y;
}

//mutators
void StudentInfo::setFname(string fname){
	name_first = fname;
}
void StudentInfo::setLname(string lname){
	name_last = lname;
}

void StudentInfo::setGender(char Sgender){
	gender = Sgender;
}

void StudentInfo::setBirthMonth(int month){
	birth_m = month;
}
void StudentInfo::setBirthDay(int day){
	birth_d = day;
}
void StudentInfo::setBirthYear(int year){
	birth_y = year;
}


//** Function Definitions **//

//Add Student to a vector
void AddStudent(vector<StudentInfo>& vectorname){
	/* TODO:
		- define variables to add
		- place variables into an object
		- push object to vector
	*/

	cout << "How many students to add: ";
	unsigned int numStudents;
	cin >> numStudents;

	//FIXME: add a forloop for adding (x) students

}

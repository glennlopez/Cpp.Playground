#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class StudentInfo{

private:
	string name_first;
	string name_last;

	char gender;

	unsigned int birth_m;
	unsigned int birth_d;
	unsigned int birth_y;

public:
	//default constructor
	StudentInfo();

	//overload constructor - fname, lname, gender, m, d, y
	StudentInfo(string, string, char, int, int, int);

	//accessors
	string getFname();
	string getLname();

	char getGender();

	int getBirthMonth();
	int getBirthDay();
	int getBirthYear();

	//mutators
	void setFname(string);
	void setLname(string);

	void setGender(char);

	void setBirthMonth(int);
	void setBirthDay(int);
	void setBirthYear(int);
};

#endif

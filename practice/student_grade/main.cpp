#include <iostream>
#include <string>
#include <vector>

#include "Student.h"
#include "Student.cpp"


using namespace std;

/*	SYNOPSIS:

	Ask user how many students to add -> (x), then loop{

		Promt user for Name and grade
		store those in a variable

		Pass name and grade variables to a class object...
		then push_back that object into a vector

		Output all elements in the vector | ie:
		vector1 name, grade
		vector2 name, grade
		vector3 name, grade

	} (x) number of times

*/


int main(){

	//Vector for storing students in the classroom
	vector<Student> myClassroom;
	string name;
	int grade;
	unsigned int classroomSize = 0;

	//FIXME: add these functions after everything is complete
	//addStudents(myClassroom);
	//printVectorElements(myClassroom);

	cout << "How many students to add: ";
	cin >> classroomSize;

	unsigned int i = 0;
	for(i = 0; i < classroomSize; i++){
		cout << "Student Name: ";
		cin >> name;

		cout << "Student Grade: ";
		cin >> grade;

		//pass the variables to an object
		Student English(name, grade); //<-- instatiate the object English

		//push the object to a vector
		myClassroom.push_back(English);
	}

/*
	//print object elements
	unsigned int j = 0;
	for(j = 0; j < myClassroom.size(); j++){
		cout << "Name: " << myClassroom.at(j).getName() << endl;
		cout << "Grade: " << myClassroom[j].getGrade() << endl;
	}
*/



	cout << endl;
	return 0;
}

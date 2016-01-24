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

void addStudents(vector<Student>& vectorName);
void printStudents(vector<Student>& vectorName);


int main(){
	//Vector for storing students in the classroom
	vector<Student> schoolSubject;

	addStudents(schoolSubject);
	printStudents(schoolSubject);

	cout << endl;
	return 0;
}

void addStudents(vector<Student>& vectorName){
	unsigned int numStudents = 0;
	unsigned int i = 0;

	cout << "How many students to add: ";
	cin >> numStudents;

	for(i = 0; i < numStudents; i++){
		cout << "Enter Student Name: ";
		string sName;
		cin >> sName;

		cout << "Enger Student Grade: ";
		char sGrade;
		cin >> sGrade;

		//pass name and grade to an object
		Student newObject; //<-- instatiate an object for Student class
		newObject.setName(sName);
		newObject.setGrade(sGrade);

		//push the object to a vactor
		vectorName.push_back(newObject); //<-- push english
	}
}

void printStudents(vector<Student>& vectorName){
	unsigned int size = vectorName.size();
	unsigned int i = 0;
	for(i = 0; i < size; i++){
		cout << "Student Name: " << vectorName.at(i).getName();
		cout << endl;

		cout << "Student Grade: " << vectorName[i].getGrade();
		cout << endl;
	}
	cout << endl;
}

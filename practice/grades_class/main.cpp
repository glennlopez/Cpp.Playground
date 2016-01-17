#include <iostream>
#include "subject.cpp"
using namespace std;

/*
	This practice session simulates school grading system
*/

int main(){
	//syntax = grade:name:type:teacher
	Subject math(82, "Math", "Quiz", "Mohamidi");

	math.Print();

	cout << endl;
	return 0;
}

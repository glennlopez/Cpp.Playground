#include <iostream>
using namespace std;

class Subject{
private:
	string name;			//subject name
	int grade;				//subject grade - in % (90% etc..)
	string type;			//Test, Exam, Quiz
	string teacher;		//Teacher name

public:
	//syntax = grade:name:type:teacher
	Subject(int setGrade=0, string setName="?", string setType="?", string setTeacher = "?"){
		name = setName;
		grade = setGrade;
		type = setType;
		teacher = setTeacher;
	}

	void Print(){
		unsigned int x = name.size();
		unsigned int y = type.size();
		unsigned int i = 0;

		cout << "------- " << name << " " << type << " -------" << endl;

		cout << "Grade: " << grade << "%" << endl;
		cout << "Teacher: " << teacher << endl;

		for(i = 0; i < (x + y + (2 * 8) + 1); i++){
			cout << "-";
		}
	}
};

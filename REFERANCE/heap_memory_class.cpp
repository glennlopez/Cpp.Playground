#include <iostream>
using std::cout;
using std::endl;

/*
	NEW CONCEPTS
		-> is a member class operator for pointers
		p->a is similar to (*p).a

*/

class Person{
public:
	int age;
	char gender;
};

int main(){

	Person *p = new Person;
	(*p).age = 20;
	p->age = 30;

	cout << (*p).age << endl;
	cout << p->age << endl;

	//garbage collector (C++ doesnt have an auto gabage collector like java)
	delete p;

	cout << endl;
	return 0;
}

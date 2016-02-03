#include <iostream>
/*
	Using -> or (*x).z to point to a class stored in heap
*/

class Foo{
public:
	int age;
	char gender;
};


int main(){
	using std::cout;
	using std::endl;



	Foo *p = new Foo;
	p->age = 10;

	Foo *glenn = new Foo;
	glenn->gender = 'm';
	glenn->age = 99;

	cout << (*p).age << endl;
	cout << (*glenn).age << endl;
	cout << (*glenn).gender << endl;



	cout << endl;
	return 0;
}

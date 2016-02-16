#include <iostream>

#include "Person.h"
#include "Person.cpp"
using namespace std;

/* This example shows how we can use the "new" operator
 * on classes and objects.
 */

int main(){

	Person *glenn, *anon;	//<-- create a new person object
	glenn = new Person;		//<-- place the object in heap memoery
	anon = new Person;

	/*	NOTES:
	 * When referancing pointers for objects, you use (*object).memberclass()
	 * rather than *object.memeberclass()
	 *
	 * Alternatively you can also use -> operator inplace of (*a).b
	 * In other words, a->b is the same as (*a).b
	 */

	(*glenn).setAge(102);
	cout << "Glenn: " << (*glenn).getAge() << endl;

	anon->setAge(22);
	cout << "Anon: " << anon->getAge() << endl;

	cout << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

/* Below is an example of how to make macros using #define
 * on objects, classes, functions, etc..
 */

void print();
int calculate(int, int);

namespace Genesis{

	class Animal{
	private:
		short age;
		string type;
		string name;

	public:
		Animal(){
			age = 0;
			type = "?";
			name = "?";
		}

		Animal(short a_age, string a_type, string a_name){
			age = a_age;
			type = a_type;
			name = a_name;
		}

		void print(){
			cout << "Name: " << name << endl;
			cout << "Type: " << type << endl;
			cout << "Age: " << age << endl;
			cout << endl;
		}
	};

	class Plant{
	private:
		short age;
		string type;
		string name;

	public:
		Plant(){
			age = 0;
			type = "?";
			name = "?";
		}

		Plant(short a_age, string a_type, string a_name){
			age = a_age;
			type = a_type;
			name = a_name;
		}

		void print(){
			cout << "Name: " << name << endl;
			cout << "Type: " << type << endl;
			cout << "Age: " << age << endl;
			cout << endl;
		}
	};

};

#define SaySomething print();
#define sum(x,y) calculate(x, y);
#define MakeAnimal Genesis::Animal
#define MakePlant Genesis::Plant






int main(){
	/* We can use #define to create a simple function macro
	 * to clean up or make our functions easier to understand
	 */
	SaySomething;
	cout << sum(3, 5);

	/* We can use #define to create a scope macro
	 * for our object definitions
	 */
	MakeAnimal dog(5, "Dog", "Buddy");
	dog.print();

	MakePlant flower(1, "Lily", "Lilith");
	flower.print();

	MakeAnimal human(12, "Human", "Glenn");
	human.print();

	cout << endl;
	return 0;
}






//** FUNCTIONS **//
void print(){
	cout << "testing 1, 2, 3..." << endl;
	cout << endl;
}

int calculate(int x, int y){
	return x + y;
}

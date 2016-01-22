#include <iostream>
#include <string>
using namespace std;

/*
	This is a simple implementation of namesapce accesability
*/

//animal scope
namespace animal{
	class Set{
	private:
		int setAge;
		string name;
		string race;

	public:
		Set(int param = 0, string race = "Undefined", string name = "No Name"){
			setAge = param;
			this-> name = name;
			this-> race = race;
		}
		Set operator+(Set rhs){
			Set totalAge;
			totalAge.setAge = setAge + rhs.setAge;
			return totalAge;
		}

		void Print(){
			cout << "------- " << name << " -------" << endl;
			cout << "Animal race: " << race << endl;
			cout << "Age: " << setAge << endl;

			unsigned int i = 0;
			for(i = 0; i < name.size(); i++){
				cout << "-";
			}

			cout << "----------------" << endl;
		}

	};
}

//animal scope
namespace human{
	class Set{
	private:
		int setAge;
		string name;
		string race;

	public:
		Set(int param = 0, string race = "Undefined", string name = "No Name"){
			setAge = param;
			this-> name = name;
			this-> race = race;
		}
		Set operator+(Set rhs){
			Set totalAge;
			totalAge.setAge = setAge + rhs.setAge;
			return totalAge;
		}

		void Print(){
			cout << "------- " << name << " -------" << endl;
			cout << "Race: " << race << endl;
			cout << "Age: " << setAge << endl;

			unsigned int i = 0;
			for(i = 0; i < name.size(); i++){
				cout << "-";
			}

			cout << "----------------" << endl;
		}

	};
}

int main(){
	//syntax = age:race:name
	animal::Set dog(10, "Dog");
	animal::Set cat(5, "Cat", "Fluffy");
	animal::Set dogcat = dog + cat;

	human::Set carlos(21, "Jamaican", "Carlos");
	human::Set heejoo(18, "Korean", "Heejoo");

	//human::Set dogjoo = animal::dog + heejoo;	//<-- why doesnt this work

	cat.Print();
	dog.Print();
	heejoo.Print();

	cout << endl;
	return 0;
}

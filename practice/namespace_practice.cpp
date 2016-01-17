#include <iostream>
#include <string>
using namespace std;

/*
	This is a simple implementation of namesapce accesability
*/

//animal scope
namespace animal{
	int age = 0;
	string name = "undefined";
	string race = "undefined";
}

//owner scope
namespace owner{
	int age = 0;
	string name = "undefined";
	string race = "undefined";
}


int main(){
	cout << "Type owner name: ";
	cin >> owner::name;

	cout << "Type pet race: ";
	cin >> animal::race;

	cout << "Owner: " << owner::name << endl;
	cout << "Pet type: " << animal::race << endl;

	cout << endl;
	return 0;
}

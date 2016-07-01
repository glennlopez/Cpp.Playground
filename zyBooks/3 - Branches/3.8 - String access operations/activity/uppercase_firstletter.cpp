#include <iostream>
#include <string>
using namespace std;

int main(){

	string firstName = "poekmon";
	string lastName = "master";

	char firstN = firstName.at(0);
	char lastN = lastName.at(0);

	if(firstN > 60){
		firstName.at(0) = firstN - 32;
	}
	if(lastN > 60){
		lastName.at(0) = lastN - 32;
	}


	cout << firstName << " " << lastName << endl;




	cout << endl;
	return 0;
}

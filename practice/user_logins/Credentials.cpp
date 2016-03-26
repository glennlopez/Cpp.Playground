#include <iostream>
#include <vector>
#include "Credentials.h"
using namespace std;

//default constructor
Credentials::Credentials(){
	username = "undefined";
	password = "undefined";
}

//constructor overload - username:password
Credentials::Credentials(string uname, string pass){
	username = uname;
	password = pass;
}

//manipulators
void Credentials::setUsername(string uname){
	username = uname;
}
void Credentials::setPassword(string pass){
	password = pass;
}

//accessors
string Credentials::getUsername(){
	return username;
}
string Credentials::getPassword(){
	return password;
}


//** CLASS FUNCTIONS **//

void generateUser(vector<Credentials>& vectorRef){

	unsigned int i, num_users;
	string uname, passwd;

	/*	SYNOPSIS:

		Ask user how many users to add -> (x), then loop{

			Promt user for username and password
			store those in a variable

			Pass name and grade variables to a class object...
			then push_back that object into a vector

			Output all elements in the vector | ie:
			vector1 name, grade
			vector2 name, grade
			vector3 name, grade

		} (x) number of times

	*/

	//prompt (number of users to generate)
	cout << "How many users to generate: ";
	cin >> num_users;

	//user generator loop
	for(i = 0; i < num_users; i++){

		//ask for uname
		cout << "User " << i+1 << " username: ";
		cin >> uname;

		//ask for password
		cout << "User " << i+1 << " password: ";
		cin >> passwd;

		//pass the variables above to a class object
		Credentials newUser(uname, passwd);

		//push_back the new class object to vector
		vectorRef.push_back(newUser);

		cout << endl;
	}
}

//print all users on screen
void printUser(vector<Credentials>& vectorRef){

	unsigned int i, vector_size = vectorRef.size();

	for(i = 0; i < vector_size; i++){
		cout << "Username: " << vectorRef[i].getUsername() << endl;
		cout << "Password: " << vectorRef[i].getPassword() << endl;

		cout << endl;
	}

}

//print selected user on screen
void printUser(vector<Credentials>& vectorRef, string uname){

	unsigned int i, vector_size = vectorRef.size();

	for(i = 0; i < vector_size; i++){
		if(vectorRef[i].getUsername() == uname){
			cout << "Username: " << vectorRef[i].getUsername() << endl;
			cout << "Password: " << vectorRef[i].getPassword() << endl;
		}
	}



}

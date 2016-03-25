#include <iostream>
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

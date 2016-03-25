#include <iostream>
#include <string>
using namespace std;

#ifndef CREDENTIALS_H
#define CREDENTIALS_H

class Credentials{

private:
	string username;
	string password;

public:
	//default constructor
	Credentials();

	//constructor overload
	Credentials(string, string);

	//manipulators
	void setUsername(string);
	void setPassword(string);

	//accessorts
	string getUsername();
	string getPassword();

};

#endif //CREDENTIALS_H

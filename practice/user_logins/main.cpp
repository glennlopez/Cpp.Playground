//pre-processors
#include <iostream>
#include "Credentials.h"
#include "Credentials.cpp"
using namespace std;

//prototypes
void generateUser();


int main(){


	Credentials glenn("glopez", "Password123");
	cout << glenn.getUsername() << ":" << glenn.getPassword() << endl;

	cout << endl;
	return 0;
}

void generateUser(){

}

#include <iostream>
#include "Students.h"
#include "Students.cpp"
using namespace std;

/*
	NOTE: A destructor is typically needed whenever a constructor acquires resources. One common example of acquiring resources is when the constructor allocates memory, as above, in which case the destructor might free that memory. Another example is when a constructor opens a file, in which case the destructor might close that file.

		https://www.youtube.com/watch?v=4P4Im0vF_mU
*/


int main(){

	Students *glenn;
	glenn = new Students;
	delete glenn;					//<-- comment out and see what happens

	//Students anon;				//<-- uncomment this for non-pointer deconstructor

	cout << "Main function executed." << endl;

	cout << endl;
	return 0;
}

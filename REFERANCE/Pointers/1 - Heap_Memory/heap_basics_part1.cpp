//https://www.youtube.com/watch?v=OrDjGp_y1H4
//DYNAMIC MEMORY ALLOCATION OF HEAP STACK

#include <iostream>
using namespace std;

int main(){

	/*
		NOTE: the 'new' datatype definition places any datatype variable
		inside heap memory.

		p1 = new int;

		Tells the compiler to have p1 point to some address in heap memory
		of size int so we can later place a variable in the memory using:

		*p1 = 45;
	*/


	int *p1;				//<-- tell compiler that p1 is a pointer
	p1 = new int;		//<-- set p1 to point to some new address in memory with int size variable

	*p1 = 45;			//<-- place variable '45' into where p1 is pointing to



	cout << *p1 << endl;
	cout << endl;
	return 0;
}

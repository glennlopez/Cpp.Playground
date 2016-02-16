//POINTERS AS PARAMETERS: Pointers inside functions

#include <iostream>
using namespace std;

/*
	Below makes use of a pointer as a parameter for printing
	the value a pointer is pointing to.
*/

//void print(int) 	//<-- normal
void print(int *);	//<-- pointer as a parameter


int main(){
	int *p1;			//<-- tell compiler p1 is a pointer
	p1 = new int;	//<-- create a new int var in heap that p1 is pointing to
	*p1 = 10;		//<-- store int '10' inside the address p1 is pointing to

	//print(*p1) 	//<-- is INVALID! you dont need a derefrance (*) in the param
	print(p1);		

	cout << endl;
	return 0;
}

void print(int *pointer){
	cout << *pointer << endl;
}

//https://www.youtube.com/watch?v=CSVRA4_xOkw

#include <iostream>
//using namespace std;
using std::cout;
using std::endl;	//<-- to save codespace we stop using namespace

/*
	A look at dynamically alocated memory
	(pointers and heap memory)

	new int; <-- will alocate an int to Heap
*/

int main(){


	//declare a pointer and hold the address pointing to the heap
	int* p = new int;

	*p = 5; //<-- assign 5 to int located in the heap using a pointer

	//<-- this should have delete p;

	p = new int(10); //<-- p now points to new address in heap containing 10

	//!NOTE: int containing 5 is now garbage (use delete p; before manipulating new memory into heap so you dont collect garbage and crash the program)

	/* CORRECT METHOD FOR ABOVE IS

		int* p = new int;
		*p = 5;

		delete p; 
		p = 0;

		p = new int(10);

	*/




	cout << endl;
	return 0;
}

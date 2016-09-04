//https://www.youtube.com/watch?v=FHhcSncuHEI

#include <iostream>
using namespace std;

int main(){

	const int CAPACITY = 10;		//<-- set a constant for number of arrays to allocate to memory

	int *dArray;						//<-- let compiler know that dArray is pointer of size int
	dArray = new int[CAPACITY];	//<-- have dArray point to a block of array in heap memory

	//assign values to array elements
	dArray[0] = 3;
	dArray[1] = 7;
	dArray[2] = 2;
	dArray[3] = 9;

	//NOTE: You dont need to do a derefrence (*dArray) for arrays.
	for(int i = 0; i <= 3; i++){
		cout << "Value " << i+1 << ": " << dArray[i] << endl;
	}

	/* NOTE: Since we alocated blocks of heap memory, we also need to de-alocate them
	 *	when we are done with them.
	 */

	 delete [] dArray;	//<-- will delete the elements so that dArray(0) in size
	 dArray = NULL;		//<-- pointer still exists so we NULL the pointer

	cout << endl;
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

/*
	This is a simple sorting algorythm I made for sorting numbers from
	lest to largest.
*/


int main(int argc, char const *argv[]) {

	int elements = 0;		//var for vector elements
	int i = 0; 				//loop var
	int j = 0;				//outer loop var
	int swapMem = 0; 		//var for holding a number during a swap

	//ask user how many numbers to sort
	cout << "How many numbers would you like to input: ";
	cin >> elements;

	vector<int> user(elements);

	//store values for x
	cout << "List values to sort: " << endl;
	for (i = 0; i < elements; i++){
		cout << "Value " << i +1 << ": ";
		cin >> user.at(i);
	}

	/* sorting algo - smallest to largest */
	for (j = 0; j < elements; j++){
		/*
			NOTE: we need to loop the swap algo again and again
			depending on the number of elements in the vector. This
			allows us to sort
		*/
		for (i = 0; i < elements-1; i++){
			if (user.at(i) > user.at(i+1)){
				swapMem = user.at(i+1);
				user.at(i+1) = user.at(i);
				user.at(i) = swapMem;
			}
		}

	}


	//print out values
	cout << "Here are your sorted values:" << endl;
	for (i = 0; i < elements; i++){
		cout << user.at(i) << " ";
	}

	cout << endl;
	return 0;
}

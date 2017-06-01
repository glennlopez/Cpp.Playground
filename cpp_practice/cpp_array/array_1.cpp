#include <iostream>
using namespace std;


int main(){

	cout << "How many numbers to add: ";
	int size;
	cin >> size;
	int myArray[size];

	for(int i = 0; i < size; i++){
		cout << "Add: ";
		int item;
		cin >> item;

		myArray[i] = item;
	}

	double total;
	for(int i = 0; i < size; i++){
		total = total + myArray[i];
	}

	double average = total / size;

	cout << "Average: " << average << endl;


	return 0;
}

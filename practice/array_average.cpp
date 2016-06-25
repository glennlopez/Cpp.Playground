#include <iostream>
using namespace std;

//using an array to get the average

int main(){

	int size, myArray[size];
	double total, avg;

	//how many numbers
	cout << "How many numbers: ";
	cin >> size;


	//store numbers in a variable
	for(int i = 0; i < size; i++){
		cout << "Number " << i + 1 << ": ";
		cin >> myArray[i];
		total = total + myArray[i];
	}

	cout << "Total: " << total << endl;
	avg = total / size;
	cout << "Average: " << avg << endl;





	return 0;
}

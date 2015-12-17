/*
	Testing out function return on a previous excersize that
	sorts number from least to greatest.
*/

#include <iostream>
#include <vector>
using namespace std;

/* SORT FUNCTION */
void sort (void){
	int elements = 0;

	//variables
	int i = 0;
	int j = 0;
	int swap = 0;


	//ask user how many numbers to sorts
	cout << "How many numbers would you like to sort: ";
	cin >> elements;

	vector<int> usrElement(elements);

	//ask user to type in the numbers to sort through
	for (i = 0; i < elements; i++){
		cout << "Number " << i + 1 << ": ";
		cin >> usrElement.at(i);
	}

	//sort numbers
	for (i = 0; i < elements; i++){
		for (j = 0; j < elements - 1; j++){
			if (usrElement.at(j+1) < usrElement.at(j)){
				swap = usrElement.at(j);
				usrElement.at(j) = usrElement.at(j+1);
				usrElement.at(j+1) = swap;
			}
		}
	}


	//output the vector elements
	for (i = 0; i < elements; i++){
		cout << usrElement.at(i) << " ";
	}

	cout << endl;
}

/* ADD NUMBERS */
double userAdd(double num1, double num2){
	return num1 + num2;
}


/* MAIN FUNCTION */
int main(int argc, char const *argv[]) {
	//sort();

	int usrNum1, usrNum2;
	cout << "Add two numbers." << endl;

	cout << "Number 1: ";
	cin >> usrNum1;

	cout << "Number 2: ";
	cin >> usrNum2;

	cout << "Answer: " << userAdd(usrNum1, usrNum2);

	cout << endl;
	return 0;
}

//https://www.youtube.com/watch?v=ReWNqNAhlkY
//Passing vector functions by referance examples

#include <iostream>
#include <vector>
using namespace std;

/*	ABOUT VECTORS:

	Format for vector: vector<Datatype> vectorName;

	myVector.push_back(value); <-- adds "value" at the end of vector
	myVector.at(i); 				<-- returns item located at myVector[i]
	myVector.size();				<-- returns the size of the vector
	myVector.begin();				<-- reads vector from first element
	myVector.clear();				<-- removes all elements in vector
	myVector.empty();				<-- returns 1 or 0 if its empty

	myVector.insert();			<-- insers vector at specified spot
	myVector.erase();				<-- removes vector at specified spot

	myVector.insert(myVector.begin() +i, value);
	myVector.erase(myVector.begin() +i);

*/

void Fill(vector<int>& vectorname);
void Print(const vector<int>& vectorname);
void PrintReverse(const vector<int>& vectorname);
void PrintEven(const vector<int>& vectorname);
void PrintOdd(const vector<int>& vectorname);
void Replace(vector<int>& vectorname);




//** MAIN **//
int main(){
	vector<int> myVector;

	Fill(myVector);
//	Print(myVector);
//	PrintReverse(myVector);
//	PrintEven(myVector);
//	PrintOdd(myVector);
	Replace(myVector);
	Print(myVector);

	cout << endl;
	return 0;
}





//** FUNCTIONS **//
void Fill(vector<int>& vectorname){
	int usrNum = 0;

	while(usrNum != -1){
		cout << "Enter numbers (-1 to stop): ";
		cin >> usrNum;
		vectorname.push_back(usrNum);
	}
	//remove last element (-1)
	vectorname.erase(vectorname.begin() + vectorname.size() -1);

	//remove number 13 from the vector
	unsigned int i = 0;
	for(unsigned int j = 0; j < vectorname.size(); j++){

		for(i = 0; i < vectorname.size(); i++){
			if(vectorname.at(i) == 13){
				vectorname.erase(vectorname.begin() + i);
			}
		}
	}
}

void Print(const vector<int>& vectorname){
	unsigned int i = 0;
	cout << "Your Numbers: ";
	for(i = 0; i < vectorname.size(); i++){
		cout << vectorname[i] << ", ";
	}
	cout << endl;
}

void PrintReverse(const vector<int>& vectorname){
	cout << "In Reverse: ";
	int i = 0;

	for(i = vectorname.size() - 1; i > -1; i--){
		cout << vectorname[i] << ", ";
	}
	cout << endl;
}

void PrintEven(const vector<int>& vectorname){
	//even numbers are divisible by 2
	unsigned int i = 0;
	int evenNum = -1;

	cout << "Even Numbers: ";

	for(i = 0; i < vectorname.size(); i++){
		//check to see if element is divisable by 2
		evenNum = vectorname[i] % 2;

		//if element is divisable by 2 (mod 2 = 0) then print it out
		if(evenNum == 0){
			cout << vectorname[i] << ", ";
		}
	}
	cout << endl;
}

void PrintOdd(const vector<int>& vectorname){
	//even numbers are divisible by 2
	unsigned int i = 0;
	int evenNum = -1;

	cout << "Odd Numbers: ";

	for(i = 0; i < vectorname.size(); i++){
		//check to see if element is divisable by 2
		evenNum = vectorname[i] % 2;

		//if element is divisable by 2 (mod 2 = 0) then print it out
		if(evenNum != 0){
			cout << vectorname[i] << ", ";
		}
	}
	cout << endl;
}

void Replace(vector<int>& vectorname){
	int origNum = 0;
	int newNum = 0;
	unsigned int i = 0;

	//ask user what number to replace (look for)
	cout << "What number to replace: ";
	cin >> origNum;

	//ask user what number
	cout << "Enter new Number: ";
	cin >> newNum;

	//search for the number in all elements of the vector
	for(i = 0; i < vectorname.size(); i++){
		if(vectorname.at(i) == origNum){
			vectorname.at(i) = newNum;
		}
	}
	cout << endl;
}

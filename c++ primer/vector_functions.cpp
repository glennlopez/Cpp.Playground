//https://www.youtube.com/watch?v=Cq1h1KPoGBU
#include <iostream>
#include <vector>
using namespace std;

void Print(const vector<int>& myVector);		//prints out all vectors
void IsEmpty(const vector<int>& myVector);	//prints if vector is empty

int main(){

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

	//create a new <int> type vector named "myVector"
	vector<int> myVector;

	//add new element to vector | place at the back
	myVector.push_back(1); //<-- here we add 3 to myVector vector
	myVector.push_back(2);
	myVector.push_back(3);
	Print(myVector);
	IsEmpty(myVector);
	cout << endl;

	//add new element to vector | place in the begining
	myVector.insert(myVector.begin() + 0, 99);
	myVector.insert(myVector.begin() + 0, 98);
	myVector.insert(myVector.begin() + 0, 97);
	Print(myVector);
	IsEmpty(myVector);
	cout << endl;

	//remove a vector
	myVector.erase(myVector.begin() + 1);
	Print(myVector);
	IsEmpty(myVector);
	cout << endl;

	//clear all elements from the vector
	myVector.clear();
	Print(myVector);
	IsEmpty(myVector);
	cout << endl;

	cout << endl;
	return 0;
}



//** FUNCTIONS **//
void Print(const vector<int>& myVector){
	for(unsigned int i = 0; i < myVector.size(); i++){
		//cout << myVector.at(i); //<-- uses vector for access
		cout << myVector[i] << " "; //<-- uses array for access
	} cout << endl;
}

void IsEmpty(const vector<int>& myVector){
	if(myVector.empty()){
		cout << "Empty: Yes" << endl;
	}
	else{
		cout << "Empty: No" << endl;
	}
}

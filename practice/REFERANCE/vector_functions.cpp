//https://www.youtube.com/watch?v=Cq1h1KPoGBU
#include <iostream>
#include <vector>
using namespace std;

void Print(const vector<int>& myVector);

int main(){

	/*	ABOUT VECTORS:

		Format for vector: vector<Datatype> vectorName;

		myVector.push_back(value); <-- adds "value" at the end of vector
		myVector.at(i); 				<-- returns item located at myVector[i]
		myVector.size();				<-- returns the size of the vector
		myVector.begin();				<-- reads vector from first element

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

	//add new element to vector | place in the begining
	myVector.insert(myVector.begin() + 0, 99);
	myVector.insert(myVector.begin() + 0, 98);
	myVector.insert(myVector.begin() + 0, 97);
	Print(myVector);

	//remove a vector
	myVector.erase(myVector.begin() + 1);
	Print(myVector);


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

//using all listed vector functions in the description

#include <iostream>
#include <vector>
using namespace std;

//check if vector has no elelments
void IsEmpty(const vector<int>& vectorname){
	if(vectorname.empty()){
		cout << "Empty: Yes" << endl;
	}
	else{
		cout << "Empty: No" << endl;
	}
}

//print out vector elements
void Print(const vector<int>& vectorname){
	unsigned int i = 0;
	for(i = 0; i < vectorname.size(); i++){
		cout << vectorname[i] << " ";
	}
	cout << endl;
	//print out if the vector is empty
	IsEmpty(vectorname);
	cout <<endl;
}

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

int main(){

	//instatiate a vector
	vector<int> myVector;

	//add vectors
	cout << "Adding 3 elements to vector" << endl;
	myVector.push_back(23);
	myVector.push_back(13);
	myVector.push_back(10);
	Print(myVector);

	//add an element in the vector
	cout << "Adding an element at begining" << endl;
	myVector.insert(myVector.begin() + 0, 12);
	Print(myVector);

	//removing a vector
	cout << "Removing #13 from the vector" << endl;
	myVector.erase(myVector.begin() + 2);
	Print(myVector);

	//clear the vector
	cout << "Removing all elements from vector" << endl;
	myVector.clear();
	Print(myVector);

	cout << endl;
	return 0;
}

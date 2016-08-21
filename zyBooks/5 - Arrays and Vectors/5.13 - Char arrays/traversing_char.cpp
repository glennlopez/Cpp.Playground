#include <iostream>
using namespace std;

int main(){

	int i;
	char uName[] = "GlennLopez";

	//using null terminator
	for(i = 0; uName[i] != '\0'; i++){
		if(uName[i] == 'L'){
			cout << " " << endl;
		}
		cout << uName[i] << endl;
	}

	cout << endl;

	//using sizeof()
	for(i = 0; i <= sizeof(uName) - 1; i++){
		cout << uName[i];
	}

	cout << endl;

	cout << endl;
	return 0;
}

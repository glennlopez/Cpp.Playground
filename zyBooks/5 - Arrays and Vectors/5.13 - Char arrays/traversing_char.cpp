#include <iostream>
using namespace std;

int main(){

	int i;
	char uName[] = "GlennLopez";

	for(i = 0; uName[i] != '\0'; i++){
		if(uName[i] == 'L'){
			cout << " " << endl;
		}
		cout << uName[i] << endl;
	}

	cout << endl;
	return 0;
}

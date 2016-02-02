#include <iostream>
using namespace std;

int main(){

	int* i = new int(100);
	cout << *i << endl;

	delete i;
//	*i = 0;
	cout << *i << endl;

	cout << endl;
	return 0;
}

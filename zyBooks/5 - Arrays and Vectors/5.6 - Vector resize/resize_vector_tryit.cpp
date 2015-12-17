#include <iostream>
#include <vector>
using namespace std;

/*
	Make a resize-able vector
*/
int usize = 0;
int total = 0;
vector<int> container;

int main(int argc, char const *argv[]) {

	cout << "How many numbers to add: ";
	cin >> usize;
	container.resize(usize);

	for (int i = 0; i < usize; i++){
		cout << "Number " << i+1 << ": ";
		cin >> container.at(i);
		total = total + container.at(i);
	}

	cout << "Total: " << total;
	cout << endl;
	return 0;
}

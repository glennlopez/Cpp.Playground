#include <iostream>

using namespace std;

int count = 0;

int main(int argc, char const *argv[]) {
	cout << "How many times to loop: ";
	cin >> count;

	if (count > 0){
		while (count > 0){
			cout << count << " ";
			count--;
		}
	}
	else{
		while (count < 0){
			cout << count << " ";
			count++;
		}
	}
	cout << endl;
	return 0;
}

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int seed = 0; //<-- seed for generating psuedo random numbers

int main(int argc, char const *argv[]) {

	cout << "Enter a seed value: ";
	cin >> seed;

	//srand(time(0));
	srand(seed); //<-- this generates random numbers using seed

	cout << "Person1: " << (rand() % 6) + 1 << endl;
	cout << "Person2: " << (rand() % 6) + 1 << endl;
	cout << "Person3: " << (rand() % 6) + 1 << endl;
	cout << "Person4: " << (rand() % 6) + 1 << endl;

	return 0;
}

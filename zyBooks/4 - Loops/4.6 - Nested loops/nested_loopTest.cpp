#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int row = 0;
int col = 0;
for(row = 0; row < 2; row = row + 1) {
	cout << "Outer loop" << endl;
   for(col = 0; col < 3; col = col + 1) {
      // Inner loop body
		cout << "     Inter loop" << endl;
   }
}
	return 0;
}

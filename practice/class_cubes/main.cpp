#include <iostream>
#include <vector>

#include "Cube.cpp"
using namespace std;

/*	FUNCTION REFERENCE IN CUBE.CPP

	vector<Square> ...
	vector<Cube> ...

	AddCube(vector);
	AddCube(vector, x, y, z);

	AddSquare(vector);
	AddSquare(vector, x, y);

	Print(vector);
	Draw(vector);
*/

int main(){
	vector<Square> paper;
	vector<Cube> box;

	AddSquare(paper, 5, 5);
	Draw(paper);

	return 0;
}

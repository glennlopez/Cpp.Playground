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

	PrintItem(vector);
	Draw(vector);
*/

int main(){
	vector<Square> paper;
	vector<Cube> box;

/*
	AddSquare(paper, 5, 5);
	AddSquare(paper, 10, 3);
	Draw(paper);
	PrintItem(paper);
*/

	AddCube(box, 5, 5, 5);
	AddCube(box, 10, 20, 30);
	Draw(box);
	PrintItem(box);
	return 0;
}

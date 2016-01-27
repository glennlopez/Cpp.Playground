#include <iostream>
#include <vector>

#include "Cube.cpp"
using namespace std;

/*	FUNCTION REFERENCE IN CUBE.CPP

	vector<Square> ...
	vector<Cube> ...

	Populate(vector);
	Populate(vector, x, y);
	Populate(vector, x, y, z);

	ItemInfo(vector);
	Draw(vector);
*/

int main(){
	vector<Square> paper;
	vector<Cube> box;

/*
	Populate(paper, 5, 5);
	Populate(paper, 10, 3);
	Draw(paper);
	ItemInfo(paper);
*/


	Populate(box, 5, 5, 5);
	Populate(box, 10, 20, 30);
	Draw(box);
	ItemInfo(box);


/*
	Populate(paper);
	Draw(paper);
	ItemInfo(paper);
*/
	return 0;
}

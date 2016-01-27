#include <iostream>
#include <vector>

#include "Cube.cpp"
using namespace std;

/*	FUNCTION REFERENCE IN CUBE.CPP

	vector<Square> ...				<-- Instantiate vector Cube or Square class
	vector<Cube> ...

	Populate(vector);					<-- F(n) Overload: Square or Cube
	Populate(vector, x, y);			<-- F(n) Overload: Square class
	Populate(vector, x, y, z);		<-- F(n) Overload: Cube class

	ItemInfo(vector);					<-- Prints area or volume of Cube or Square
	Draw(vector);						<-- Draws Cube or Square on screen using *
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

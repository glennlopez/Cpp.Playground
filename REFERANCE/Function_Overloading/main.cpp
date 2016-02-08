#include <iostream>
#include <vector>
/*
	NOTE: This example facilitates the practical use of overloading functions
	 		as well as providing built in class functions outside of class.

			It also illustrates why grouping functions into its related
			class cleans up the main.cpp file to look less verbose and more
			legible.

			The 3rd party coder needs not know the math or underworkings behind
			how cubes and squares are calculated. They simply just need the
			information provided below:
*/

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

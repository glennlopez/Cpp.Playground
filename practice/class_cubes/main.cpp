#include <iostream>
#include <vector>

#include "Cube.cpp"
using namespace std;

int main(){
	vector<Square> paper;

	AddSquare(paper);
	Draw(paper);

	return 0;
}

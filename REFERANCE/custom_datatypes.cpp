#include <iostream>
using namespace std;

enum color{	//makes a color datatype
	RED,		//0
	ORANGE,	//1
	YELLOW,	//2
	GREEN,	//3
	BLUE,		//4
	WHITE,	//5
	BLACK		//6
};

int main(){

	color pen(BLACK);			//<--  EDIT THIS

	cout << "Table color: #" << pen << endl;

	if(pen == RED){
		cout << "The color of this object is red" << endl;
	}

	else if(pen == 6){
		cout << "The color of this object is black" << endl;
	}
	else{
		cout << "Out of scope: Color not found!" << endl;
	}

	return 0;
	cout << endl;
}

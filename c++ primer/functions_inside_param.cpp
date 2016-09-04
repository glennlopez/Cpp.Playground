#include <iostream>
using namespace std;

//Function prototype
int areaOf(int x, int y);
int squareOf(int num);



int main(){

	//We can use a function inside a function and so on...
	cout << squareOf(areaOf(5, 5)) << endl;

	cout << endl;
	return 0;
}


//** FUNCTIONS **//

int areaOf(int x, int y){
	return x * y;
}

int squareOf(int num){
	return num * num;
}

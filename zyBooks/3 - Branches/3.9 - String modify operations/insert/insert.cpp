#include <iostream>
#include <string>
using namespace std;

//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/3/section/9
//insert(indx, subStr)

int main(){

	string myString1 = "you say, i say.";

	//insert(indx, subStr)
	myString1.insert(myString1.find(","), " good bye");
	myString1.insert(myString1.find("."), " hello");

	cout << myString1 << endl;

	cout << endl;
	return 0;
}

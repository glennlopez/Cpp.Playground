#include <iostream>
#include "Students.h"
#include "Students.cpp"
using namespace std;

/* Youtube link:
 *		https://www.youtube.com/watch?v=4P4Im0vF_mU
 */

int main(){
	Students *glenn;
	glenn = new Students;
	delete glenn;

	//Students anon;				//<-- uncomment this for non-pointer deconstructor

	cout << "Main function executed." << endl;

	cout << endl;
	return 0;
}

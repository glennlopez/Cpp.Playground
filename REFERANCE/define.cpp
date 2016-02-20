#include <iostream>
using std::cout;
using std::endl;
void print();

namespace make{

	class animal{
	private:

	public:
	};

	class human{
	private:

	public:
	};

};

/* This is an example of how we can use #define
 *
 */


#define SaySomething print();

int main(){
	//simple cout function
	SaySomething;





	cout << endl;
	return 0;
}


//** FUNCTIONS **//
void print(){
	cout << "testing 1, 2, 3..." << endl;
}

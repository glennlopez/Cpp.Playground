#include <iostream>
//https://www.youtube.com/watch?v=AKUd9elQQY0

/*	NOTE:
 *	This illustrates the diffrance between typedef and #define,
 * when, and how to use typedefine & #define constructs
 */

/*
	A #define is a pre-processor directive that tells the compiler to
	substitute (x) when ever a MACRONAME is called in the code.
*/
		#define MACRONAME "substitution";
		#define COUNTRY "Canada";
		#define ANIMAL "Dog";
		//#define unsigned short int uShort_1; WILL NOT WORK so we use typedef

int main(){
	using std::cout;
	using std::endl;

	unsigned short int A = 1;
	unsigned short int B = 2;
	unsigned short int C = 3;
	unsigned short int D = 4;

	/*
		typedef is useful when defining multiple types of data types for (x) var.
		We can substitute "unsigned short int" with:
			typedef unsigned short int uShort;

		the result is defining the word "uShort" to mean "unsigned short int".
		ie:
			uShort A = 1;		is the same as 	unsigned short int A = 1;
	*/

	typedef unsigned short int uShort;	//<-- assigns uShort as a typedef
	uShort AA = 1;
	uShort BB = 2;
	uShort CC = 3;
	uShort DD = 4;


	cout << COUNTRY; //<-- this will output "Canada" as define in #define COUNTRY
	cout << endl;
	cout << BB << endl;

	cout << endl;
	return 0;
}


#include <iostream>
using namespace std;

/* Output all two-letter .com Internet domain names */

int main() {
   char usrInput = '?';
   char letter1 = '?';
   char letter2 = '?';

   cout << endl << "Two-letter domain names:" << endl;

   letter1 = 'a';
   while (letter1 <= 'z') {
      letter2 = 'a';
      while (letter2 <= 'z') {
			usrInput = '0';
			while (usrInput <= '9') {
				cout << letter1 << letter2 << usrInput << ".com" << endl;
				++usrInput;
			}
         ++letter2;
      }
      ++letter1;
   }

   return 0;
}

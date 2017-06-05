#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
  string myString = "1,2,3,4";
  int myNum = 1234;
  char myChar = 'c';

  stringstream ss;

  ss << myString;
  cout << ss.str() << endl;

  cout << endl;
  return 0;
}

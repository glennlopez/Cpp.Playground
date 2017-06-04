#include <iostream>
using namespace std;

void sayHi(int param){
  int n = param;  //<-- counter for recursion
  //base case
  if (n == 0){
    return;
  }
  //recursive
  else{
    cout << "Hi" << endl;
    sayHi(n - 1);
  }

}

int main(){

  //this will say Hi 'N' times
  sayHi(3);

  return 0;
}

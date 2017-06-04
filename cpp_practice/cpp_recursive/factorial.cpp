//https://www.youtube.com/watch?v=4agL-MQq05E
#include <iostream>
using namespace std;

int factorial(int param){
  //base case
  if(param == 1){
    return 1;
  }
  //recursive parameters
  else{
    return param * factorial(param - 1);
  }
}

int main(){
  int usrNum; cin >> usrNum;
  cout << "Factorial of " << usrNum << " is: " << factorial(usrNum) << endl;;
  return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int param){
  //base case
  if(param == 1){
    return 1;
  }
  else{
    return param * factorial(param - 1);
  }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x; cin >> x;
    cout << factorial(x) << endl;
    return 0;
}

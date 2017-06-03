#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> param);
vector<int> solve(int a0, int a1, int a2, int b0, int b1, int b2);

int main(){

  int a0, a1, a2, b0, b1, b2;
  cin >> a0 >> a1 >> a2 >> b0 >> b1 >>b2;

  cout << "------------------------------"<< endl;

  vector<int> result = solve(a0, a1, a2, b0, b1, b2);
  printVector(result);



  cout << endl;
  return 0;
}





//print vector
void printVector(vector<int> param){
  for(unsigned int i = 0; i < param.size(); i++){
    cout << param[i] << " ";
  }
  cout << endl;
}

//vector return function
vector<int> solve(int a0, int a1, int a2, int b0, int b1, int b2){
  vector<int> temp(2);

  if(a0 > b0){
    temp[0]++;
  }
  if(a1 > b1){
    temp[0]++;
  }
  if(a2 > b2){
    temp[0]++;
  }

  //temp[0] is score for alice
  //temp[1] is score for bob


  return temp;
}

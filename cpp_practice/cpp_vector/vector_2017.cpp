//https://www.youtube.com/watch?v=SGyutdso6_c
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> param){

  for(unsigned int i = 0; i < param.size(); i++){
    cout << param[i] << " | ";
  }
  cout << endl;
}


int main(){

  //vector<datatype> vectorName(vectorsize)
  vector<int> vectorName(3);

  //assigning values to elements
  vectorName[0] = 10;
  vectorName[1] = 22;
  vectorName[2] = 5;

  //adding more elements to vector with values assigned
  vectorName.push_back(7); //puts vectorName[3] = 7;

  cout << vectorName.front() << endl;
  cout << vectorName.back() << endl;
  cout << vectorName.at(1) << endl;

  cout << endl;

  printVector(vectorName);

  return 0;
}

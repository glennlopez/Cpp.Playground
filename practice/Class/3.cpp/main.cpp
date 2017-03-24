//https://www.youtube.com/watch?v=NTip15BHVZc

#include <iostream>
using namespace std;
#include "item.h"

int main(){
  //compile: g++ main.cpp item.cpp

  //SphereClass sphereObject;
  CubeClass cubeObject;
  cubeObject.setEdge(12.5);

  cout << "Cube Edge: " << cubeObject.getEdge() << endl;
  cout << "Cube Volume: " << cubeObject.getVolume() << endl;

  cout << endl;
  return 0;
}

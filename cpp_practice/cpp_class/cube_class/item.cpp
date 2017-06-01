#include <iostream>
using namespace std;

#include "item.h"

/************
* SPHERE CLASS
*************/
SphereClass::SphereClass(void){
  cout << "Debug: Object made in SphereClass" << endl;

  //set defaults
  radius = 0;
  volume = 0;
}

/************
* CUBE CLASS
*************/
CubeClass::CubeClass(void){
  cout << "Debug: Object made in CubeClass" << endl;

  //set defaults
  edge = 0;
  volume = 0;
}

//setter
void CubeClass::setEdge(double param){
  edge = param;
}

//getter
double CubeClass::getEdge(void){
  return edge;
}
double CubeClass::getVolume(void){
  volume = edge * edge * edge;
  return volume;
}

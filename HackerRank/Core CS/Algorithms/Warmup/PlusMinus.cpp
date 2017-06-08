//https://www.hackerrank.com/challenges/plus-minus
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
  Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.
*/


int main(){
    int n, i;
    double neg, zer, pos;
    cin >> n;
    vector<int> arr(n);

    for(i = 0;i < n; i++){
       cin >> arr[i];
    }

    for(i = 0; i < arr.size(); i++){
      if(arr[i] == 0){
        zer++;
      }
      if(arr[i] < 0){
        neg++;
      }
      if(arr[i] > 0){
        pos++;
      }

    }

    cout << pos/n << endl;
    cout << neg/n << endl;
    cout << zer/n << endl;


    return 0;
}


/* SAMPLE INPUT
  6
  -4 3 -9 0 4 1
*/

/*SAMPLE OUTPUT
  0.500000
  0.333333
  0.166667
*/

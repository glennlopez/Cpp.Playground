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
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
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

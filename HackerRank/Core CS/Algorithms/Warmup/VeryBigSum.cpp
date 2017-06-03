//https://www.hackerrank.com/challenges/a-very-big-sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* SAMPLE INPUT
  5
  1000000001 1000000002 1000000003 1000000004 1000000005
*/


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    long long total = 0;

    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       total += arr[arr_i];
    }

    cout << total;


    return 0;
}


/* SAMPLE OUTPUT
  5000000015
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* SAMPLE INPUT
  6
  1 2 3 4 10 11
*/

/* SAMPLE OUTPUT
  31
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

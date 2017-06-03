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



int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    /* SOLUTION */
    int sum = 0;
    for(int i = 0; i < n; i++){
      sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}




/* SAMPLE OUTPUT
  31
*/

#include <bits/stdc++.h>
using namespace std;
/* https://www.hackerrank.com/challenges/mini-max-sum
  Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
*/

// Sample input: 1 2 3 4 5

int main() {

  //My Solution: add the vector elements and subtract arr[i] to find min and max

  long long total, largest, smallest;
  vector<int> arr(5);

  total = 0;

  for(int arr_i = 0; arr_i < 5; arr_i++){
    cin >> arr[arr_i];
    total = total + arr[arr_i]; //get total
  }

  largest = total - arr[4];
  smallest = total - arr[4];

  for(int i = 0; i < 5; i++){
    if(largest < total - arr[i]){ //find the largest
      largest = total - arr[i];
    }
    if(smallest > total - arr[i]){ //find the smallest
      smallest = total - arr[i];
    }
  }


  cout << smallest << " " << largest << endl;


    return 0;
}

// Sample output: 10 14

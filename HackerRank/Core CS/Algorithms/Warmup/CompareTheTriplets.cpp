//https://www.hackerrank.com/challenges/compare-the-triplets
#include <bits/stdc++.h>
using namespace std;

/* SAMPLE INPUT
  5 6 7
  3 6 10
*/

vector<int> solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function

    // SOLUTION
    vector<int> temp(2);
    //temp[0] is score for alice
    //temp[1] is score for bob

    int alice[] = {a0, a1, a2};
    int bob[] = {b0, b1, b2};

    for(unsigned int i = 0; i < 3; i++){
      // alice point
      if(alice[i] > bob[i]){
        temp[0]++;
      }

      // bob point
      if(alice[i] < bob[i]){
        temp[1]++;
      }

    }


    return temp;

    // END OF SOLUTION

}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    //5 6 7

    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    //3 6 10

    vector<int> result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

/* SAMPLE OUTPUT
  1 1
*/

//Reference used:
//  https://www.youtube.com/watch?v=SGyutdso6_c

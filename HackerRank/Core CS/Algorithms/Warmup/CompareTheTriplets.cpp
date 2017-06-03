//https://www.hackerrank.com/challenges/compare-the-triplets
#include <bits/stdc++.h>
using namespace std;

/* SAMPLE INPUT
  5 6 7
  3 6 10
*/

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;

    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

/* SAMPLE OUTPUT
  1 1
*/

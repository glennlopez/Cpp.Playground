//https://www.hackerrank.com/challenges/camelcase
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/* SAMPLE INPUT
  saveChangesInTheEditor
*/


int main(){
    string s;
    cin >> s;

    //SOLUTION
    //  Count the number of capital letters
    int count = 1;
    for(unsigned int i = 0; i < s.size(); i++){
      if( (s[i] > 64) && (s[i] < 91) ){
        count++;
      }
    }

    cout << count;


    return 0;
}


/* SAMPLE OUTPUT
  5
*/

//references
//   http://www.cplusplus.com/reference/string/string/size/

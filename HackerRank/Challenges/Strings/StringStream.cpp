//https://www.hackerrank.com/challenges/c-tutorial-stringstream
//help: https://www.hackerrank.com/challenges/c-tutorial-stringstream/forum
#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
   vector<int> buffer;
   stringstream ss(str);


   return buffer;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

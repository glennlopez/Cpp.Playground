#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    // read input
    int x;
    string a, aa, b, bb;
    cin >> x >> a >> b;

    for(int i = 0; i < a.size(); i++){
        if(!(i%2)){
            cout << a[i];
        }
    }

    cout << " ";

    for(int i = 0; i < a.size(); i++){
        if(i%2){
            cout << a[i];
        }
    }

    cout << endl;

    for(int i = 0; i < b.size(); i++){
        if(!(i%2)){
            cout << b[i];
        }
    }

    cout << " ";

    for(int i = 0; i < b.size(); i++){
        if(i%2){
            cout << b[i];
        }
    }

    return 0;
}

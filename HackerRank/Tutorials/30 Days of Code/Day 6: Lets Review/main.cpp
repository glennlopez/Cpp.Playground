#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    //get number of words
    int num;
    cin >> num;

    //store words
    string arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];

        for(int j = 0; j < arr[i].length(); j++){
            if(!(j%2)){    //cout even
                cout << arr[i].at(j);
            }
        }

        cout << " ";

        for(int j = 0; j < arr[i].length(); j++){
            if(j%2){    //cout odd
                cout << arr[i].at(j);
            }
        }

        cout << endl;

    }



    return 0;
}

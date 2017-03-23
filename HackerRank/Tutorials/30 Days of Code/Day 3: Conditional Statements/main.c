//https://www.hackerrank.com/challenges/30-conditional-statements

#include <iostream>
using namespace std;

    /*
    If  is odd, print Weird
    If  is even and in the inclusive range of 2 to 5, print Not Weird
    If  is even and in the inclusive range of 6 to 20, print Weird
    If  is even and greater than 20, print Not Weird
    */

int main(){
    int N;
    cin >> N;


    if( N%2 || (!(N%2) && (N >= 6 && N <= 20)) ){
        cout << "Weird" << endl;
    }
    else{   // is even
        if((N > 2 && N <5) || N > 20){
            cout << "Not Weird" << endl;
        }
    }




    return 0;
}

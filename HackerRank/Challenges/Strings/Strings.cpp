#include <iostream>
#include <string>
using namespace std;

/* LAZY METHOD */

int main() {
    //store stin strings
    string a, b, aa, bb;
    cin >> a >> b;

    //count strings
    int a_size = a.size(); cout << a_size << " ";
    int b_size = b.size(); cout << b_size << endl;

    //Concatenate two strings
    cout << a + b << endl;

    //swaps
    aa = a; aa[0] = b[0];
    cout << aa << " ";

    bb = b; bb[0] = a[0];
    cout << bb << " ";



    return 0;
}

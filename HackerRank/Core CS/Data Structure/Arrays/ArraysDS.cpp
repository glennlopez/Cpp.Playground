//https://www.hackerrank.com/challenges/arrays-ds
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int i = arr.size(); i > 0; i--){
        cout << arr[i - 1] << " ";
    }
    
    cout << endl;
    return 0;
}

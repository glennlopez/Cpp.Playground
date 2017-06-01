#include <iostream>
using namespace std;


int main()
{
    int n, arr[1000];
    cin>>n;

    // the way you've been taught
    for(int i=1; i<=n; i++){
      cin>>arr[i];
    }

    // this is how you can 1 liner a forloop
    for (int j=n; j>=1; j--) cout<<arr[j]<<" ";

    return 0;
}

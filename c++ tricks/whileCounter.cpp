#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;

  int count=1;
  int i=0;

  while(i!=s.size())
    count+=isupper(s[i++])>0;

  cout<<count;

  cout << endl;
  return 0;
}

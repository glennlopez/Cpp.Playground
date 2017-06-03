//https://www.hackerrank.com/challenges/30-dictionaries-and-maps

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

/* SAMPLE INPUT
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
*/

/* SAMPLE OUTPUT
sam=99912222
Not found
harry=12299933
*/


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  map<string, long> phoneBook;
  long entrySize, phoneNumber;
  string name;

  //populate phonebook
  cin >> entrySize;
  for(long i = 0; i < entrySize; i++){
    cin >> name >> phoneNumber;
    phoneBook[name] = phoneNumber;

  }

  //iterate through searchh till cin stops
  while(cin >> name){
    if(phoneBook.find(name) != phoneBook.end())
    {
      cout << name << "=" << phoneBook.find(name)->second << endl;
    }
    else{
      cout << "Not found" << endl;
    }
  }



  return 0;
}

/* REFERENCES USED
    http://www.cplusplus.com/reference/map/map/insert/
*/

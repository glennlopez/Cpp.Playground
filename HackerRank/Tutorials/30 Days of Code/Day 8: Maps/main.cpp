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

  map<int, string> phoneBook;

  int entrySize, phoneNumber;
  string name;

  cin >> entrySize;
  for(int i = 0; i < entrySize; i++){
    cin >> name >> phoneNumber;
    phoneBook[phoneNumber] = name;

  }

  //map iterator (print out all the items in the map)
  map<int, string>::iterator it;
    //name_map.begin() is the first value on the map
    //name_map.end() is the last item on the map
  for(it = phoneBook.begin(); it != phoneBook.end(); it++){
    cout << it->second << "=" << (*it).first << endl;
  }

  return 0;
}

/* REFERENCES USED
    http://www.cplusplus.com/reference/map/map/insert/
*/

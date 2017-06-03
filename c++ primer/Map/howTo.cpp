#include <iostream>
#include <string>
#include <map>
using namespace std;
//https://www.youtube.com/watch?v=POYRev0zk2k&t=575s
//https://www.youtube.com/watch?v=k-nSyfh6jr8&t=163s

int main(){

  int idQuerry = 0;

  cout << "Search user ID: ";
  cin >> idQuerry;

  //map datatype initialization
  //map<key, value> catalog_name
  map<int, string> name_map;

  //name_map definitions
  name_map[1] = "Glenn";
  name_map[2] = "Jacob";
  name_map[3] = "George";
  name_map[4] = "Peter";
  name_map[5] = "Alexander";

  //map iterator (print out all the items in the map)
  map<int, string>::iterator it;
    //name_map.begin() is the first value on the map
    //name_map.end() is the last item on the map
  for(it = name_map.begin(); it != name_map.end(); it++){
    cout << it->first << " => " << (*it).second << endl;
  }

  //finding (print out a specific string based on idQuerry)
  it = name_map.find(idQuerry);
  if(it != name_map.end()){
    cout << "User ID #" << idQuerry << " is: ";
    cout << name_map.find(idQuerry)->second << endl;
  }
  else{
    cout << "Error: ID Not Found!" << endl;
  }




  return 0;
}

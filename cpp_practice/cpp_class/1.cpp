//https://www.youtube.com/watch?v=jTS7JTud1qQ&feature=youtu.be

#include <iostream>
#include <string>
using namespace std;

class NPCPlayer{
  public:
    string id;
    int str;
    int health;

};

int main(){
  NPCPlayer Glenn;

  Glenn.id = "npc001";
  cout << Glenn.id;

  cout << endl;
  return 0;
}

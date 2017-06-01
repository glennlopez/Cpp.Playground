//https://youtu.be/jTS7JTud1qQ?t=3m19s
#include <iostream>
#include <string>
using namespace std;

class PlayerClass{
  public:
    //setter
    void setName(string param){
      name = param;
    }

    //getter
    string getName(void){
      return name;
    }

  private:
    string name;
};

int main(){
  PlayerClass playerObject;

  playerObject.setName("Player 1");
  cout << "Player Name: " << playerObject.getName() << endl;

  cout << endl;
  return 0;
}

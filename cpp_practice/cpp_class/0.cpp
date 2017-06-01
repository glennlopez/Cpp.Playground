//https://www.youtube.com/watch?v=ABRP_5RYhqU&t=406s

#include <iostream>
using namespace std;

class PlayerClass{
  public:
    void playerCry(void){
      cout << "Hoorah!" << endl;
    }
};

int main(){
  PlayerClass vikingObject;

  cout << "viking says: "; vikingObject.playerCry();

  cout << endl;
  return 0;
}

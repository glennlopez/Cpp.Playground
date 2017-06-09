#include <iostream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;


int main(){
    string msg, SOS;
    SOS = "SOS";
    int alter, next;

    cin >> msg;

    alter = 0; next = 0;
    for(int i = 0; i < msg.size(); i++){
      if(msg[i] != SOS[next]){
        alter++;
      }
      next++;
      if(next > 2){
        next = 0;
      }
    }

    cout << alter << endl;
    return 0;
}

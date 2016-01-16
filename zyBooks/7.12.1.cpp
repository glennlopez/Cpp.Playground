#include <iostream>
#include <vector>
using namespace std;

// Adds playerNum to end of vector
void PlayersAdd(vector<int>& players, int playerNum) {
   players.push_back(playerNum);
}

void PlayersPrint(const vector<int>& players) {
   unsigned int i = 0;
   for (i = 0; i < players.size(); ++i) {
      cout << " " << players.at(i) << endl;
   }
   return;
}

// Maintains vector of player numbers
int main() {
   vector<int> players;
   int playerNum = 0;
   char userKey = '?';

   cout << "Commands: 'a' add, 'p' print" << endl;
   cout << "   'q' quits" << endl;
   while (userKey != 'q') {
      cout << "Command: ";
      cin  >> userKey;
      if (userKey == 'a') {
         cout << " Player number: ";
         cin  >> playerNum;
         PlayersAdd(players, playerNum);
      }
      else if (userKey == 'p') {
         PlayersPrint(players);
      }
   }

   return 0;
}

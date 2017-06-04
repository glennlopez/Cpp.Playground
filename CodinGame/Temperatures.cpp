//https://www.codingame.com/ide/puzzle/temperatures
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    //string temps; // the n temperatures expressed as integers ranging from -273 to 5526
    //getline(cin, temps);
    int usrNum, temps, pos, neg;
    vector<int> posV, negV;

    //sort pos and negative values
    neg = -999999;
    pos = 999999;
    for(unsigned int i = 0; i < n; i++){
      cin >> usrNum;
      if(usrNum < 0){
        negV.push_back(usrNum); //used as a temp buffer
        if(negV[i] > neg){
          neg = negV[i];
        }
      }
      if(usrNum > 0){
        posV.push_back(usrNum); //used as a temp buffer
        if(posV[i] < pos){
          pos = posV[i];
        }
      }
    }



    //test output
    cout << " ----- " << endl;
    cout << "Negative: " << neg << endl;
    cout << "Positive: " << pos << endl;

    //cerr << temps << endl;

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    //cout << "result" << endl;
}

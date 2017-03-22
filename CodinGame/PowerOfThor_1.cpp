#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//https://www.codingame.com/training/easy/power-of-thor-episode-1

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position

    string moveThor;

    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    int posX, posY;
    posX = initialTX;
    posY = initialTY;

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        if((posX > lightX) && (posY < lightY)){
            posX -= 1;
            posY += 1;
            moveThor = "SW";
        }
        else if((posX < lightX) && (posY < lightY)){
            posX += 1;
            posY += 1;
            moveThor = "SE";
        }
        else if(posX > lightX){
            posX -= 1;
            moveThor = "W";
        }
        else if(posY < lightY){
            posY += 1;
            moveThor = "S";
        }
        else if(posX < lightX){
            posY += 1;
            moveThor = "E";
        }
        else if(posY > lightY){
            posY += 1;
            moveThor = "N";
        }



        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << moveThor << endl;
    }
}

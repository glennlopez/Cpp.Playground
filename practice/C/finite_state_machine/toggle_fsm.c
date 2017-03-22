#include <stdio.h>
unsigned int GPIO_DATA = 0; //simulated Data Out
/*
  This is a simple Finite State Machine excersize for
  detecting odd bits. This example implements the odd bit
  detector as a toggle switch when edge detect cannot be used

    https://www.youtube.com/watch?time_continue=36&v=hT0tHMp3m5k
*/

// (1) create a struct datatype for the state machine
struct state{
  bool out;           // state output
  unsigned next[2];   // possible state transition triggers
};

// (2) type define the struct datatype as "FSM"
typedef const struct state FSM;
#define TOGGLE_OFF 0
#define TOGGLE_ON 1

// (3) create an aray of FSM datatype named "toggle"
FSM toggle[2] = {
// output | next possible states
  {0, {TOGGLE_OFF, TOGGLE_ON}},
  {1, {TOGGLE_ON, TOGGLE_OFF}}
};

// (4) set the initial state for the FSM routine
unsigned int cState = TOGGLE_OFF;

int main(){

  // FSM Routine
  while(1){
    // (a) output based on current state;

    // (b) get input

    // (c) change state based on input and current state

  }


  return 0;
}

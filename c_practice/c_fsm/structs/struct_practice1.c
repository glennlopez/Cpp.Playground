#include <stdio.h>
void red();
void green();
void blue();


// struct state with 1 output and 3 next states 
struct state
{
    void (*out)(void);          // output: one function pointer
    unsigned int nextState[3];  // next states: three possible states
};

// create an array of states and define the inputs and outputs
const struct state FMS[3] = {
    // output   | input for next states
    {&red,      {0, 1, 2}},    // S1 - FMS[0]
    {&green,    {0, 1, 2}},    // S2 - FMS[1]
    {&blue,     {0, 1, 2}}     // S3 - FMS[2]

};

int main()
{

    FMS[2].out();

    return 0;
}





/* STATES */

void red()
{
    printf("RED\n");
}

void green()
{
    printf("GREEN\n");
}

void blue()
 {
     printf("BLUE\n");
 }




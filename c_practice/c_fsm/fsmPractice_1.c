#include <stdio.h>

// a. define the state struct
typedef const struct state{
    // (this state has 1 output and 2 inputs)
    void (*out)(void);      // output
    unsigned int next[2];   // next states
} sType;

// b. define the finite state machine model (as an array of state structs)
sType FSM[2] = {
    // (this finite state machine has 2 possible states)
    {&foo, {0, 1}}, // first state
    {&bar, {1, 0}}  // second state
};


/* Finite state machine */
int main ()
{

    // 1. Run the output for the current state

    // 2. Get the input

    // 3. Change the state based on the input (at the current state)
    
    return 0;
}


/* States */
void foo()
{
    printf("Hello from Foo\n");
}

void bar()
{
    printf("Bar\n");
}


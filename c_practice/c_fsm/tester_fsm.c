// FSM lookup table macro
#define S0 0
#define S1 1
#define S2 2 
#define S3 3 
#define S4 4 
#define S5 5 
#define S6 6 
#define SETTINGS &s0
#define VERSION &s1 
#define START &s2 
#define OPEN &s3 
#define SHORT &s4 
#define PTTBTN &s5 
#define PASSFAIL &s6
#define BACK 0
#define NEXT 1

#include <stdio.h>
#include <unistd.h> // debugging - used for sleep()

// prototypes;
void s0(); void s1(); void s2(); 
void s3(); void s4(); void s5(); 
void s6(); 

/* -------------------------------------------------
 *                  FINITE STATE MODEL
 *                         (Back)      (Next)      
 * -------------------------------------------------
 *      STATE           |   - 0 -   |   - 2 -   |
 * -------------------------------------------------
 * S0: Settings         |   NULL    |   S2      |   
 * S1: Version          |   S0      |   NULL    |   
 * S2: Start Screen     |   NULL    |   S3      |   
 * S3: Open Circuit     |   S3      |   S4      |   
 * S4: Short Circuit    |   S4      |   S5      |   
 * S5: PTT Test         |   S5      |   S6      |   
 * S6: Pass Fail Screen |   NULL    |   S2      |   
 */
typedef struct state_struct{
    void (*out)(void);              // ptr func output
    const unsigned int next[2];     // next states (back and forward)
    unsigned int input;             // stores the user input 
} state;

state FSM[7] = {
    /* S0 */ {SETTINGS,  {S0, S2}},
    /* S1 */ {VERSION,   {S0, S2}},
    /* S2 */ {START,     {S2, S3}}, // *
    /* S3 */ {OPEN,      {S3, S4}}, // *
    /* S4 */ {SHORT,     {S4, S5}}, // *
    /* S5 */ {PTTBTN,    {S5, S6}}, // *
    /* S6 */ {PASSFAIL,  {S6, S2}}  // *
};

// Global variables
int runningState = S1;  // 1. set an initial running state
int nextState = 0;

int main()
{
    
    while (1)
    {
        // 2. run the output of the running state
        FSM[runningState].out();

        // 3. get next state from runningstate's stored input
        nextState = FSM[runningState].input;
        
        // 4. setup the runningState to the current state's nextState, for the next loop iteration
        runningState = FSM[runningState].next[nextState];
    }

    return 0;
}



// S0: Settings
void s0()
{
    printf("Settings\n");
    printf("\n");
}

// S1: Version
void s1()
{
    printf("Fault Finder\n");
    printf("Version 1.00\n");
    printf("\n");

    // simulated hardware-timer go to the next state
    sleep(3);

    // set the input and store the value in the current state's struct
    FSM[runningState].input = NEXT;

}

// S2: Start
void s2()
{
    printf("Press Next\n");
    printf("  To Start\n");
    printf("\n");
}

// S3: Open Circuit
void s3()
{
    printf("Open Circuit\n");
    printf("\n");
}

// S4: Short Circuit
void s4()
{
    printf("Short Circuit\n");
    printf("\n");
}

// S5: PTT test
void s5()
{
    printf("PTT Test\n");
    printf("\n");
}

// S6: Pass-fail Screen
void s6()
{
    printf("Pass-Fail screen\n");
    printf("\n");
}
/* -------------------------------------------------------- 
 *                  FINITE STATE MODEL
 *                         (Back)      (Next)      (Timer)
 * --------------------------------------------------------
 *      STATE           |   - 0 -   |   - 2 -   |
 * ---------------------------------------------------------
 * S0: Settings         |   NULL    |   S2      |   NULL
 * S1: Version          |   S0      |   NULL    |   S2
 * S2: Start Screen     |   NULL    |   S3      |   NULL
 * S3: Open Circuit     |   S3      |   S4      |   NULL
 * S4: Short Circuit    |   S4      |   S5      |   NULL
 * S5: PTT Test         |   S5      |   S6      |   S6
 * S6: Pass Fail Screen |   NULL    |   S2      |   NULL
 */

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

#include <stdio.h>

// prototypes;
void s0(); void s1(); void s2(); 
void s3(); void s4(); void s5(); 
void s6(); 


// State architechture
typedef const struct state_struct{
    void (*out)(void);      // ptr func output
    unsigned int next[3];   // next states   
} FSM;

// Finite state machine structure
FSM State[7] = {
    /* S0 */ {SETTINGS,  {S0, S2, S0}},
    /* S1 */ {VERSION,   {S0, S1, S2}},
    /* S2 */ {START,     {S2, S3, S2}},
    /* S3 */ {OPEN,      {S3, S4, S3}}, 
    /* S4 */ {SHORT,     {S4, S5, S4}}, 
    /* S5 */ {PTTBTN,    {S5, S6, S6}}, 
    /* S6 */ {PASSFAIL,  {S6, S2, S6}}
};


int main()
{
    // 1. set an initial state
    int initialState = S1;
    int currentState = initialState;
    int input;

    while (1)
    {
        // 2. run the output of the current state
        State[currentState].out();

        // 3. get input from user
        printf("Input: ");
        scanf("%i", &input);

        // 4. set the next state based on the input and current state 
        currentState = State[currentState].next[input];
    }

    return 0;
}



// S0: Settings
void s0()
{
    printf("Settings\n");
}

// S1: Version
void s1()
{
    printf("Version\n");
}

// S2: Start
void s2()
{
    printf("Start\n");
}

// S3: Open Circuit
void s3()
{
    printf("Open Circuit\n");
}

// S4: Short Circuit
void s4()
{
    printf("Short Circuit\n");
}

// S5: PTT test
void s5()
{
    printf("PTT Test\n");
}

// S6: Pass-fail Screen
void s6()
{
    printf("Pass-Fail screen\n");
}
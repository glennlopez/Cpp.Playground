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


#include <stdio.h>

// State architechture
typedef const struct state_struct{
    void (*out)(void);      // ptr func output
    unsigned int next[3];   // next states   
} state;

// Finite state machine structure
state FMS[7] = {
    {}, // S0
    {}, // S1
    {}, // S2
    {}, // S3
    {}, // S4
    {}, // S5
    {}  // S6
};


int main()
{


    return 0;
}


// S0: Settings
void s0()
{

}

// S1: Version
void s1()
{

}

// S2: Start
void s2()
{

}

// S3: Open Circuit
void s3()
{

}

// S4: Short Circuit
void s4()
{

}

// S5: PTT test
void s5()
{

}

// S6: Pass-fail Screen
void s6()
{
    
}
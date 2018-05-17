#include <stdio.h>
#include <cs50.h>
/*
    Video: https://edx-video.net/HARCS50X2016-V028700_DTH.mp4
    Notes: https://docs.cs50.net/2017/fall/notes/4/lecture4.html#memory
*/

int main(){

    // fixed string (Hello: ) - stack
    char* greet = "Hello: ";

    // user string (%name%) - stack 
    char* uName = get_string();

    // copy of fixed string + user string (Hello: %name%) - heap

    

    //debug
    //printf("%s", greet);


    printf("\n");
    return 0;
}
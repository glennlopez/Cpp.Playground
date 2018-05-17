 /*
    Challenge Objective:
        [] Read the command line by examining main functions arguments
        [] Determine whether a single argument was typed
        [] Display an error message if the single argument is missing
*/

// solution: https://www.lynda.com/C-tutorials/Solution-Reading-command-line/195668/369008-4.html

#include <stdio.h>
#include <string.h>

// Take in arguments
int main(int argc, char *argv[]){

    // Read the comand line
    printf("%s: (counted %i)\n",((argc == 2)?"Correct use":(argc > 2)? "Too many arguments":"Missing argument"), argc);
    printf("argv[0]: %s\n", argv[0]);
    printf("argv[1]: %s\n", argv[1]);

    // Determine if single argument was typed
    if (argc != 2)
    {
        // Display error message if single argument is missing
        fprintf(stderr, "Usage Error: ./program argument\n");
        return 1;
    }

    printf("\n");
    return 0;
}

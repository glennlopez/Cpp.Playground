//tutorial at: https://www.youtube.com/watch?time_continue=39&v=eDI5Wqjq2a0
            //https://www.youtube.com/watch?time_continue=1380&v=2zPEHYoiyfc
#include <stdio.h>
#include <cs50.h>

//argc = argument count
//argv = argument vector
int main(int argc, char* argv[]){   //<-- using char*
//int main(int argc, string argv[]){ //<-- using string

    //USING char*

    if(argc == 2 ){
        printf("Hello ");
        for(int i = 0; argv[1][i] != '\0'; i++){
            printf("%c", argv[1][i]);
        }
    }


    //USING string
    /*
    if(argc == 2){
        printf("Hello, %s", argv[1]);
    }
    */


    //else statement if no arguments are entered
    else{
        printf("hello world \n");
    }

    printf("\n");
    return 0;
}

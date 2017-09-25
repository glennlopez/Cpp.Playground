#include <stdio.h>
#include <cs50.h>

int main(int argc, char *argv[]){
    int f_Num = 0;
    int s_Num = 0;

    if(argc == 3){

        //convert argument string to int
        f_Num = (int)argv[1][0] - 48;
        s_Num = (int)argv[2][0] - 48;

        printf("First Num: %i\n", f_Num);
        printf("Second Num: %i\n", s_Num);
        printf("Multiplied: %i", f_Num * s_Num);
    }

    //incorrect argument count
    else{
        printf("Bad input\n");
    }

    printf("\n");
    return 0;
}

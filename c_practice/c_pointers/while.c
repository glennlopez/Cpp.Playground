#include <stdio.h>

int main(){

    char *s = "this is a test";
    int num[6] = {1,2,3,4,5,'\0'};

    while(*s++){
        printf("%c", *s);
    }
    printf("\n");
    
    for(int i = 0; num[i] != '\0'; i++){
        printf("%i ", num[i]);
    }

    printf("\n");
    return 0;
}
 /*
    Challenge Objective:
        [] Prompt the user to input text
        [] Send the text to a function
        [] In the function, convert all letters to uppercase, all spaces to underline
        [] Display modified text
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void usrPrompt(char *s);
void lowerToUpper(char *s);
void spaceToUnderline(char *s);
void displayTxt(char *s);


int main(){

    char usrString[150];
    usrPrompt(usrString);
    lowerToUpper(usrString);
    spaceToUnderline(usrString);
    displayTxt(usrString);

    printf("\n");
    return 0;
}


/****************
    SUBROUTINES
*****************/

// user prompt subroutine
void usrPrompt(char *s)
{
    printf("String [150]: ");
    //scanf("%s", s); //<-- will not scan anything after spaces
    gets(s);
}

// lowerToUpper subroutine
void lowerToUpper(char *s)
{   
    for(int i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }

}

// spaceToUnderline subroutine
void spaceToUnderline(char *s)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        {
            s[i] = '_';
        }
    }
}

// display text subroutine
void displayTxt(char *s)
{
    for(int i = 0; s[i]!= '\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

}
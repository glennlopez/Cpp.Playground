#include <stdio.h>

// Equiptment Struct
struct equiptment
{
    char* name;
    int damage;
    int durability;
};

// Player Struct
struct player
{
    char* name;
    int health;
    struct equiptment equiptSlot[3];
};
typedef struct player PlayableCharacter;

void PlayerSetup();

int main()
{
    PlayerSetup();


}






void PlayerSetup()
{
    /* Player 1 setup */
    PlayableCharacter player1;
    player1.name = "Glenn";
    player1.health = 100;
    player1.equiptSlot[0].name = "Sword";
    player1.equiptSlot[1].name = "Shield";
    player1.equiptSlot[2].name = NULL;

    printf("Player 1: %s \n", player1.name);
    
    if (player1.equiptSlot[0].name != NULL)
        printf("Equiptment slot 1: %s\n", player1.equiptSlot[0].name);
    if (player1.equiptSlot[1].name != NULL)
        printf("Equiptment slot 2: %s\n", player1.equiptSlot[1].name); 
    if (player1.equiptSlot[2].name != NULL)
        printf("Equiptment slot 1: %s", player1.equiptSlot[2].name);
    printf("%s Health:", player1.name);
    
    if (player1.health <= 25)
    {
        printf(" ---o\n");
    }

    else if (player1.health <= 50)
    {
        printf(" --oo\n");
    }
    
    else if(player1.health <= 75)
    {
        printf(" -ooo\n");
    }

    else
    {
        printf(" oooo\n");
    }
}
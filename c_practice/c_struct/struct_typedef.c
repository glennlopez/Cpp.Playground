#include <stdio.h>

struct player{
	unsigned int xpos;
	unsigned int ypos;
	unsigned int health;
};

typedef struct player PlayerType;

int main(){
	//boundery x = 100 y = 100 health = 100
	PlayerType player1 = {50,1,100};
	PlayerType npc[4];

	//npc[1] = {10, 20, 100}; //<-- doesnt work
	npc[0].xpos = 10;
	npc[0].ypos = 20;
	npc[0].health = 100;


	printf("Player 1 health: %i\n",player1.health);
	printf("NPC 0 position x= %i, y= %i.\n",npc[0].xpos, npc[0].ypos);
	printf("NPC 1 position x= %i, y= %i.\n",npc[1].xpos, npc[1].ypos);

	printf("\n");
	return 0;
}

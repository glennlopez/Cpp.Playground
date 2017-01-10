#include <stdio.h>

struct player{
	unsigned int xpos;
	unsigned int ypos;
	unsigned int score;
};

typedef struct player NPC;
typedef struct player PC;

int main(){
	NPC space_ship={12,500,0};
	PC player_1={0,500,600};

	printf("Player 1 score: %i\n",player_1.score);

	printf("\n");
	return 0;
}

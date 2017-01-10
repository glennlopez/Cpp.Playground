#include <stdio.h>
#include <stdlib.h>
#include "books.h"

//prototypes
void askUsrNum(int*);
void indexBooks(int, struct book);

int main(){
	int usrNum;
	struct book science[usrNum];

	askUsrNum(&usrNum);	//ask user how many books to catalog
	indexBooks(usrNum, *science);	//record the books using struct

	//output the book data

	printf("Title: %s\n", science[0].title);
	printf("Author: %s\n", science[0].author);
	printf("BIN: %i\n", science[0].bin);
	printf("userNum: %i\n", usrNum);


	printf("\n");
	return 0;
}


/**************************
Functions
**************************/
void askUsrNum(int *usrNum){
	printf("How many books are you cataloging: ");
	scanf("%i", usrNum);
}

void indexBooks(int usrNum, struct book science[]){

	int i = 0;
	int limit = (usrNum -1);
	for(i = 0; i <= limit; i++){
		printf("Book %i Title: ", i+1);
		scanf("%s", science[i].title);

		printf("Book %i Author: ", i+1);
		scanf("%s", science[i].author);

		printf("Book %i BIN: ", i+1);
		scanf("%i", &science[i].bin);

		printf("\n");	//newline
	}
}

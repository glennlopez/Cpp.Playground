#include <stdio.h>
#include <stdlib.h>
#include "struct.h"	//include the struct.h

int main(){
	const int MAXNUM = 3;	//change this when possible
	int i;

	//use the student struct
	struct student physics[MAXNUM];

	//set default grades and id
	i = 0;
	while(i < MAXNUM){
		physics[i].studentID = (i+1);
		physics[i].studentGrade = 'F';
		i++;
	}

	//Change student 2's grade to A
	physics[1].studentGrade = 'A';


	//print out the student id and grade
	i = 0;
	while(i < MAXNUM){
		printf("Student ID: %i\n",physics[i].studentID);	//student id
		printf("Student Grade: %c\n \n",physics[i].studentGrade);	//student grade
		i++;
	}



	printf("\n");
	return 0;
}

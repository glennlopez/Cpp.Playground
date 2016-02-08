
#ifndef LIST_H
#define LIST_H

class List{
private:

	struct node{
		int data;		//<-- stores the data of each node
		node* next;		//<-- points to the next node on the list

	}; typedef struct node* nodePtr;

	/* ALTERNATIVELY: we can code golf the above as follows

		typedef struct node{
			int data;
			node* next;
	} *nodePtr;

	*/

	nodePtr head;		//<-- same as typing node* head;

public:

};

#endif /* LIST_H */

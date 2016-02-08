#ifndef LIST_H
#define LIST_H

class List{
private:

	//defines node strucs for linked list
	typedef struct node{
		int data;		//<-- holds int data
		node* next;		//<-- points to the next node
	}* nodePtr;

	//nodes
	nodePtr head;
	nodePtr curr;
	nodePtr temp;

public:
	//default constructor
	List();

	//functions for manipulating the nodes in private class
	void AddNode(int);
	void DeleteNode(int);
	void PrintList();

};

#endif /* LIST_H */

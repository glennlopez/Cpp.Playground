#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

List::List(){
	//set the node pointer defualts to NULL first
	head = NULL;
	curr = NULL;
	temp = NULL;
}

//NOTE: https://www.youtube.com/watch?v=3gZ7F31Mwi0
void List::AddNode(int addData){
	//create a new node and make a new pointer point to it
	nodePtr n = new node;

	//add the new node to the end of the list
	n->next = NULL;

	//fill new node with data
	n->data addData;

	//if list already exists then...
	if(head != NULL){
		//take curr ptr & make it point where head pts to
		curr = head;

		//advance current pointer to the end of list
		while(curr->next != NULL){

			//make curr node point to the next node
			curr = curr->next;
		}

		/* When pointer is at the end of the list
		 * make the next pointer point to 'n':
		 * the new node.
		 */
		curr->next = n;

	}

	//if element in the list doesnt exist then..
	else{
		//tell the new node that it will be in front of list
		head = n;
	}
}

//NOTE: https://www.youtube.com/watch?v=Gn_C91cGsbw
void List::DeleteNode(int delData){
	//create a node pointer & set it to null
	nodePtr delPtr = NULL;

	temp = head; //<- set to point at start of list
	curr = head; //<- set to point at start of list

	//check to see if current node is what we want to del
	while(curr != NULL && curr->data != delData){

	}

}

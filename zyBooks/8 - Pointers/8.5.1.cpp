#include <iostream>
using namespace std;

/*
	Assign negativeCntr with the number of negative values in the linked list.
*/

class IntNode {
public:
   IntNode(int dataInit = 0, IntNode* nextLoc = 0);
   void InsertAfter(IntNode* nodePtr);
   IntNode* GetNext();
   void PrintNodeData();
private:
   int dataVal;
   IntNode* nextNodePtr;
};




// Constructor
IntNode::IntNode(int dataInit, IntNode* nextLoc) {
   this->dataVal = dataInit;
   this->nextNodePtr = nextLoc;
   return;
}

/* Insert node after this node.
 * Before: this -- next
 * After:  this -- node -- next
 */
void IntNode::InsertAfter(IntNode* nodeLoc) {
   IntNode* tmpNext = 0;

   tmpNext = this->nextNodePtr;    // Remember next
   this->nextNodePtr = nodeLoc;    // this -- node -- ?
   nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
   return;
}

// Print dataVal
void IntNode::PrintNodeData() {
   cout << this->dataVal << endl;
   return;
}

// Grab location pointed by nextNodePtr
IntNode* IntNode::GetNext() {
   return this->nextNodePtr;
}




int main() {
   IntNode* headObj  = 0; // Create intNode objects
   IntNode* nodeObj1 = 0;
   IntNode* nodeObj2 = 0;
   IntNode* nodeObj3 = 0;
   IntNode* currObj  = 0;

   // Front of nodes list
   headObj = new IntNode(-1);

   // Insert nodes
   nodeObj1 = new IntNode(555);
   headObj->InsertAfter(nodeObj1);

   nodeObj2 = new IntNode(999);
   nodeObj1->InsertAfter(nodeObj2);

   nodeObj3 = new IntNode(777);
   nodeObj1->InsertAfter(nodeObj3);

   // Print linked list
   currObj = headObj;
   while (currObj != 0) {
      currObj->PrintNodeData();
      currObj = currObj->GetNext();
   }

   return 0;
}

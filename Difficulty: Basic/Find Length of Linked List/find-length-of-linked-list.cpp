/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        Node* temp_node2 = head;
    	int count2 = 0;
    	while(temp_node2 != NULL){
    		count2 = count2 +1;
    		temp_node2 = temp_node2->next;
    	}
    	return count2;
    }
};


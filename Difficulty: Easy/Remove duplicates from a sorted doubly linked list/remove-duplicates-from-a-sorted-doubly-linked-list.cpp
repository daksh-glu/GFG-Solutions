/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        if (!head) return nullptr;
        Node* current = head;
        while (current != nullptr && current->next != nullptr) {
            Node* nextDistinct = current->next;
            while (nextDistinct != nullptr && nextDistinct->data == current->data) {
                Node* duplicateNode = nextDistinct;
                nextDistinct = nextDistinct->next;
                delete duplicateNode;
            }
            current->next = nextDistinct;
            if (nextDistinct != nullptr) {
                nextDistinct->prev = current;
            }
            current = current->next;
        }
        return head;
    }
};
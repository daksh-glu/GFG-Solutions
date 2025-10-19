/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        if (!head || !head->next || k == 0) return head;
        Node* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }
        temp->next = head;
        k = k % length;
        //int steps = length - k;
        while (k--) temp = temp->next;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
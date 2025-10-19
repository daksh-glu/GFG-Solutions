/*
class Node {
public:
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
    Node* intersectPoint(Node* head1, Node* head2) {
        unordered_set<Node*> st;
        while(head1 != NULL) {
           st.insert(head1);
           head1 = head1->next;
        }
        while(head2 != NULL) {
            if(st.find(head2) != st.end()) return head2;
            head2 = head2->next;
        }
        return NULL;
        
    }
};
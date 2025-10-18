class Solution {
public:
    Node* divide(Node* head) {
        Node* evenHead = new Node(0);
        Node* oddHead = new Node(0);
        Node* even = evenHead;
        Node* odd = oddHead;
        Node* curr = head;
        
        while (curr) {
            if (curr->data % 2 == 0) {
                even->next = curr;
                even = even->next;
            } else {
                odd->next = curr;
                odd = odd->next;
            }
            curr = curr->next;
        }
        
        odd->next = NULL;
        even->next = oddHead->next;
        
        return evenHead->next;
    }
};
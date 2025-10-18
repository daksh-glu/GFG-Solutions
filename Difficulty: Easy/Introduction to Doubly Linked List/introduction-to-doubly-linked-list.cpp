class Solution {
public:
    Node* constructDLL(vector<int>& arr) {
        if(arr.empty()) return NULL;
        Node* head = new Node(arr[0]);
        Node* prev = head;
        for(int i=1; i<arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            prev->next = temp;
            temp->prev = prev;
            prev = temp;
        }
        return head;
    }
};
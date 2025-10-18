class Solution {
public:
    Node* insertAtPos(Node* head, int p, int x) {
        Node* newNode = new Node(x);

        if (head == nullptr)
            return newNode;

        Node* temp = head;

        for (int i = 0; i < p && temp->next != nullptr; i++) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            temp->next = newNode;
            newNode->prev = temp;
            return head;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;

        return head;
    }
};

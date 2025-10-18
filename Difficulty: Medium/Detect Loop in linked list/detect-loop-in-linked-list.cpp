/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node* temp = head;
        unordered_map<Node*, int> nodeMap;
        
        while (temp != nullptr) {
            if (nodeMap.find(temp) != nodeMap.end()) {
                return true;
            }
            nodeMap[temp] = 1;
            temp = temp->next;
        }
        return false;
    }
};
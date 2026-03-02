/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isBST(Node* root) {
        // code here
        function<bool(Node*, long, long)> validate = [&](Node* node, long minVal, long maxVal) -> bool {
        if (!node) return true;
        if (node->data <= minVal || node->data >= maxVal) return false;
        return validate(node->left, minVal, node->data) &&
               validate(node->right, node->data, maxVal);
    };
    return validate(root, LONG_MIN, LONG_MAX);
        
    }
};
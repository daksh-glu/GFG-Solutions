/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* delNode(Node* root, int x) {
        // code here
        if (!root) return NULL;
        if (x < root->data) {
            root->left = delNode(root->left, x);
        } else if (x > root->data) {
            root->right = delNode(root->right, x);
        } else {
            if (!root->left) return root->right;
            if (!root->right) return root->left;
            Node* cur = root->right;
            while (cur->left) cur = cur->left;
            root->data = cur->data;
            root->right = delNode(root->right, cur->data);
        }
        return root;
    }
};
/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
      bool isIdentical(Node* a, Node* b) {
        if (!a && !b) return true;
        if (!a || !b) return false;
        return a->data == b->data &&
               isIdentical(a->left, b->left) &&
               isIdentical(a->right, b->right);
    }
    bool isSubTree(Node *root1, Node *root2) {
        // code here
        if (!root2) return true;
        if (!root1) return false;
        if (isIdentical(root1, root2)) return true;
        return isSubTree(root1->left, root2) || isSubTree(root1->right, root2);
        
    }
};
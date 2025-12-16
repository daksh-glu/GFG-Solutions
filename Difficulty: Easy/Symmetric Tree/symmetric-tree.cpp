class Solution {
public:
    bool mirror(Node* a, Node* b) {
        if (!a && !b) return true;
        if (!a || !b) return false;
        if (a->data != b->data) return false;
        return mirror(a->left, b->right) && mirror(a->right, b->left);
    }

    bool isSymmetric(Node* root) {
        if (!root) return true;
        return mirror(root->left, root->right);
    }
};

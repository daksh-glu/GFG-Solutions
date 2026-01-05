class Solution {
public:
    int countNodes(Node* root) {
        if (!root) return 0;
        int l = 0, r = 0;
        Node* left = root;
        Node* right = root;
        while (left) {
            l++;
            left = left->left;
        }
        while (right) {
            r++;
            right = right->right;
        }
        if (l == r) return (1 << l) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

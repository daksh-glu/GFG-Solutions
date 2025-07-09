class Solution {
public:
    void preorderTraversal(Node* root, vector<int>& ans) {
        if (root == NULL) return;
        
        ans.push_back(root->data);           // Visit root
        preorderTraversal(root->left, ans);  // Traverse left subtree
        preorderTraversal(root->right, ans); // Traverse right subtree
    }

    vector<int> preorder(Node* root) {
        vector<int> ans;
        preorderTraversal(root, ans);
        return ans;
    }
};

class Solution {
public:
    struct Info {
        int size, minVal, maxVal;
        bool isBST;
    };
    
    Info solve(Node* root, int &ans) {
        if (!root) return {0, INT_MAX, INT_MIN, true};
        
        Info left = solve(root->left, ans);
        Info right = solve(root->right, ans);
        
        Info curr;
        curr.size = left.size + right.size + 1;
        
        if (left.isBST && right.isBST && root->data > left.maxVal && root->data < right.minVal) {
            curr.minVal = min(root->data, left.minVal);
            curr.maxVal = max(root->data, right.maxVal);
            curr.isBST = true;
            ans = max(ans, curr.size);
        } else {
            curr.isBST = false;
            curr.minVal = INT_MIN;
            curr.maxVal = INT_MAX;
        }
        
        return curr;
    }
    
    int largestBst(Node *root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};
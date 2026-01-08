class Solution {
public:
    int kthSmallest(Node* root, int k) {
        stack<Node*> st;
        Node* curr = root;
        while (curr || !st.empty()) {
            while (curr) {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            k--;
            if (k == 0) return curr->data;
            curr = curr->right;
        }
        return -1;
    }
};

class Solution {
public:
    int maxPeople(vector<int> &arr) {
        int n = arr.size();
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        stack<int> st;
        
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            left[i] = st.empty() ? i : i - st.top() - 1;
            st.push(i);
        }
        
        while (!st.empty()) st.pop();
        
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            right[i] = st.empty() ? n - i - 1 : st.top() - i - 1;
            st.push(i);
        }
        
        int maxVisible = 0;
        for (int i = 0; i < n; i++) {
            maxVisible = max(maxVisible, left[i] + right[i] + 1);
        }
        
        return maxVisible;
    }
};
class Solution {
public:
    int longestSubarray(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> prefix(n + 1, 0);
        
        for (int i = 0; i < n; i++) {
            int val = (arr[i] > k) ? 1 : -1;
            prefix[i + 1] = prefix[i] + val;
        }
        
        vector<int> st;
        for (int i = 0; i <= n; i++) {
            if (st.empty() || prefix[i] < prefix[st.back()]) {
                st.push_back(i);
            }
        }
        
        int ans = 0;
        for (int i = n; i >= 0; i--) {
            while (!st.empty() && prefix[i] > prefix[st.back()]) {
                ans = max(ans, i - st.back());
                st.pop_back();
            }
        }
        
        return ans;
    }
};
class Solution {
  public:
    int countSubarrays(vector<int> &arr) {
        // code here
        int  n = arr.size();
        long long ans =0;
        stack<int> st;
        for(int i=n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans += (st.empty() ? n-i : st.top() - i);
            st.push(i);
        }return ans;
    }
};
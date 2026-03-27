class Solution {
public:
    int maxStep(vector<int>& arr) {
        int ans = 0, cur = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > arr[i-1]) cur++;
            else cur = 0;
            ans = max(ans, cur);
        }
        return ans;
    }
};
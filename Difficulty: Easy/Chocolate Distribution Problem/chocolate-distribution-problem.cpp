class Solution {
public:
    int findMinDiff(vector<int>& a, int m) {
        if (m == 0 || a.size() < m) return 0;
        
        sort(a.begin(), a.end());
        
        int ans = INT_MAX;
        for (int i = 0; i + m - 1 < a.size(); i++) {
            ans = min(ans, a[i + m - 1] - a[i]);
        }
        return ans;
    }
};

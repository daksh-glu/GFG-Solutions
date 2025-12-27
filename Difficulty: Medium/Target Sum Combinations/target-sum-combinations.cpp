class Solution {
public:
    void solve(int idx, vector<int>& arr, int target, vector<int>& temp, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (idx == arr.size() || target < 0) return;

        temp.push_back(arr[idx]);
        solve(idx, arr, target - arr[idx], temp, ans);
        temp.pop_back();

        solve(idx + 1, arr, target, temp, ans);
    }

    vector<vector<int>> targetSumComb(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0, arr, target, temp, ans);
        return ans;
    }
};

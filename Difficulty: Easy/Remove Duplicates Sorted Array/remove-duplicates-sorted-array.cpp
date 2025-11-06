class Solution {
public:
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> ans;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (i == 0 || arr[i] != arr[i - 1]) {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

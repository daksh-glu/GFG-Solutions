class Solution {
public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        int n = arr1.size();
        int m = arr2.size();
        int count = 0;

        unordered_set<int> s(arr2.begin(), arr2.end());

        for (int i = 0; i < n; i++) {
            int required = x - arr1[i];
            if (s.find(required) != s.end()) {
                count++;
            }
        }
        return count;
    }
};

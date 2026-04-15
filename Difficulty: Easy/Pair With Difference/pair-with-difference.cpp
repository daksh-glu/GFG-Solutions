class Solution {
public:
    bool findPair(vector<int> &arr, int x) {
        sort(arr.begin(), arr.end());
        int i = 0, j = 1;
        int n = arr.size();
        while (i < n && j < n) {
            int diff = arr[j] - arr[i];
            if (i != j && diff == x) return true;
            else if (diff < x) j++;
            else i++;
        }
        return false;
    }
};